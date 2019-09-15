#include <bits/stdc++.h>

using namespace std;

int multiply(int *A,int l,int a)
{
	int i,p,c=0;
	for(i=0;i<l;i++){
		p=A[i]*a+c;
		A[i]=p%10;
		c=p/10;
	}
	while(c!=0){
		A[l]=c%10;
		l++;
		c/=10;
	}
	return l;
}

void factorial(int a)
{
	int A[10000];
	int i,l,t;
	t=a;
	l=0;
	while(t!=0){
		A[l]=t%10;
		l++;
		t/=10;
	}
	for(i=a-1;i>=2;i--){
		l=multiply(A,l,i);
	}
	cout << "The factorial of " << a << " is ==> ";
	for(i=l-1;i>=0;i--){
		cout << A[i];
	}
}

int main()
{
	int n;
	cin >> n;
	factorial(n);
	return 0;
}
