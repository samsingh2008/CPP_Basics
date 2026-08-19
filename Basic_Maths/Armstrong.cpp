// Example 1:
// Input:N = 153
// Output:True
// Explanation: 1^3+5^3+3^3 = 1 + 125 + 27 = 153
                                        
// Example 2:
// Input:N = 371                
// Output: True
// Explanation: 3^3+7^3+1^3 = 27 + 343 + 1 = 371
#include <bits/stdc++.h>
using namespace std;
bool Armstrong(int n){
    int len=to_string(n).length();
    int sum=0;
    int dupe=n;
    while(n>0){
        int last=n%10;
        sum= sum+ pow(last,len);
        n=n/10;
    }
    return sum==dupe;
}
int main() {
    int n;
    cout<<"enter number to check Armstrong of :";
    cin>>n;
    cout<<"Is the number Armstrong ?"<<endl;
    if(Armstrong(n)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}