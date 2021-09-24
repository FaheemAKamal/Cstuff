#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstdio>
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <algorithm>
using std::swap;

#if 0 /*Introducing Vectors */

void test(){
    printf("Testing Capacity Growth. \n");
    vector<int> v;
    for(size_t i = 0; i < 20; i++){
        printf("%lu\n", v.capacity());
        v.push_back(i);
        cout<<i<<endl;
    }
}

int main(void){
#if 0
    test();
#else 
    int n;
    vector<int> V;
    while(cin >> n){
        V.push_back(n);
    }
#endif
return 0;
}
#endif

#if 0 /* Todo:Function that takes a vector and searches for a particular value of x (returns true if x is found)*/ 
int f(vector<int> n, int x){
    int find = x;
    for(size_t i = 0; i < n.size()-1; i++){
        if(find == n[i]){
            return true;
        }
    }
}
int main(){
    int y, x;
    vector<int> t;
    cout<<"What you looking for bro? \n";
    cin >> x;
    cout<<"Whats your value? \n";
    while(cin>>y){
        t.push_back(y);
    }
    for(size_t i = 0; i < t.size()-1 ; i++){
        cout<< f(t,x) << endl;
    }
    return 0;
}

#endif

#if 0

/* Todo: Read list of integer and print in reverse order */

int main(){
    int x = 0;
    vector<int> v;
    cout<<"List out some numbers \n";
    while (cin >> x){
        v.push_back(x);
    }
    for(int i = v.size()-1; i >= 0; i--){
        cout<<v[i]<<endl;
    }
}

#endif

#if 0

/* Function that takes a vector and places elements in a sorted order */

int main(){
    int x = 0;
    vector<int> v;
    cout<<"List out some numbers! \n";
    while(cin >> x){
        v.push_back(x);
        sort(v.begin(), v.end());
    }
    for (size_t i = 0; i < v.size()-1 ; i++){
        cout << v[i];
    }
    return 0;
}
#endif

#if 0 /* Same Todo as above but without sort function Attempt doesnt work*/

int main(){
    int x = 0;
    int temp = 0;
    vector <int> v;
    cout <<"List out some numbers! \n";
    while(cin >> x){
        v.push_back(x);
        for(size_t i = 0; i < v.size(); i++){
            temp = i;
            for(size_t j = i+1; j < v.size(); j++){
                if(v[j]<v[temp]){
                    temp = j;
                }
            }
            int store = v[temp];
            v[temp] = v[i];
            v[i] = temp;
        }
        cout<<v[x];
    }
    
    return 0;
}
#endif


#if 0 /* Same Todo as above but without sort function */

size_t indexOfSmallest(const vector<int>& V, size_t start) {
	size_t smallindex = start;
	for (size_t i = start+1; i < V.size(); i++) {
		if (V[i] < V[smallindex]) smallindex = i;
	}
	/* TODO: add a line that changes the contents of
	 * V, try to compile, take note of error messages. */
	return smallindex;
}

void sort(vector<int>& V) {
	for (size_t i = 0; i < V.size()-1; i++) {
		swap(V[i],V[indexOfSmallest(V,i)]);
	}
}

#endif

#if 1 /* Same one as above without functions just main function */

int main(){
    int x = 0;
    int start = 0;
    vector <int> v;
    while(cin>>x){
        v.push_back(x);
        sort(v.begin(), v.end());
    }
    for(size_t i = 0; i < v.size(); i++){
        cout<<v[i];
    }
    return 0; 
}

#endif