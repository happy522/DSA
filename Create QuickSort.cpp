#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define cases(t)  int t;cin>>t;while(t--)
#define endl "\n"
#define debug(x) cerr<<#x<<" = "<<x<<endl
#define fo(i,n) for( i=0;i<n;i++)
#define largest 1e20

typedef vector<int> VI;


void display(VI arr);
void swap(VI &,int ,int);

void quicksort(VI &a,int start,int end)
{
    int pivot=a[start];
    int start_index=start;
    int end_index=end;
    start++;
    if(start<=end)
    {
        while(start<=end)
        {
            while(a[start]<pivot&&start<=end)
                start++;
            while(a[end]>pivot && start<=end)
                end--;

            start<end ? swap(a,start,end) : swap(a,start_index,end);
        }
    }
    else return;
    quicksort(a,start_index,end-1);
    quicksort(a,end+1,end_index);
}

void solve()
{///
    VI  arr={9,8,7,6,5,4,3,2,1};

    display(arr);
    quicksort(arr,0,8);
    display(arr);

}

int main()
{

    solve();

}
void display(VI arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(VI &arr,int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
