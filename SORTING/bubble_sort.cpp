// Example 1:
// Input: N = 5, array[] = {5,4,3,2,1}
// Output: 1,2,3,4,5
// Explanation: After sorting we get 1,2,3,4,5


// Example 2:
// Input: N = 6, array[] = {13,46,24,52,20,9}
// Output: 9,13,20,24,46,52
// Explanation: After sorting we get 9,13,20,24,46,52

#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int didswap=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didswap=1;
            }
        }
        if(didswap==0){
            break;
        }
    }
    cout<<endl<<"sorted array is"<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

int main(){
    int n;
    cout<<"enter length of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter your array elements :"<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"your array is:"<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    bubble_sort(arr,n);
    return 0;
}