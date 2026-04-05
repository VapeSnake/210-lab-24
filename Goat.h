// Goat.h

#ifndef GOAT_H
#define GOAT_H
#include <iostream>
using namespace std;

class Goat {
private:
    string name;
    int age;
    string color;
public: 
    Goat()                          { name = ""; age = 0; color = ""; }
    // Constructor for goat with different parameters. Task 1 complete.
    Goat(string n)                  { name = n; age = 0; color = ""; }
    Goat(string n, int a)            { name = n; age = a; color = ""; }
    Goat(string n, int a, string c) { name = n; age = a; color = c; }


    // setters and getters
    void set_name(string n)         { name = n; };
    string get_name() const         { return name; };
    void set_age(int a)             { age = a; };
    int get_age() const             { return age; }
    void set_color(string c)        { color = c; }
    string get_color() const        { return color; }

    // Overloaded < operator for sorting goats in set.
    bool operator < (const Goat & other) const {
        if (name != other.name) {
            return name < other.name; // Sort by name first.
        } else if (age != other.age) {
            return age < other.age; // If names are the same, sort by age.
        } else {
            return color < other.color; // If names and ages are the same, sort by color.
        }
    }
};

#endif