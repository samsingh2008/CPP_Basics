// Pattern 14:
//
// A
// A B
// A B C
// A B C D
// A B C D E

#include<iostream>
using namespace std;
void p14(int n){
    for(int i=0; i<n; i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int n;
    cout<<"enter value of n for pattern :";
    cin>>n;
    p14(n);
    return 0;
}