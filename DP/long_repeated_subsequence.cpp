//The Longest Repeating Subsequence (LRS) problem is finding the longest subsequences of a string that occurs at least twice.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 

int LRSLength(string X, int m, int n)
{
    
    if (m == 0 || n == 0) {
        return 0;
    }
 
   
    if (X[m - 1] == X[n - 1] && m != n) {
        return LRSLength(X, m - 1, n - 1) + 1;
    }
 
   
    return max (LRSLength(X, m, n - 1), LRSLength(X, m - 1, n));
}
 
int main()
{
    string X = "ATACTCGGA";
    int m = X.length();
 
    cout << "The length of the longest repeating subsequence is " <<
            LRSLength(X, m, m);
 
    return 0;
}

