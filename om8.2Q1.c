#include<stdio.h>
void main(){
	int i, n,m,j;
	printf("enter the size of array:-");
	scanf("%d",&n);
	int a[n];
	
	printf("enter array A elements:-");
	
	for(i=0;i<n;i++)
	{
	printf("a[%d]=\n",i);
	scanf("%d",&a[i]);

	}	
	printf("enter the size OF B array:\n");
	scanf("%d",&m);
	int b[m];
	
	printf("enter array b elements\n:");
	for(i=0;i<m;i++)
	{
	printf("b[%d]=\n",i);
	scanf("%d",&b[i]);
	}
	int c[n+m];
	for(i=0;i<n;i++)
	{
	c[i]=a[i];
	}
	for(i=0;i<m;i++)
	{
	c[i+n]=b[i];
	}
	for(i=0;i<n+m;i++)
	{
	printf("c[%d]=%d\n",i,c[i]);
    }
}
	






