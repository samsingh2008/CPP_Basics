// Example 1:
// Input:N = 12345
// Output: 1 2 3 4 5
// Explanation: The digits of the number 12345 are extracted from left to right.

#include<bits/stdc++.h>
using namespace std;
vector<int> extract(int n){
    vector<int> ans;
    int last;
    if(n == 0) {
        ans.push_back(0);
        return ans;
    }
    while(n>0){
        last=n%10;
        ans.push_back(last);
        n=n/10;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n;
    cout<<"enter number to extract digits from :";
    cin>>n;
    vector<int> digits= extract(n);
    cout<<"extracted digits are :";
    for(auto it:digits){
        cout<<it<<" ";
    }
    return 0;
}
