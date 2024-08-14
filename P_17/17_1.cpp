#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;
    string city;
    string course;
};

void print(Person *person) {
    cout << person->name << " is " << person->age << " years old " << person->course << " course" << " and "
         << "live in " << person->city << endl;
}

int main() {
    Person person;
    person.name = "Harry";
    person.age = 23;
    person.city = "Kharkiv";
    person.course = "1";
    cout << "Meet " << person.name;
    print(&person);

    Person person2;
    person2.name = "Devid";
    person2.age = 19;
    person2.city = "Kharkiv";
    person2.course = "2";
    cout << "Meet " << person2.name;
    print(&person2);
    return 0;
}