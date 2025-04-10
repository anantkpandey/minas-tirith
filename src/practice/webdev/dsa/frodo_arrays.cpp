// frodo_arrays.cpp - Gandalf the White teaches Frodo static array operations
#include <iostream>
using namespace std;

const int MAX_SIZE = 5;  // Static array size - like hobbit holes

// Function to traverse array
void traverse(int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty, Frodo—no treasures to show!" << endl;
        return;
    }
    cout << "Array holds: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert at position
void insert(int arr[], int& size, int value, int pos) {
    if (size >= MAX_SIZE) {
        cout << "Array full, Frodo—no room for more!" << endl;
        return;
    }
    if (pos < 0 || pos > size) {
        cout << "Invalid position, lad—stay within bounds!" << endl;
        return;
    }
    // Shift elements right
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    size++;
    cout << "Inserted " << value << " at position " << pos << endl;
}

// Function to delete at position
void deleteAt(int arr[], int& size, int pos) {
    if (size == 0) {
        cout << "Array empty, Frodo—nothing to remove!" << endl;
        return;
    }
    if (pos < 0 || pos >= size) {
        cout << "Invalid position, lad—choose wisely!" << endl;
        return;
    }
    // Shift elements left
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Deleted at position " << pos << endl;
}

int main() {
    int arr[MAX_SIZE] = {0};  // Static array - memory fixed
    int size = 0;             // Current number of elements

    // Memory layout - array starts empty
    cout << "Array begins empty, Frodo—size: " << size << endl;

    // Insert elements
    insert(arr, size, 1, 0);  // Ring count
    insert(arr, size, 2, 1);  // Hobbits in party
    insert(arr, size, 3, 1);  // Days to Rivendell
    traverse(arr, size);      // 1 3 2

    // Delete element
    deleteAt(arr, size, 1);   // Remove middle
    traverse(arr, size);      // 1 2

    // Indexing example
    cout << "Element at index 0: " << arr[0] << endl;  // 1

    return 0;
}