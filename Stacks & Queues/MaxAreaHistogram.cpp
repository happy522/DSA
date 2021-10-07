// author - Nishit Bansal, Nishit278 @github 
// solution to leetcode problem maxAreaHistorgram using stack 

#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int largestRectangleArea(vector<int>& heights) {
        ll ans = 0;
        ll n = heights.size();
        ll area = 0;
        stack <int> st;
        ll ht=0, wd =0;
        for(int i=0;i<=n;i++){
            while(!st.empty() && (i == n || (heights[st.top()]>=heights[i]))){
                ht = heights[st.top()];
                st.pop();
                wd = st.empty()?i:(i-st.top()-1);
                area = ht*wd;
                if(area > ans) ans = area;
            }
            st.push(i);
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v[i]=x;
    }
    cout << largestRectangleArea(v) << endl;

}