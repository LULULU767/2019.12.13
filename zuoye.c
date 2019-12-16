#include<stdio.h>
#define LEN 5
int main(void)
{
    int a[LEN],n,i,j,tmp;
    printf("Enter array a:\n");
    for(i=0;i<LEN;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<LEN;i++)
    {
        for(j=i+1;j<LEN;j++)
        {
            if(a[j]>a[i])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(i=0;i<LEN;i++)
    {
        printf("%5d",a[i]);
    }
    return 0;
}