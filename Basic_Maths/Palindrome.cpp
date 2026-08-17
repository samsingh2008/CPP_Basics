// Example 1:
// Input:N = 4554
// Output:Palindrome Number
// Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number
                                        
// Example 2:
// Input:N = 7789          
// Output: Not Palindrome
// Explanation: The reverse of number 7789 is 9877 and therefore it is not palindrome
#include<bits/stdc++.h>
using namespace std;
bool Palindrome(int n){
    int rev=0;
    int dupe=n;
    while(n>0){
        int last=n%10;
        rev=rev*10+last;
        n=n/10;
    }
    if(dupe==rev){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cout<<"enter number to check palindrome ";
    cin>>n;
    if(Palindrome(n)){
        cout<<"The number "<<n<<" is a palindrome";
    }else{
        cout<<"The number "<<n<<" is not a palindrome";
    }
    return 0;
}