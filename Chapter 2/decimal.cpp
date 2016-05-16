/*
* @Author: luanj
* @Date:   2016-05-16 22:02:58
* @Last Modified by:   luanj
* @Last Modified time: 2016-05-16 22:36:03
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    int a,b,c;
    int z, mm, temp;
    vector<int> yushu;
    while(cin>>a>>b>>c && a!=0 && b!=0 && c!=0)
    {
        yushu.clear();
        z = a/b;
        cout<<z;
        if(c>0){
            cout<<".";
            mm = a % b;
            for(int i=0; i<c+1; i++)
            {
                z = mm * 10 / b;
                mm = mm*10 % b;
                yushu.push_back(z);
            }
            temp = yushu.back();
            if(temp >= 5){
                yushu[yushu.size()-2] ++;
            }

            for(int i=0; i< yushu.size()-1; i++){
                cout<<yushu[i];
            }
        }

        cout<<endl;

    }
    return 0;
}