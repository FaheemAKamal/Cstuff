#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <cmath>
using std::cbrt;

int main(){
    #if 0
    int x = 0;
    cout << "Enter a number \n";
    cin >> x;
    if (x == pow(cbrt(x),3)){
        cout<<"Its a cubic number!";
    }else{
        cout<<"Nope";
    }
    #endif

    int x = 0;
    int count = 0;
    cout << "Enter a number \n";
    cin >> x;
    while (cin >> x){
        if (x == pow(cbrt(x),3)){
            cout<<"Its a cubic number!";
        } 
        else{
            cout<<"Nope";
        } 
    }
return 0;
}
