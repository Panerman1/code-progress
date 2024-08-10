#include <stdio.h>
#include <String.h>
void main()
{
    printf("Enter the sentance:\n");
    char string[100];
    gets(string);
    int len = strlen(string);
    int s = 0;
    for(int i=len-1;i>=0;i--)
    {
        if(string[i]==' ')
        {
            continue;
        }
        else
        {
            int j = i;
            while(string[j] != ' ' && j >= 0)
            {
                s++;
                j--;
            }
            break;
        }
    }
    printf("The number of letters in the last word is: %d",s);
}