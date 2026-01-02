#include <stdio.h>
#include <string.h>

int checkPassword(char password[])
{
    int i;
    int hasDigit = 0;
    int hasUpper = 0;
    if (strlen(password) <= 8)
    {
        return 0;
    }
    for (i = 0; password[i] != '\0'; i++)
    {
        if (password[i] >= '0' && password[i] <= '9')
        {
            hasDigit = 1;
        }
        if (password[i] >= 'A' && password[i] <= 'Z')
        {
            hasUpper = 1;
        }
    }
    if (hasDigit == 1 && hasUpper == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char password[50];
    int result;
    printf("Enter password: ");
    scanf("%s", password);
    result = checkPassword(password);
    if (result == 1)
    {
        printf("Password is STRONG\n");
    }
    else
    {
        printf("Password is WEAK\n");
    }
    return 0;
}