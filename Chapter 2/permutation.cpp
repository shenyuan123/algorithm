/*
* @Author: luanj
* @Date:   2016-05-17 09:25:49
* @Last Modified by:   luanj
* @Last Modified time: 2016-05-17 10:39:19
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[9], b[3], i;
    for(i=0; i<9; i++)
        a[i] = i+1;

    do{
        for(i=0;i<3; i++)
            b[i] = a[i*3]*100+a[i*3+1]*10+a[i*3+2];

        if(b[1] == b[0]*2 && b[2] == b[0]*3)
            cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<endl;
    }while(next_permutation(a, a+9));
    
    return 0;
}