#include <iostream>
using namespace std;

int arr[100001] = {-1};

int fibonacci(int n)
{
    if(arr[n]!=-1){
        return arr[n];
    }
    if(n==0||n==1){
        return 1;
    }
    arr[n] = fibonacci(n-1) + fibonacci(n-2);
    return arr[n];
}

int main() {
    int n;
    cin>>n;

    cout<<fibonacci(n);
}
