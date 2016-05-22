#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int T, len, c, m, j;
	bool cycle;
	char buf[100];
	cin>>T;
	cin.ignore();
	for(int i=0;i<T;i++){
		cin>>buf;
		len = strlen(buf);
		for(j=1; j<=len/2; j++){
			cycle = true;
			for(c=0; c < len-j; c=c+j){
				for(m=0; m<j; m++)
				{
					if(buf[c+m] != buf[c+m+j]){
						cycle=false;
						break;
					}
				}
				if(!cycle)
					break;
			}
			if(cycle)
				break;
		}
		if(cycle)
			cout<<j<<endl<<endl;
		else
			cout<<len<<endl<<endl;
	}
	return 0;
}