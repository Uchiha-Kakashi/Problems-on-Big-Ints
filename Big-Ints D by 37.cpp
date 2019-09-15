#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int l,i,j,p,a;
	l=s.length();
	a=0;
	p=0;
	for(i=l-1;i>=0;i--){
		if(p==3){
			p=0;
		}
		j=(s[i]-'0');
		a+=j*pow(10,p);
		p++;
	}
	if(a%37==0){
		cout << "The entered number is divisible by 37\n";
	}
	else{
		cout << "The number is not divisible by 37\n";
	}
	return 0;
}

//8955795758
