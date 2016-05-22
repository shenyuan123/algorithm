#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

int main()
{
	int T, len, sum, c, v;
	double value;
	double each;
	string fenzi;
	cin>>T;
	for(int i=0;i<T;i++){
		cin>>fenzi;
		value=0.0;
		len = fenzi.size();
		for(int j=0; j<len; j++){
			if(isalpha(fenzi[j])){
				switch(fenzi[j]){
					case 'C':
						each = 12.01;
						break;
					case 'H':
						each = 1.008;
						break;
					case 'O':
						each = 16.00;
						break;
					case 'N':
						each = 14.01;
						break;
				}
				c = j+1;
				if(c < len && isdigit(fenzi[c])){
					sum = fenzi[c] - '0';
					c++;
					while(c < len && isdigit(fenzi[c])){
						v = fenzi[c] - '0';
						sum = sum*10 + v;
						c++;
					}
				}else{
					sum = 1;
				}
				value += each * sum;
			}
			
		}
		cout<<fixed;
		cout<<setprecision(3)<<value<<endl;
	}
	return 0;
}