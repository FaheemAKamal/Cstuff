#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

/* Todo: Write a function that takes a string and a character
and returns the number of occurences of the character in the 
string. */

#if 0

size_t countingChars(const string& s, char c){
    char search = c;
    size_t count = 0;
    for(size_t i = 0; i < s.length(); i++){
        if(s[i] == search){
            count++;
        }
    }
    return count;
}

int main(){
    char x;
    string n;
    cout <<"Insert what you want to find \n";
    cin >> x;
    cout<<"Insert a string bro \n";
    while(cin >> n){
        cout << countingChars(n,x) << endl;
        return 0;

    }
}

#endif

/* TODO: write a function that takes a string and returns a boolean
 * indicating whether or not it was a palindrome.
 * */
#if 0
bool isPalin (const string&s) {
  for (size_t i=0; i < s.length()/2;i++){
    if (s[i]!=s[s.length()-1-i])
      return false;
  }
  return true;
}
int main(){
  string x;
  while (getline(cin,x)){
    cout <<isPalin(x)<<endl;
  }
  return 0;
}
#endif

/* TODO: write a function that takes two strings and returns an integer value
 * indicating whether or not the first was a substring of the second.  Remember
 * that the return value should be the index at which the string was found, or
 * -1 to indicate that the string was not found.
 * */
#if 0
int isSubstring(const string& s1, const string& s2) {
  size_t n1=s1.length();
  size_t n2=s2.length();
  size_t j;
  for (size_t i=0;i<=n1-n2;i++){
    for(j=0;j<n2;j++){
      if (s1[i+j]!=s2[j])
      break;
    }
    if (j==n2)
      return i;
  }
	return -1;
}
int main(){
  string one, two;
  while(true){
    cin >> one >> two;
    cout << isSubstring(one,two) << endl;
  }
  return 0;
}
#endif
/* NOTE: there is a built-in string function for this (find(str,pos)).
 * TODO: try it out (but don't use it to solve the above, of course!).
 * */
#if 0
find(str,pos)
#endif

/* TODO: write a function that takes a string by reference and reverses it.
 * We outlined this in lecture.  Make sure you can do it on your own.
 * */
#if 0
void inverse(string&s){
  for (size_t i=0; i < s.length()/2;i++){
    char x=s[i];
    int y=s.length()-i;
    s[i]=s[y-1];
    s[y-1]=x;
  }
}
int main() {
  string x;
  while(getline(cin,x)){
    inverse(x);
    cout << x<<endl;
  }
	/* TODO: write test code for all of the functions you wrote above */
	return 0;
}
#endif

