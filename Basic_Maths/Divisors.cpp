// Input: N = 36
// Output: [1, 2, 3, 4, 6, 9, 12, 18, 36]  
// Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.
// Input: N = 12
// Output: [1, 2, 3, 4, 6, 12]
// Explanation: The divisors of 12 are 1, 2, 3, 4, 6, 12.

#include<bits/stdc++.h>
using namespace std;
vector<int> findDivisors(int a){
    vector<int> v;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            v.push_back(i);
        }
    }
    return v;
}
int main(){
    int a;
    cout<<"enter number to get divisors of :";
    cin>>a;
    vector<int> divisors=findDivisors(a);
    cout<<"The divisors of "<<a<<" are ";
    for(auto it:divisors){
        cout<<it<<" ";
    }
    return 0;
}