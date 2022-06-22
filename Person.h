#ifndef MEMENTO_PERSON_H
#define MEMENTO_PERSON_H

#include <string>

using namespace std;

class Person {
public:
    string firstName;
    string lastName;
    int age;

    Person(const string &firstName, const string &lastName, int age) : firstName(firstName), lastName(lastName),
                                                                       age(age) {}
};


#endif //MEMENTO_PERSON_H
