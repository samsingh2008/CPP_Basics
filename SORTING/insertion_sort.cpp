#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    cout<<endl<<"sorted array is"<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
int main() {
    int n;
    cout<<"enter length of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter your array elements :"<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"your array is:"<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    insertion_sort(arr,n);
    return 0;
}