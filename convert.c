void convert(char *str)
{
    int i = 0;
    for (i = 0; str[i] != 0; i++)
    {

        if ('A' <= str[i] && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A');
        else if ('a' <= str[i] && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
        else if (str[i] < '0' || str[i] > '9')
        {
            printf("wrong character");
            return ;
        }
    }
}