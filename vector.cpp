#include <iostream>
#include <vector>
#include <algorithm> // For std::sort and std::reverse

using namespace std;
//added comment for git
//added another line
int main() {
    vector<int> v; // Default initialization

    // Adding elements
    v.push_back(1); // Add element at the end, O(1) amortized
    v.push_back(2); // Add element at the end, O(1) amortized
    v.push_back(3); // Add element at the end, O(1) amortized

    // Accessing elements
    cout << "First element: " << v[0] << endl; // Using subscript operator, O(1)
    cout << "Last element: " << v[v.size() - 1] << endl; // Using subscript operator, O(1)

    // Modifying elements
    v[0] = 10;
    cout << "Modified first element: " << v[0] << endl; // O(1)

    // Iterating over elements
    for (const int& elem : v) {
        cout << "Element: " << elem << endl; // O(n)
    }

    // Finding an element
    auto it = find(v.begin(), v.end(), 2); // Find element, O(n)
    if (it != v.end()) cout << "Element 2 found at index: " << distance(v.begin(), it) << endl;

    // Inserting elements
    v.insert(v.begin() + 1, 20); // Insert element at specific position, O(n)
    cout << "Element inserted at position 1: " << v[1] << endl;

    // Removing elements
    v.erase(v.begin() + 1); // Remove element at specific position, O(n)
    cout << "Element at position 1 removed: " << v[1] << endl;

    // Clearing the vector
    v.clear(); // O(n)
    cout << "Size after clear: " << v.size() << endl; // O(1)

    // Checking if vector is empty
    if (v.empty()) cout << "The vector is empty!" << endl; // O(1)
    else cout << "The vector is not empty!" << endl;

    // Sorting the vector
    v = {3, 1, 2}; // Re-initialize vector
    sort(v.begin(), v.end()); // O(n log n)
    cout << "Sorted vector: ";
    for (const int& elem : v) {
        cout << elem << " ";
    }
    cout << endl;

    // Reversing the vector
    reverse(v.begin(), v.end()); // O(n)
    cout << "Reversed vector: ";
    for (const int& elem : v) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
