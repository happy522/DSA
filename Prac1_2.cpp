#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int unsorted[],int n){
    int i,j,min;
    
    for (i = 0; i < n-1; i++) {
        min = i;
        for(j=i+1;j<n;j++){
            if(unsorted[min]>unsorted[j]){
                min=j;
            }
        }
        swap(unsorted[min],unsorted[i]);
    }
}

int main()
{
    int n,i,j;
    cout<<"Enter Number of elements you want to insert: ";
    cin>>n;
    
    int *unsorted = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n;i++) {
            unsorted[i] = rand()%100;
    }
    time_t start,end;
    start=clock();
    selection_sort(unsorted,n);
    double tc;
    end=clock();
    tc=(difftime(end,start)/CLOCKS_PER_SEC);
    printf("time efficiency is %lf",tc);
    cout<<"\n\nSorted Array:";
    for (i = 0; i < n; i++) {
        cout<<unsorted[i]<<" ";
    }
    return 0;
}
