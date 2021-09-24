#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include <vector>
using std::vector;
#include <set>
using std::set;
using namespace std;

#if 0
set<set<int> > powerSet(set<int>& S)
{
    /* check base case */
    if(S.size() == 0){
        set<int> empty;
        set<set<int> > P;
        P.insert(empty);
        return P;
    }
    int leftout = *S.begin();
    S.erase(leftout);
    /* Since S is smaller, we can use recursion */
    set<set<int> > T = powerSet(S);
    /* Store the powerset of S in P */
    set<set<int> > P(T); /* Copy T into P */
    /* For every set in T, add leftout and then add the resulting set in P */
    for(set<set<int> >::iterator i = T.begin(); i != T.end(); i++){
        set<int> U = *i;
        U.insert(leftout);
        P.insert(U);
    }
    return P;
}

#endif

#if 0
/* To-do: Write a vector version of powerset function */

vector<vector<int> > powerSet(vector<int>& V){
    if(V.size() == 0){
        vector<int> empty;
        vector<vector<int> > P;
        P.push_back(empty);
        return P;
    }
    int leftout = *V.begin();
    V.erase(V.begin());
    vector<vector<int> > T = powerSet(V);
    vector<vector<int> > P(T);
    for(vector<vector<int> >::iterator i = T.begin(); i != T.end(); i++){
        vector<int> U = *i;
        U.push_back(leftout);
        P.push_back(U);
    }
}

#endif

#if 0
/* To-do: Another way to do a vector version of powerset fucntion */

vector<vector<int> > powerSet(vector<int>& V){
    vector<vector<int> > res;
    if(V.size() == 0){
        res.push_back(vector<int> () );
        return res;
    }
    int temp = V.back();
    V.pop_back();
    res=powerSet(V);
    size_t n = res.size();
    for(size_t i = 0; i < n; i++){
        vector<int> s = res[i];
        s.push_back(temp);
        res.push_back(s);
    }
    V.push_back(temp);
    return res;
}

#endif