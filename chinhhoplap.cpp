#include<stdio.h>
#include <math.h>
char S[100];int a[100];
int k,n,dem;
void print();
void Try(int i);
int main()
{
	int i;
	printf("Nhap n:");
	scanf("%d",&n);
	printf("Nhap k:");
	scanf("%d",&k);
//	for (i=1;i<=n;i++)
//	a[i]=1;
	Try(1);
	getchar();	
}
void print()
{
	int j;
	printf("\n Xuat lan %d: ",++dem);
	for (j=1;j<=k;j++) printf("%c\t",S[j]+64);
}
void Try(int i)
{
int j;
for (j=1; j<=n; j++) {
S[i]=j;
//a[j]=0;
if (i==k) print(); else Try(i+1);
//a[j]=1;N
}
}
