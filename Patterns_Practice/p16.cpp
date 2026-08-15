// Pattern 16:
//
// A
// B B
// C C C
// D D D D
// E E E E E

#include<iostream>
using namespace std;
void p16(int n){
    for(int i=0; i<n;i++){
        char ch='A'+i;
        for(int j=0; j<=i ;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter value for pattern :";
    cin>>n;
    p16(n);
    return 0;
}

