//squre pattern

#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i=1; i<=n; i++) { //outer

         for(int j=1; j<=n; j++) { //inner
             cout << j << " ";
         }

           cout << endl;
    }

    return 0;
    
}

/*
#include <iostream>
using namespace std;

//int main() {
    int n = 4;

    for(int i=1; i<=n; i++) { //outer

         for(int j=1; j<=n; j++) { //inner
             cout << "* ";
         }

           cout << endl;
    }

    return 0;
    
}


#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i=1; i<=n; i++) { //outer
        char ch = 'A';

         for(int j=1; j<=n; j++) { //inner start => line start
             cout << ch;
              ch = ch + 1;
         }

           cout << endl;
    }

    return 0;
    
}


include <iostream>
using namespace std;

int main() {
    int n = 3;

    int num = 1;

    for(int i=0; i<n; i++) { //outer

         for(int j=0; j<n; j++) { //inner start => line start
             cout << num << " ";
              num++;
         }

           cout << endl;
    }

    return 0;
    
}


#include <iostream>
using namespace std;

int main() {
    int n = 3;
    char ch = 'A';

    for(int i=1; i<=n; i++) { //outer

            for(int j=1; j<=n; j++) { //inner start => line start
            cout << ch;
            ch = ch + 1;
         }

           cout << endl;
    }

    return 0;
    
    }



include <iostream>
using namespace std;

int main() {
    int n = 3;

    int num = 1;

    for(int i=0; i<n; i++) { //outer

         for(int j=0; j<n; j++) { //inner start => line start
             cout << num << " ";
              num++;
         }

           cout << endl;
    }

    return 0;
    
}


#include <iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i=0; i<n; i++) {//n

        for(int j=0; j<i+1; j++) {//i+1
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i=0; i<n; i++){

        for(int j=0; j<i+1; j++) {
            cout << (i+1);
        }
        cout << endl;
    }

    return 0;
}

//rahil heeeeeeee
#include <iostream>
using namespace std;

int main(){
    int n = 3;
    char ch = 'A';

    for(int i=0; i<n; i++){

        for(int j=0; j<i+1; j++) { 
           
         cout << ch;
            ch = ch + 1;
    }
    cout << endl;
    }
    return 0;
}
//rahil heeeeeeee


//reverse pattern
#include <iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i=0; i<n; i++) {
        for(int j=i+1; j>0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}


//FLOYD'S TRIANGLE PATTERN

#include <iostream>
using namespace std;

int main (){
    int n = 4;
    int num = 1;

    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){ //backwards => i+1
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}

//INVERTED TRIANGLE PATTERN

#include <iostream>
using namespace std;

int main(){
    int n =4;

    int num = 1;
    for(int i=0; i<n; i++) {
        //spaces
        for(int j=0; j<n-i; j++){
            cout << "";
        }

        //nums
        for(int j=0; j<n-i; j++) {
            cout << (i+1);
        }
        cout << endl;
    }
    return 0;
}


//PYRAMID PATTERN
#include <iostream>
using namespace std;

int main(){
    int n = 8;

    for(int i=0; i<n; i++){ 
    //spaces : n-i-1
    for(int j=0; j<n-i-1; j++) {
        cout << " ";
    }
    //nums1 : i+1
    for(int j=1; j<=i+1; j++) {
        cout << j;
    }

    //nums2
    for(int j=i; j>0; j--){
        cout << j;
    }
    cout << endl;
    }
}


//HOLLOW DIAMOND PATTERNS

#include <iostream>
using namespace std;

int main(){
    int n = 4;

//top
    for(int i=0; i<n; i++) {
        //spaces
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }

        cout << "*";

        if(i !=0) {
            //spaces
            for(int j=0; j<2*i-1; j++) {
                cout << " ";
            }
            
            cout << "*";
        }

        cout << endl;
    }

    //bottom

    for(int i=0; i<n-1; i++) { //0 to n-2
        //spaces

        for(int j=0; j<i+1; j++) {
            cout << " ";
        }

        cout << "*";

        if(i != n-2) {
            //spaces
            for(int j=0; j<2*(n-i)-5; j++) {
            cout << " ";
        }

            cout << "*";
        }

        cout << endl;
    }
    return 0;

}
*/