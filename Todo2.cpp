#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int x = 0;
    int sum = 0;
    for (int i = 0; i < 5; i++){
        cin >> x;
        sum += x; 
    }
    cout << sum/5 << endl;
    return 0;
}