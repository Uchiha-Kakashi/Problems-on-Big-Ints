#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int A[6]={1,3,2,-1,-3,-2};
	int l,i,f,r,j;
	cin >> s;
	l=s.length();
	f=0;
	j=0;
	for(i=l-1;i>=0;i--){
		if(j>5){
			j=0;
		}
		f+=(s[i]-'0')*A[j];
		j++;
	}
	r=f%7;
	if(r==0){
		cout << "The number is divisible by 7\n";
	}
	else{
		cout << "The number is not divisible by 7\n";
		cout << "The number leaves a remainder = " << r << endl;
	}
	return 0;
}

// THE DIVIVBILTY TEST OF 7 IS GIVEN BBY SERIES (1,3,2,-1,-3,-2). BY MULTIPLYING THE NUMBERS DIGITS WITH THE SERIES IN REVERSE ORDER OF THE NUMBER AND ADDING WE GET A NUMBER WHICH WHEN 
//  DIVIDED BY IF REMAINS ZERO AS REMAINDER, THE WHOLE NUMBER IS SAID TO BE DIVISIBLE BY 7.3
