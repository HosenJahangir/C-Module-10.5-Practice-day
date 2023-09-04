#include <stdio.h>
#include <string.h>
int main()
{
    char string[100001];
    scanf("%s", &string);
    int len = strlen(string);
    for (int i = 0; i < len; i++)
    {
        if (string[i] == ',')
        {
            string[i] = ' ';
        }
        int c2n = string[i];

        if (c2n >= 65 && c2n <= 90)
        {
            string[i] = c2n + 32;
        }
        if (c2n >= 97 && c2n <= 122)
        {
            string[i] = c2n - 32;
        }
    }
    printf("%s", string);

    return 0;
}