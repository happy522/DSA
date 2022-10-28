/*In the medieval age, there were 33 kingdoms AA, BB, and CC. The army of these kingdom had N_AN 
A, N_BN B, and N_CN C soldiers respectively.

You are given that an army with XX soldiers can defeat an army with YY soldiers only if X \gt YX>Y.

An army is said to be dominant if it can defeat both the other armies combined. For example, kingdom CC's army will be dominant only if N_C > N_A + N_BN 
C>N A+N B
Determine whether any of the armies is dominant or not.*/

#include <iostream>
using namespace std;

#include <bits/stdc++.h>
int main() {
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b+c || b>a+c || c>a+b){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
	return 0;
}
