#include<stdio.h>
void main(){
	int o,i;
	
	printf("enter the size of array : ")	;
	scanf ("%d",&o);
	int a[o];
	
	printf("enter the elements of array ");	
	for(i=0;i<o;i++)
	{
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<o;i++){
		a[i]=a[i]*a[i];
	}for(i=0;i<o;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
}
