// Input: N = 12345
// Output:54321
// Explanation: The reverse of 12345 is 54321.

// Input: N = 7789                
// Output: 9877
// Explanation: The reverse of number 7789 is 9877.
#include<bits/stdc++.h>
using namespace std;
int Rev_Digits(int n){
    int rev=0;
    while(n>0){
        int last=n%10;
        rev=rev*10+last;
        n=n/10;
    }
    return rev;
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<"The reverse of the digits is "<<Rev_Digits(n);
    return 0;
}