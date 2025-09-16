#include <iostream>
#include <set>
using namespace std;
int main() {
set<int> set; // Create
set.insert(10); // Add element (Create)
set.insert (20);

cout << "Set: "; // Read
for (int i: set)
    cout << i << " ";

cout << endl;
// Update: Sets automatically ensure that all elements are unique and sorted,
// so updating an element to a new value involves removing the old one and inserting the new one.
set.erase(10);
set.insert(5);
cout << "Set: "; // Read
for (int i: set)
    cout << i << " ";

cout << endl;
set.erase(20); // Delete element
return 0;
}
