#include <stdio.h>
int main()
{
    int prime(int);
    int n;
    printf("Enter the number of integers:\n");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    int a[n],b[100],j=0;
    for(int i=0;i<n;i++)
    {   
        scanf("%d",&a[i]);
        if(prime(a[i]))
        {
            b[j]=a[i];
            j++;
        }
    }
    printf("The Prime Numbers are:\n");
    for(int i=0;i<j;i++)
    {
        printf("%d\n",a[i]);
    }
    
}

int prime(int k)
{
    int check=1;
    for(int i=2;i<k;i++)
    {
        if(k%i==0)
        {
            check = 0;
            break;
        }
    }
    return check;
}
