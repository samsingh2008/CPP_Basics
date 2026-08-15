// Pattern 15:
//
// A B C D E
// A B C D
// A B C
// A B
// A

#include<iostream>
using namespace std;
void p15(int n){
    for(int i=0;i<n;i++){
        for(char j='A'; j<'A'+n-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<" enter value of n for pattern :";
    cin>>n;
    p15(n);
    return 0;
}