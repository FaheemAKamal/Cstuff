#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void swapd(int* &d1, int* &d2);

int main(){
#if 0
    /* Array: Dumb-down version of vector 
       No concept of its size and no fancy member functions
       such as push_back */
    const size_t size = 10;
    int A[size];
    for(size_t i = 0; i < size; i++){
        A[i]=i*i*i; /*store list of cubes in array */
    }
    cout<< "A === " << A << endl; /* Returns A[0] address not value! */

    /* Pointers: Just variables that hold a memory address. */
    /* Mechanics: Declare them, initialize them and read to and write from the memory cell to which the pointer points */

    int* p; /* Declare a pointer */

    int x = 17;
    
    p = &x; /* p gets the address of x */

    cout << "p == " << p << "\tx == " << x << endl;
    cout << "This is what's at the address stored in p: " << *p << endl;
    (*p)++;
    cout << "p == " << p << "\tx == " << x << endl;

    int y = 23;
	int* q = &y;
	cout << "p == " << p << "\tx == " << x << endl; //address of p and x = 18
	cout << "q == " << q << "\ty == " << y << endl; //address of q and y = 23
	cout << "::: setting p = q;\n";
	p = q;
	(*q)++;
	cout << "p == " << p << "\tx == " << x << endl; //address of q and x = 18
	cout << "q == " << q << "\ty == " << y << endl; //address of q and y = 24

    char B[10];
    for(size_t i = 0; i < 10; i++){
        B[i]='a'+i;
    }
    for(size_t i = 0; i < 10; i++){
        cout<< i << "[B] == " << i[B] << endl;
    }
#endif

#if 0
/* TODO: declare another pointer (say p2) to a character, initialize it
	 * just as we did before, and print out (p+i) and then (p2+i) for small
	 * values of i. Notice that the difference in memory addresses changes. */

char c='a';
char* p2 = &c;
	for (size_t i=0; i < 5; i++){
		cout << i << "==" << (p+i) << "==" << (*p+i) << endl;
	}
	for (size_t i=0; i < 5; i++) {
		cout << i << "==" << (p2+1)  << "==" << *(p2+i) << endl;
	}
#endif

#if 0
/* TODO: write a function that returns void, and takes two
 * POINTERS to integers, and swaps the contents of those two
 * memory locations.  Note: part of this exercise is understanding
 * what I'm asking for...
 * */

int p1, p2;
cin >> p1;
cin >> p2;
int* d1;
d1 = &p1;
int* d2;
d2 = &p2;
cout << d1 << d2 << endl;
swapd(d1, d2);
cout << d1 << d2 << endl;

#endif
    return 0;
}