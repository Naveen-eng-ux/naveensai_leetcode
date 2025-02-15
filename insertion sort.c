#include<stdio.h>
void array_print(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main ()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j,key;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		key=a[i],j=i-1;
		while(j>=0 && key<a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		array_print(a,n);
	}
}
