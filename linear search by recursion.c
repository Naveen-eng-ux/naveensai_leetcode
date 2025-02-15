#include<stdio.h>
int fun(int a[],int n,int i,int b)
{
	if(i>=n){
		return 1;
	}
	else if(a[i]==b){
		return 1;
	}else {
		fun(a,n,i+1,b);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b;
	scanf("%d",&b);
	int fu=fun(a,n,0,b);
	if(fu==1){
	printf(" element is found",fu);}
	else {
		printf("element not found");
	}
}
