#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s1,s2,s;
	int a,b,r,i,d,j;
	int l1,l2,l;
	cin >> s1;
	cin >> s2;
	s="";
	l1=s1.length();
	l2=s2.length();
	r=0;
	if(l2>l1){
		cout << "-";
		j=l2-1;
		for(i=l1-1;i>=0;i--){
			a=s1[i]-'0';
			b=s2[j]-'0';
			if(a<b){
				d=a-b+10-r;
				r=1;
			}
			else{
				d=a-b;
				r=0;
			}
			s.push_back(d+'0');
			j--;
		}
	}
	else{
		j=l1-1;
		for(i=l2-1;i>=0;i--){
			a=s1[j]-'0';
			b=s2[i]-'0';
			if(a<b){
				d=a-b+10-r;
				r=1;
			}
			else{
				d=a-b-r;
				r=0;
			}
			s.push_back(d+'0');
			j--;
		}
	}
	if(r==1){
		s.push_back(r+'0');
	}
	reverse(s.begin(),s.end());
	cout << s << endl;
	return 0;
}
