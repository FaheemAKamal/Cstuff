#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cmath>
#include <string>


int main(){
    #if 0 /* Min Function */
    int x = 0;
    int min = 0;
    cout << "Enter a series of numbers!" << endl;
    cin >> x;
    min = x;
    while (cin >> x){
        if (x < min) min = x;
    }
    cout << min;
    #endif

    #if 0 /* Max Function */
    int x = 0;
    int max = 0;
    cout << "Enter a series of numbers!" << endl;
    cin >> x;
    max = x;
    while (cin >> x){
        if (max < x) max = x;
    }
    cout << max;
    #endif

    #if 0 /* Max, Min, Product, Sum, Average */

    int x = 0;
    int sum = 0;
    int prod = 0;
    int count = 0;
    int max = 0;
    int min = 0;
    int avg = 0;
    cout << "Enter a series of numbers!" << endl;
    cin >> x;
    max = min = x;
    
    while (cin >> x){
        if (max < x) max = x;
        if (x < min) min = x;
        count++;
        sum += x;
        prod *= x;
    }
    avg = sum/count;
    cout << max << endl;
    cout << min << endl;
    cout << prod << endl; 
    cout << sum << endl;
    cout << avg << endl; 

    #endif

    #if 0 /* Brute force gcd */
    
    int a,b;
    cout<<"Enter some nums \n";
    cin >> a >> b;
    if (a > b){
        int t = a;
        a = b;
        b = t;
    }
    for (int i = a; i >= 1; i--){
        if (b%i == 0 && a%i == 0){
            printf("gcd(%i,%i) == %i\n",a,b,i);
            break;
        }
    }
    #endif

    #if 0 /* Brute force Perfect Cubes -- My method TODO*/ 

    int n;
    cout <<"Enter a num \n";
    cin >> n;
    for (int i = n; i >= 1; i--){
        if (n == pow(i,3)){
            printf("This is a perfect cube \n");
        }
    }

    #endif

    #if 0 /* Another Brute Force Perfect Cube */
    
    int n;
    cout << "Enter a num \n";
    cin >> n;
    for (int i = 0; i < n; i++){
        int cube = i*i*i;
        if (cube == n){
            printf("This is a cube \n");
            cout << n << "=" << i << "^3";
        }
    }

    #endif

    #if 0 /* Another Perfect Cube Brute Force */
    int n;
    while (cin >> n){
        for (int x = n-1; x > 0 ; x--){
            if(n%(x*x*x)==0){
                cout << n << "=" << x << "^3" << endl;
                break;
            }
        }
    }
    #endif

    #if 0 /* Write a loop that prints the sum of the first n odd cubes*/
    
    /* int n,y = 0;
    int sum = 0;
    while(cin>>n){
        for(int count = 1, max = n; count < max; count++){
            y = pow(count,3);
            if(y%2 != 0){
                sum += y;
            }
            else 
                max++;
        }
        cout << sum;
    } */ 

    int sum = 0;
    int n = 0;
    while (cin >> n){
        for (int i = 0; i < n; i++){
            sum += (2*i+1)*(2*i+1)*(2*i+1);
        }
        cout << sum;
    }
    
    #endif

    #if 0 /*Write code that gets an integer from the user and prints out the nth term of the fibonacci sequence */
    int first = 0;
    int second = 1;
    int n = 0;
    int sum = 0;
    while(cin >> n){
        for (int i = 0; i < n; i++){
            sum = first+second;
            first = second;
            second = sum;
        }
    }   
    cout << first << endl;
    #endif

    #if 0 /* For integers n and k, determine the largest power of k that divides n*/
    int n = 0;
    while(cin >> n){
        for(int k = 0; k < n; k--){
            if(n%k == 0){
            }
        }
    }
    #endif

    #if 0 /* Write a program that reads integers and prints second smallest one*/

    int n;
    int min;
    int secondmin;
    while(cin >> n){
        secondmin = min;
        min = n;
        if (n > min){
            secondmin = n;
        }
        if (n < min){
            min = n;
        }
        if (min > secondmin){
            min = secondmin;
        }
    }
    cout << secondmin << endl;
    #endif

    #if 0 /* working version of second min finder */
    int x,min,secondmin;
	cin >> min;
	cin >> secondmin;
	if (min > secondmin){
		min=secondmin;
	}
	while (cin >> x){
		if (min > x){
			secondmin=min;
			min=x;
		}
	}
	cout << secondmin << endl;
    #endif

    #if 0 /*Collatz Conjecture: If n is 1, stop. If n is odd, multiply by 3 and add 1. If n is even, divide by 2. */

    int n = 0;
    int result = 0;
    while(cin >> n){
        while(n > 1){
            result++;
            if(n%2 == 0){
                n = n/2;
            }else if(n%2 != 0){
                n = 3*n + 1;
            }
        }
        cout<<result;
    }
    #endif

    #if 0 /* A better way of doing this Problem (TODO) */

    int n = 0;
    while(cin >> n){
        //int oldn = n;
        int result = 0;
        while(n > 1){
            result++;
            if (n%2 == 0){
                n = n/2;
            }else /*if (n%2 != 0) */{
                n = 3*n + 1;
            }
        }
        cout << result;
    }
    #endif

    #if 0
	int n;
	while (cin >> n) {
		int oldn = n;
		int count = 0;
		while (n > 1) {
			count++;
			if (n % 2 == 0) n /= 2; /* NOTE: n/=2 is shorthand for n = n/2 */
			else n = n*3 + 1;
		}
		cout << oldn << " stopped after " << count << " steps.\n";
	}

    #endif

    #if 0 /* Lucas Sequence attempt (easier with recursion)*/ 

    /* int first = 1;
    int second = 0;
    int n;
    int i = 1;
    int current = 1;
    cout<<"Which nth lucas term do you want? \n";
    cin >> n;
    while (i < n){
        i++;
        second = first;
        first = current;
        current = first - second;
        cout << current << endl;   
    } */

    int n;
    cin >> n;
    int onebefore=2,twobefore=3, current=14;
    int i=2;
    while (i<n) {
	    i++;
	    twobefore=onebefore;
	    onebefore=current;
	    current=(5*onebefore)+(2*twobefore)-i;
    }
    cout << current << endl;

    #endif
    return 0;
}