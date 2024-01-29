#include "person.h"

Person::Person(string fn, string ln)
{
    fname=fn;
    lname=ln;
}
Person::~Person(){
    cout<<"Person luokan tuhoaja"<<endl;
}

void Person::personInfo()
{
    cout<<"Nimeni on : "<<fname<<" "<<lname<<endl;
}
