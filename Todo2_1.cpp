#include <iostream> 
using std::cout;
using std::cin;

int main(){
    int a = 0;
    int b = 0;
    cout << "Enter First Numb \n";
    cin >> a;
    b = a;
    cout << "Enter Second Numb \n";
    cin >> a;
    b += a;
    cout << "Enter Third Numb \n";
    cin >> a;
    b += a;
    cout << "Enter Fourth Numb \n";
    cin >> a;
    b += a;
    cout << "Enter Fifth Numb \n";
    cin >> a; 
    b += a;
    cout << b/5 << "\n";
    return 0;
}