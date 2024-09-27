//arithmetic operation

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10;

    cout << "sum = " << (a + b) << endl;
    cout << "difference = " << (a - b) << endl;
    cout << "product = "<<(a * b) << endl;
    cout << "division = "<<(a / b) << endl;
    cout << "modulo = "<<(a % b) << endl;
    return 0; // integer valune return
}

//relational operation

#include<iostream>
using namespace std;

int main()
{
    cout << (3<5) << endl;//true ->1
    cout << (3>5) << endl;//false ->0
    cout << (3<=5) << endl;//true ->1
    cout << (3 !=5) << endl;//false ->0
    return 0;// integer valune return 
}

//Logical operator
#include<iostream>
using namespace std;

int main()
{
    cout << ((3<1) || (3<1)) << endl;
    return 0;// integer valune return 
}