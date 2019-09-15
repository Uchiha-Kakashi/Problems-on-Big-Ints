#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s1,s2,s;
	int sum,c,i,j,l1,l2,l;
	cout << "Enter the two numbers\n";
	cin >> s1;
	cin >> s2;
	s="";
	l1=s1.length();
	l2=s2.length();
	c=0;
	if(l1>l2){
		j=l1-1;
		for(i=l2-1;i>=0;i--){
			sum=(s1[j]-'0')+(s2[i]-'0')+c;
			s.push_back(sum%10+'0');
			c=sum/10;
			j--;
		}
		while(j>=0){
			sum=(s1[j]-'0')+c;
			s.push_back(sum%10+'0');
			c=sum/10;
			j--;
		}
	}
	else{
		j=l2-1;
		for(i=l1-1;i>=0;i--){
			sum=(s1[i]-'0')+(s2[j]-'0')+c;
			s.push_back(sum%10+'0');
			c=sum/10;
			j--;
		}
		while(j>=0){
			sum=(s2[j]-'0')+c;
			s.push_back(sum%10+'0');
			c=sum/10;
			j--;
		}
	}
	if(c>0){
		s.push_back(c+'0');
	}
	reverse(s.begin(),s.end());
	cout << s << endl;
	return 0;
}
