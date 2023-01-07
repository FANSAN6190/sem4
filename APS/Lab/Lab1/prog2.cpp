#include<iostream>
#include <algorithm>
#include <chrono>
#include<stdio.h>
#include "prog1.h"
using namespace std::chrono;
using namespace std;
int main(){
    auto start = high_resolution_clock::now();
    int n;
    cin>>n;
    int *arr=rand_arr(n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //sorting
    for(int i=0;i<n;i++){
        int f=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                f=-1;
                swap(arr[i],arr[j]);
            }
        }
        if(f==0){
            break;
        }
    }
    /////////

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;
    return 0;
}
