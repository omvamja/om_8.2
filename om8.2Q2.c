#include<stdio.h>
void main(){
	int i,n,m,j=0;
	
	printf("enter the first number : ")	;
	scanf ("%d",&n);
	printf("enter the first number : ")	;
	scanf ("%d",&m);
	int a[m+n];
	
	for(i=n;i<=m;i++)
	{
	if(i%4==0){
		a[j]=i;
		j++;
	}
		}	
	for(i=0;i<j;i++){
		printf("the leap year is :%d\n",a[i]);
	}
}
