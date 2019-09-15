#include <bits/stdc++.h>

using namespace std;

int multiply(int *A,int l,int a)
{
	int p,c,i;
	c=0;
	for(i=0;i<l;i++){
		p=A[i]*a+c;
		A[i]=p%10;
		c=p/10;
	}
	while(c!=0){
		A[l]=c%10;
		c/=10;
		l++;
	}
	return l;
}

void power(int a,int b)
{
	int A[10000];
	int l,i,j,t;
	t=a;
	l=0;
	while(t!=0){
		A[l]=t%10;
		l++;
		t=t/10;
	}
	for(i=2;i<=b;i++){
		l=multiply(A,l,a);
	}
	cout << "Answer is\n";
	for(i=l-1;i>=0;i--){
		cout << A[i];
	}
}

int main()
{
	int a,b;
	cout << "Enter the base and index\n";
	cin >> a >> b;
	power(a,b);
	return 0;
}
