#include<stdio.h>
int a[20]; char S[50];
int k,n,dem=1;
void print()
{
	int j;
		printf("\nLan thu %d",dem++);
	for (j=1;j<=k;j++) printf("\t %c",S[j]+64);
	
}
void Try(int i)
{
	int j;
	for (j=1;j<=n;j++)
	if (a[j]){
		S[i]=j;
		a[j]=0;
		if (i==k) print();	else Try(i+1);
		a[j]=1;
}
}
int main()
{
	int i;
	printf("\nnhap n");
	scanf("%d",&n);
	printf("\nnhap k");
	scanf("%d",&k);
	for (i=1;i<=n;i++)
	{
		a[i]=1;
	}
	Try(1);
	getchar();
}
