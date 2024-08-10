#include <stdio.h>
#include <String.h>
void main()
{
    char inp[100];
    int k=0,i,l,l2=0;
    printf("Enter the string needed to be reversed:\n");
    gets(inp);
    int l1 = strlen(inp);
    l=l1;
    k = 0;
    for(i=l1-1;i>=0;i--)
    {
        // printf("i %d, inp[i] %c\n", i, inp[i]);
        if(inp[i]== ' ')
        {
            for(int j=i+1;j<l;j++)
            {   
                printf("%c",inp[j]);
                k++;
            }
           //  printf("\n k : %d\n", k);
            l=(l1-k) - 1;
          // printf("l :%d\n", l);
            printf(" ");
        }
        else
        {
            continue;
        }
        
    }
    i=0;
            while(inp[i]!=' ')
            {
                printf("%c",inp[i]);
                i++;
            }
}