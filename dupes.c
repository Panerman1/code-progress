#include <stdio.h>

int returnUnique(int *nums, int numsSize)
{
    int l=0,r;
    for(r=1;r<=numsSize;r++)
    {
        if(nums[l] == nums[r])
        {
            continue;
        }
        else{
            nums[l+1]=nums[r];
            l++;
        }
    }
    return (l);
}

void testFindUnique(void)
{
    int nums[] = {0, 0};
    int numsSize = (sizeof(nums)/ sizeof(nums[0]));
    int i, k;

    printf("Input array:\n");
    for (i = 0; i < numsSize; i++)
        printf(" %d", nums[i]);
    printf("\n");

    k = returnUnique(nums, numsSize);
    printf("number of unique elements %d\n", k);

    printf("Result array:\n");
    for (i = 0; i < k; i++)
        printf(" %d", nums[i]);
    printf("\n");
}

void main()
{
#if 0
    int arr[100];
    printf("size of the array: ");
    int len;
    scanf("%d",&len);
    printf("Enter the integer array elements one by one:\n ");
    for(int j = 0;j<len;j++)
    {
        scanf("%d",&arr[j]);
    }
    int k = 1;
    for(int i=0;i<len;i++)
    {
        if(arr[i] != arr[i-1]) {
            k++;
        }
        else {
            for(int j=i;j<len;j++)
            {
                arr[j]=arr[j+1];
            }
        }
    }
    printf("The augmented array is : \n");
    for(int f = 0;f<len;f++)
    {
        printf("%d ",arr[f]);
    }
    printf("\nNumber of unique elements in the array is: %d", k);
#else
    testFindUnique();
#endif
}