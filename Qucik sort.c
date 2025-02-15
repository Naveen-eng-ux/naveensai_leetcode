#include<stdio.h>
void swap(int *a,int *b){
    int tem = *a;
    *a = *b;
    *b = tem;
}
int partition (int a[],int low,int high){
    int p = a[low];
    int i = low;
    int j = high;
    while(i < j){
        while(a[i] <= p && i < high) {
            i++;
        }
        while(a[j] > p && j > low) {
            j--;
        }
        if(i < j){
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[low], &a[j]);
    return j;
}

void quicksort(int a[],int low,int high){
    if(low < high){
        int pi = partition(a, low, high);
        quicksort(a, low, pi - 1);
        quicksort(a, pi + 1, high);
    }
}

int main ()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j;
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    quicksort(a, 0, n - 1);
    for(i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}

