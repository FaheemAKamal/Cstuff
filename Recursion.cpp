#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::sort;
#include <vector>
using std::vector;

#if 0 /* Basic Recursion Problem */
void f(int n){
    if(n==0){
        cout << 0 <<endl;
        return;
    }
    cout<<n<<endl;
    f(n-1);
    cout<<n<<endl;
}

int main(){
    f(4);
    return 0;
}

#endif

#if 0

/* TODO: write a recursive function to compute x^n (x to the n power)
 * where n is an integer. */

int f(int x, int n){
    if (n == 0) return 1;
    if (n == 1) return x;
    if (n > 1) return (f(x,n-1)*x);
}

int main(){
    int y;
    int b;
    cout << "Value of Base? \n";
    cin >> y;
    cout << "Value of Power? \n";
    cin >> b;
    cout<<f(y,b)<<endl;
}
#endif

#if 0

/* TODO: write a function that recursively computes terms of the
 * fibonacci sequence. */

int fibonacci(int n){
    if(n==1) return 0;
    if(n==2 ||n == 3) return 1;
    if(n > 3) return (fibonacci(n-1)+fibonacci(n-2));

}

int main(){
    int y;
    cout << "What fibonacci term you want? \n";
    cin >> y;
    cout << "Fibonacci Term: " << fibonacci(y) << endl;
    return 0;
}

#endif

#if 0 /* Online Version */

int fib(int n)
{
    int a = 0, b = 1, c, i;
    if( n == 0)
        return a;
    for(i = 2; i <= n; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
    return b;
}
 
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}

#endif

#if 0 

/* TODO: try to implement the idea for recursive sorting from the lecture.
 * IDEA: sort the left and right halves recursively, then combine them
 * together with some kind of "merge" operation. */

vector <int> sort(vector<int> &v){
    if(v.size()<2){
        return v;
    }
    else{
        vector<int> vleft;
        vector<int> vright;
        for(size_t i = 0; i < v.size(); i++){
            if(i<v.size()/2){
                vleft.push_back(v[i]);
            }else{
                vright.push_back(v[i]);
            }
        }
        sort(vleft);
        sort(vright);
    }
}

#endif

#if 0
/* TODO: write code to compute the greatest common divisor of two integers
 * Do this with recursion -- no loops!  */
int gcd(int a, int b){
	if (b==0) {
		return a;
	}
	else
	return gcd (b, a%b);
}

#endif