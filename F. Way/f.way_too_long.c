#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char string[101];
    for (int i = 0; i < n; i++)
    {
        // scanf("%c", &string[i]);
        scanf("%s", &string); // aevabe input dile pura string dorbe. Loop for other three inputs.
        int len = strlen(string);
        // printf("%d\n", len);
        if (len <= 10)
        {
            printf("%s\n", string);
        }
        else
        {
            printf("%c%d%c\n", string[0], (len - 2), string[len - 1]);
        }
    }

    return 0;
}