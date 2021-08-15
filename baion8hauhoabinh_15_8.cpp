#include <stdio.h>
#include <math.h>
int a[8],b[15],c[15],S[8];
int dem=0;
void Try(int i);
void print();
int main()
{
	int i;
	for(i=0;i<8;i++) a[i]=1;
	for (i=0;i<15;i++) b[i]=1;
	for (i=0;i<15;i++)c[i]=1;
	Try(0);
}
void Try(int i)
{
	int j;
	for (j=0;j<8;j++) {
	if(a[j]&&b[i+j]&&c[i-j+7]){
		S[i]=j;	
		a[j]=0;b[i+j]=0;c[i-j+7]=0;
		if (i==7) print(); else Try(i+1);
		a[j]=1;b[i+j]=1;c[i-j+7]=1;// No chi thuc hien khi i=7
	
	}
		
	}
}
void print()
{
	int j;
	printf("\n Xuat lan %d: ",++dem);
	for (j=0;j<8;j++) printf(" %d \t",S[j]+1);
}
