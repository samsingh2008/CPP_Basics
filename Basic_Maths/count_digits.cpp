// Example 1:
// Input:N = 12345
// Output:5
// Explanation:  The number 12345 has 5 digits.
#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
    int c=0;
    while(n>0){
        c++;
        n=n/10;
    }
    return c;
}
int main(){
    int n;
    cout<<"enter number to count digits of :";
    cin>>n;
    int length=countDigits(n);
    cout<<"The number has "<<length<<" digits";
    return 0;

}