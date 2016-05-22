#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int T, n, x;
	int counter[10];
	cin>>T;
	for(int i=0;i<T;i++){
		memset(counter, 0, sizeof(counter));
		cin>>n;
		for(int j=1; j<=n; j++){
			x = j;
			while(x > 0){
				counter[x%10]++;
				x /= 10;
			}
		}
		for(int j=0; j<10;j++){
			cout<<counter[j];
			if(j!=9)
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}