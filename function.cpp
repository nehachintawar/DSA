/*de
#include <iostream>
using namespace std;

//function defination
void printHello() {
    cout << "hello\n";
    return 3;
}

int main() {
    //function call / invoke
    cout << printHello() << endl;

    return 0;
}
*/
#include <iostream>
using namespace std;

//sum of 2 number
int sum(int a, int b){
    int s = a + b;
    return s;
}
//min of 2 nums

int minOfTwo(int a, int b) {
    if(a< b) {
        return a;
    } else {
        return b;
    }
    
}
int main() {
    cout << "min = " << minOfTwo(5, 3) << endl; //arguments

    return 0;
}

//calculate sum of numbers from 1 to N

#include <iostream>
using namespace std;

int sumN(int n) {
    int sum = 0;

    for(int i=1; i<=n; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    cout << sumN(5) << endl;
    cout << sumN(10) << endl;
    return 0;
}

//calculate N factorial

#include <iostream>
using namespace std;
int factorialN(int n) {
    for(int i=1; i<=n; i++) {
        fact *= i;
    }

    return fact;
}

//void fun() {
  //  int x = 25;
  //  cout << "x = " << x << endl;
//}

int main() {
    cout << factorialN(4) << endl;
    cout << factorialN(4) << endl;
    return 0;

}

#include <iostream>
using namespace std;

int sum(int a, int b) {
    a = a + 10; //15
    b = b + 10; //14
    return a+b; //29
}

int main() {
    int a = 5, b = 4;
    cout << sum(a, b) << endl;

    cout << a << endl;
    cout << b << endl;
    return 0;
}

#include <iostream>
using namespace std;

int changeX(int x) {
    x = 2*x;
    cout << "x = " << x << endl;
}

int main() {
    int x = 5;
    changeX(x);

    cout << "x = " << x << endl;
    return 0;
}

//calculate sum of digits of a number

#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int digSum = 0;

    while(num > 0) {
        int lastDig = num % 10;
        num /= 10;

        digSum += lastDig;
    }

    return digSum;
}

int main() {
    cout << "sum = " << sumOfDigits(2345) << endl;

    return 0;
}

//claculate nCr binomial coefficient for n & r

#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;

    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r) {
     int fact_n = factorial(n);
    int fact_r = factorial(r); 
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r * fact_nmr);

}

int main() {
    int n = 8, r = 2;
    cout << nCr(n,r) << endl;


    return 0;
}
