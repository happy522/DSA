/*Chef has a binary string SS of length NN. Chef can perform the following operation on SS:

Insert any character (00 or 11) at any position in SS.
Find the minimum number of operations Chef needs to perform so that no two consecutive characters are same in SS.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer NN — the length of the binary string SS.
The second line of each test case contains a binary string SS of length NN containing 00s and 11s only.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int m,count=0;
        cin>>m;
        string s;
        cin>>s;
        for(int i=0;i<m;i++){
            if(s[i]==s[i+1]){
                count++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
