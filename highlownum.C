#include <stdio.h>
void main()
{
    int arr[100];
    int i, high,low,size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=1; i<size; i++)
    {
        if(arr[i] > high)
        {
            high = arr[i];
        }
        if(arr[i] < low)
        {
            low = arr[i];
        }
    }
    printf("higher element=%d", high);
    printf("lower element=%d",low);
}
