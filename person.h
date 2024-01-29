#ifndef PERSON_H
#define PERSON_H
#include<iostream>

using namespace std;

class Person
{
private:
    string fname, lname;
public:
    Person(string fn, string ln);
    ~Person();
    void personInfo();
};

#endif // PERSON_H
