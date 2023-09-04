#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    int minpos = 0;
    int maxpos = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
            minpos = i;
        }
        if (arr[i] >= max)
        {
            max = arr[i];
            maxpos = i;
        }
    }
    printf("%d %d\n", min, max);

    int temp = arr[minpos];
    arr[minpos] = arr[maxpos];
    arr[maxpos] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}