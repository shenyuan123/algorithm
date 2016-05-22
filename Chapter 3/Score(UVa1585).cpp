#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int T;
	int len, i, j, score, counter;
	char str[100];
	cin>>T;
	for(j=0; j<T; j++){
		score = 0;
		counter = 0;
		cin>>str;
		len = strlen(str);
		for(i=0; i<len; i++){
			if(str[i] == 'O'){
				counter ++;
				score += counter;
			}else{
				counter=0;
			}
		}
		cout<<score<<endl;
	}
	return 0;
}