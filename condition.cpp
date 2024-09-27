//#include <iostream>
//using namespace std;

//int main() {
    //int n;
   // cout << "enter number : ";
   // cin >> n;

   // if(n%2 == 0) {
   //     cout << "even\n";
  //  } else {
   //     cout << "odd\n";
   // }

   // return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int marks;
//    cout << "enter marks : ";
    //cin >> marks;

 //   if(marks >= 90) {
 //       cout << "A\n";
 //   } else if(marks >= 80 && marks <90) {
 //       cout << "B\n";
 //   } else {
 //       cout << "C\n";
 //   }

 //   return 0;
//}

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "enter char : ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z') {
        cout << "lowercase\n";
    } else {
        cout << "uppercase\n";
    }

    return 0;
}

//implicite conversion type

//ternary statement  = 3

#include <iostream>
using namespace std;

int main() {
    int n = 45;

    cout << (n >= 0 ? "positive" : "negative") << endl;
    return 0;
}