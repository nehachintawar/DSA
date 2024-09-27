#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter a :" << endl;
    cin >> a;

    cout << "enter b : ";
    cin >> b;

    cout << a << " + " << b << " = " << a+b << endl;
    cout << a << " - " << b << " = " << a-b << endl;
    cout << a << " * " << b << " = " << a*b << endl;
    cout << a << " / " << b << " = " << (float)a/b << endl;
    
    return 0;// integer valune return 
}