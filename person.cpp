#include "person.h"

Person::Person()
{

}

Person::~Person()
{
    cout<<"\nPerson luokan destruktoria kutsuttiin\n";
}

string Person::getName() const
{
    return name;
}

void Person::setName(const string &newName)
{
    name = newName;
}

int Person::getBirthYear() const
{
    return birthYear;
}

void Person::setBirthYear(int newBirthYear)
{
    birthYear = newBirthYear;
}

