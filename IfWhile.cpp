#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;


int main(){
    #if 0
    cout << "Did you remember to call your mom?";
    string answer;
    cin >> answer; 
    if (answer == "No" || "N"){
        cout << "Go call dumbass \n";
    } else {
        cout << "Good job. \n";
    }
    #endif
    #if 0
    int i = 0;
    while (i < 10){
        cout << i*i << "\n";
        i = i+1;
    }
    cout << "i == " << i << "\n";
    #endif 

    #if 0
    int n,x;
	int count=0;
	cin >> n;
	x=n;
	while (n%2==0){
		n/=2;
		count++;
	}
	if (n==1) {
		cout << "2**" << count << "=" << x <<endl;
	}
	else{
		cout << "Invalid" << endl;
	}
    #endif 

    #if 0 
    int n, x;
    cin >> x;
    n = x;
    while (cin >> x){
        n +=x;
    }
    cout << n << endl;
    
    #endif
}

