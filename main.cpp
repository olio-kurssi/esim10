#include "person.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    shared_ptr<Person> objectPerson = make_shared<Person>("Teppo", "Testi");
    objectPerson->personInfo();

    return 0;
}
