#include<iostream>
using namespace std;
void bubble_sort(int *arr,int n){
    int f=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                f=1;
            }
        }
        if(f==0)
            break;
    }
}
/*int main(){
    int arr[5]={1,2000,3,70,400};
    bubble_sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/