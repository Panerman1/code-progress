#include <stdio.h>
#include <String.h>
void main()
{
    int length;
    int a;
    printf("Enter an integer: \n");
    scanf("%d",&a);
    printf("The length of integer is : %d\n", sizeof(a));
    char b[100];
    printf("Enter the string: \n");
    scanf("%s",&b);
    length = strlen(b);
    printf("length of string b: %d\n",length);
    printf("size of string b: %d\n", sizeof(b));
    printf("size of character %d\n",sizeof(char));
    printf("size of character %d\n", sizeof(b[0]));
}