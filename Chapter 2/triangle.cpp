#include <iostream>
using namespace std;

int main()
{
    int n, t, s, j;
    cin>>n;
    for(int i=n; i>0; i--){
        for(s=n; s > i; s--)
            cout<<" ";
        t = 2*i-1;
        for(j=0; j< t; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}