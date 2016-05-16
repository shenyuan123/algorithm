/*
* @Author: luanj
* @Date:   2016-05-16 21:53:59
* @Last Modified by:   luanj
* @Last Modified time: 2016-05-16 22:02:10
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double res=0.0;
    int m, n, counter=0;
    cout<<setiosflags(ios::fixed)<<setprecision(5);
    while(cin>>n>>m && n!=0 && m!=0){
        counter++;
        for(int i=n; i <= m; i++){
            res += 1.0/i/i;
        }
        cout<<"Case "<<counter<<": "<<res<<endl;
    }
    return 0;
}