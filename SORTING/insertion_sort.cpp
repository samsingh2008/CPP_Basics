// Example 1:
// Input:
//   nums = [7, 4, 1, 5, 3]  
// Output:
//   [1, 3, 4, 5, 7]  
// Explanation:
//   The array is sorted in non-decreasing order: 1 ≤ 3 ≤ 4 ≤ 5 ≤ 7.

// Example 2:
// Input:
//   nums = [5, 4, 4, 1, 1]  
// Output:
//   [1, 1, 4, 4, 5]  
// Explanation:
//   The array is sorted in non-decreasing order: 1 ≤ 1 ≤ 4 ≤ 4 ≤ 5.

#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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