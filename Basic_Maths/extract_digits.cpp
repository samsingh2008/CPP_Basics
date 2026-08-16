// Example 1:
// Input:N = 12345
// Output: 1 2 3 4 5
// Explanation: The digits of the number 12345 are extracted from left to right.

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> extract(int n){
//     vector<int> ans;
//     int last;
//     if(n == 0) {
//         ans.push_back(0);
//         return ans;
//     }
//     while(n>0){
//         last=n%10;
//         ans.push_back(last);
//         n=n/10;
//     }
//     reverse(ans.begin(),ans.end());
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"enter number to extract digits from :";
//     cin>>n;
//     vector<int> digits= extract(n);
//     cout<<"extracted digits are :";
//     for(auto it:digits){
//         cout<<it<<" ";
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Function to extract individual digits
// of a number and store them in a vector
vector<int> extractDigits(int N) {
    // Initialize an empty
    // vector to store the digits
    vector<int> ans;  
    
    // Loop to extract digits
    // until N becomes 0
    while(N > 0){
        // Extract the last digit of N
        int lastDigit = N % 10;  
        // Store the last digit
        // in the vector
        ans.push_back(lastDigit); 
         // Remove the last digit from N
        N = N / 10; 
    }
    
    // Reverse the vector to get
    // digits in the correct order
    reverse(ans.begin(), ans.end());  
    
    // Return the vector
    // containing individual digits
    return ans; 
}


int main() {
    int N = 329823;
    cout << "N: "<< N << endl;
    vector<int> digits = extractDigits(N);
    cout << "Extracted Digits: ";
    for(auto num: digits){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}