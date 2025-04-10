// frodo_basics.cpp - Gandalf the White teaches Frodo C++ basics
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Print
    cout << "Hail, Frodo Baggins, from Gandalf the White!" << endl;

    // Basic math with variables
    int apples = 5;        // Integer - hobbit apples
    float pie = 3.14;      // Float - pi for a pie
    int total = apples + 2;
    float cost = apples * pie;

    cout << "Apples: " << apples << endl;
    cout << "Add 2: " << total << endl;
    cout << "Cost of pies: " << cost << endl;  // 15.7

    // Data types
    int rings = 1;               // Integer - One Ring
    float height = 4.5;          // Float - hobbit height in feet
    bool hasRing = true;         // Boolean - Frodo’s burden
    string name = "Frodo";       // String - our hero

    cout << "\nRings: " << rings << endl;
    cout << "Height: " << height << endl;
    cout << "Has Ring? " << (hasRing ? "Yes" : "No") << endl;
    cout << "Name: " << name << endl;

    // Type conversion
    string ringCount = to_string(rings);    // Int to string
    int tall = (int)height;                 // Float to int
    cout << "Ring count as string: " << ringCount << endl;
    cout << "Height as int: " << tall << endl;  // 4

    // String manipulation
    string greeting = "Hail, " + name + " of the Shire!";
    string upperName = name;
    for (char &c : upperName) c = toupper(c);  // To uppercase
    cout << greeting << endl;                  // Hail, Frodo of the Shire!
    cout << "Uppercase name: " << upperName << endl;  // FRODO
    cout << "Name length: " << name.length() << endl; // 5

    return 0;
}