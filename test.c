#include <stdio.h>
void convert(char *);
int main()
{
    char str[40];
    scanf("%s", str);

    convert(str);
    printf("%s", str);

    return 0;
}