#include<stdio.h>
#include<stdlib.h>

long int f(int a);


int main(void)
{
	int n, m;
	long int ans;
	long int a,b,c;

	printf("求排列組合C(m,n)\nm=");
	scanf_s("%d",&m);
	printf("n=");
	scanf_s(" %d",&n);

	a = f(m);
	b = f(n);
	c = f(m - n);
	
	ans = a/(b*c);
	printf("C(%d,%d)=%d\n",m,n,ans);

	system("pause");
	return 0;
}

int f(int a)
{
	int count;
	long int result = 1;

	for ( count = 1; count <= a; count++)
	{
		result *= count;
	}
	return result;
}
