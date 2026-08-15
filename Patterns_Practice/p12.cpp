#include<iostream>
using namespace std;
void p12(int n){
    for(int i=1;i<=n;i++){
        int c=i;
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<c;
            c=c-1;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter value of n for pattern :";
    cin>>n;
    p12(n);
    return 0;
}