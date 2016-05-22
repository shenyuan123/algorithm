#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, t;
    vector<int> daffodil;
    for(a=1;a<10; a++){
        for(b=1;b<=a;b++){
            for(c=1;c<=b;c++)
            {
                t = a*a*a + b*b*b + c*c*c;
                if(t>=100 && t<1000){
                    daffodil.push_back(t);
                }
            }
        }
    }
    sort(daffodil.begin(), daffodil.end());
    for(size_t i=0; i<daffodil.size(); i++)
    {
        cout<<daffodil[i]<<endl;
    }
    return 0;
}