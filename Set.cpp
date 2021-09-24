#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <set>
using std::set;
#include <cstdio>
#include <string>
using std::string;
#include <vector>
using namespace std;

typedef set<int>::iterator si; /* Now you can type si instead of set<int>::iterator */

void setTest(){
    set<int> S;
    for(int i = 0; i < 10; i++){
        S.insert(i*i);
    }
    int x;
    while(cin>>x){
        if(S.find(x)!= S.end()){
            cout << "A square" << endl;
        }else{
            cout << "Not a square" << endl;
        }
    }
    
}
int main(){
    return 0;
}