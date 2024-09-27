

//operator precedence

#include <iostream>
using namespace std;

int main() {

    cout << ((5-2) * 6) << endl;
    return 0;
    
}

//scope
#include <iostream>
using namespace std;

int x = 10;

void fun() {
    cout << x << endl;
}

int main() {
    fun();
    cout << x << endl;
    return 0;
    
}

//data type

#include <iostream>
using namespace std;

int main() {

    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof( long long int) << endl;
    return 0;
    
}

#include <iostream>
using namespace std;

int main() {
    unsigned int x = -10;

    cout << x << endl;
    return 0;
    
}