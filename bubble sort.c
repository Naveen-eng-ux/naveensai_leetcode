#include<stdio.h>
int bs(int n,int i,int a[],int j){
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1]){
				
				int t=a[j];
		     	a[i]=a[j+1];
			    a[j+1]=t;
			    printf("%d ",a[i]);
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main ()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		printf("%d ",a[i]);
	}
	int bs();
	for(i=0;i<n;i++){
	printf("%d ",a[i]);
   }
}
