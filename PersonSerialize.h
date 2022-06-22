#ifndef MEMENTO_PERSONSERIALIZE_H
#define MEMENTO_PERSONSERIALIZE_H

#include <fstream>

#include "Person.h"

using namespace std;

class PersonSerialize {
public:
    static void Serialization(Person* person, string path) {
        ofstream file;
        file.open(path);

        if (file.is_open()) {
            file << person->lastName << "|" << person->firstName << "|" << person->age << endl;
        }

        file.close();
    }

    static Person* Deserialization(string path) {
        ifstream file;
        file.open(path);

        Person* person = nullptr;

        if (file.is_open()) {
            string str;
            getline(file, str);

            string firstName;
            string lastName;
            int age;

            int pos;

            pos = str.find('|');
            lastName = str.substr(0, pos);
            str = str.substr(pos + 1);

            pos = str.find('|');
            firstName = str.substr(0, pos);

            age = stoi(str.substr(pos + 1));

            person = new Person(firstName, lastName, age);
        }

        file.close();

        return person;
    }
};


#endif //MEMENTO_PERSONSERIALIZE_H
