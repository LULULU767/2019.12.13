#include<stdio.h>
#define LEN 5
int findMax(int x[],int n);
int main (void)
{
    int a[LEN],i,max;
    printf("Enter array a:\n");
    for(i=0;i<LEN;i++){
        scanf("%d",&a[i]);
    }
    max=findMax(a,LEN);
    
    printf("Max is %d\n",max);
    return 0;

int findMax(int b[],int n)
{
    int max,i;
    max=b[0];
    for(i=0;i<n;i++){
        if(b[i]>max){
            max=b[i];
        }
    }
    return max;
}