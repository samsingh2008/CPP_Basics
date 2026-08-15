// Pattern 13:
//
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include<iostream>
using namespace std;
void p13(int n){
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter integer n for the pattern :";
    cin>>n;
    p13(n);
    return 0;
}