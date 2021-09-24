#include <iostream>
using std::cout;
using std::cin;

int main(){
    int x; /*Created an integer and labeled it as x*/
    cout << x << "\n"; /* Since x was not initialized as 0 it can be any integer potentially */
    x = 7; /* We store 7 in x */
    cout << x << "\n"; /*Output the value of x */

    cout << "Size of Integer: " << sizeof(x) << "\n"; /* bytes of x */
    
    char c = 'j';
    cout << "Size of Character: " << sizeof(c) << "\n"; /* bytes of c */
    
    double d = 100000.0;
    cout << "Size of Double: " << sizeof(d) << "\n"; /* bytes of d */
    
    double a = 0.0;
    double b = 0.00000000000000000001;

    if (a+d == b+d){
        cout << "you equal bro\n";
    } else {
        cout << "nah b\n";
    }
    return 0;

}