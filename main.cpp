#include <iostream>

#include "Person.h"
#include "PersonSerialize.h"

int main() {

    Person* person = new Person("Andrey", "Starinin", 36);
    PersonSerialize::Serialization(person, "person.dat");

    Person* person2 = PersonSerialize::Deserialization("person.dat");
    cout << person2->lastName << " " << person2->firstName << ", " << person2->age << endl;

    return 0;
}
