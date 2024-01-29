# Smart Pointer

Esimerkissä esiintyy sama Person luokka kuin aiemmissakin ja siinä ei ole mitään aiemmasta poikkeavaa.

Sen sijaan main.cpp:ssä luodaan **smart pointer** Person olioon. Vaikka nyt olio luodaan kekoon, sitä ei tarvitse itse tuhota.

main.cpp:n koodi on siis seuraava 
<pre>
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

</pre>