#include<iostream>
using namespace std;
int p11(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<((i+j)%2);
        }
        cout<<endl;
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter integer value for patter : ";
    cin>>n;
    cout<<"your pattern in"<<endl;
    p11(n);
}