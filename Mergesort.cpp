#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;

#if 0
void merge(vector<int>& A, size_t low, size_t mid, size_t high){
    vector<int> merged;
    size_t l = low;
    size_t r = mid + 1;
    while(l <= mid && r <= high){
        if(A[l] <= A[r]){
            merged.push_back(A[l++]);
        }else{
            merged.push_back(A[r++]);
        }
    }
}
#endif

#if 0
void merge(vector<int>& A, size_t low, size_t mid, size_t high){
    vector<int> merge;
    size_t l = low;
    size_t r = mid+1;
    while(l <= mid && r <= high){
        if(A[l]< A[r]){
            merged.push_back(A[l++]);
        }else{
            merged.push_back(A[r++]);
        }
    }
}
#endif

#if 0 
void mergesort(vector<int>& A, size_t low, size_t high){
    if(low >= high) return;
    size_t mid = (low+high)/2;
    mergesort(A,low,mid);
    mergesort(A,mid+1,high);
    merge(A,low,mid,high);
}
#endif