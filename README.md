# Smart Pointer

Esimerkissä esiintyy sama Person luokka kuin aiemmissakin ja siinä ei ole mitään aiemmasta poikkeavaa.

Sen sijaan main.cpp:ssä luodaan **smart pointer** Person olioon. Vaikka nyt olio luodaan kekoon, sitä ei tarvitse itse tuhota.

main.cpp:n koodi on siis seuraava 
<pre>
#include "person.h"

#include &lt;iostream&gt;
#include &lt;memory&gt;

using namespace std;

int main()
{
    
    shared_ptr&lt;Person&gt; objectPerson = make_shared&lt;Person&gt;("Teppo", "Testi");
    objectPerson-&gt;personInfo();

    return 0;
}

</pre>