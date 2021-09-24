#include <iostream>
#include <cstdio>
using std::cin;
using std::cout;
using std::endl;

#if 0

int f(int x){
    x = 220;
    return 0;
}

int f2(int& x){
    x = 220;
    return 0;
}
int main(){
    int y = 0;
    f(y);
    cout << y << endl; // 0
    f2(y);
    cout << y << endl; // 220
    return 0;
}

#endif

#if 0
/* Write a function that takes 4 integers and returns the max */
int f(int w, int x, int y, int z){
    if(w > x){
        if(w > y){
            if(w > z){
                return w;
            }
            else if(w < z){
                return z;
            }
        }
        else if (w < y){
            if(y > z){
                return y;
            }
            else if (y < z){
                return z;
            }
        }
    }
    else if (w < x){
        if(x > y){
            if(x > z){
                return x;
            }
            else if(x < z){
                return z;
            }
        }
        else if (x < y){
            if(y > z){
                return y;
            }
            else if (x < z){
                return z;
            }
        }
    }    
}

int main(){

    int w, x, y, z;
    cin >> w >> x >> y >> z;
    cout << f(w,x,y,z) << endl;
    return 0;

}

#endif

#if 0 /* Todo: Average of 3 doubles */

double f(double x, double y, double z){
    return (x+y+z)/3;
}

int main(){
    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
    cout << f(x,y,z) << endl;
    return 0;
}

#endif

#if 0 /* Todo: Swap integer x and y function */

int swap(int& x, int& y){
    int z = x;
    x = y;
    y = z;
}

int main(){
    int x, y;
    cin >> x >> y;
    swap(x,y);
    cout << x << endl;
    cout << y << endl;
    return 0;
}

#endif

#if 0 /* Todo: Write isPrime function that takes an integer and returns a boolean value */

bool isPrime(int n){
    int count = 0;
    for(int x = n-1; x > 1; x--){
        if(n%x == 0){
            count++;
        }
        if(count > 0 || n == 1)
            return false;
        else if(count < 0)
            return true; 
    }
}

int main(){
    int n;
    cin >> n;
    cout << isPrime(n) << endl;
    return 0;
}

#endif

#if 0 /* Lucas Sequence */

int f(int n){
    if (n == 0) return 2;
    if (n == 1) return 1;
    if (n > 1) return f(n-1)+f(n-2);
}

int main(){
    int x;
    cin >> x;
    if (x >= 2){
        cout << "Lucas Sequence: " << f(x) << " for n = " << x << endl;
    }
    else if(x == 0 || x == 1){
        cout << "Lucas Sequence: " << f(x) << endl;
    }
    
    return 0;
}

#endif

#if 0 /* Fibonacci Sequence */

int f(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(n > 2) return f(n-1)+f(n-2);
}

int main(){
    int x;
    cin >> x;
    if (x > 2){
        cout << "Fibonacci Sequence: " << f(x) << " for n = " << x << endl;
    }
    else if(x == 1 || x == 2){
        cout << "Fibonacci Sequence: " << f(x) << endl;
    }
    return 0;
}

#endif

