// ---------------Program to convert Infix Expression to Post fix--------------
#include <stdio.h>
int prec(char ch) // Precedence Checking Function 
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '^')
        return 3;

    return (-1);
}
int main()
{
    int top = -1;
    char s[5];
    char str[] = "a+b*c^d^e*f/g+h/j"; //--------------> Input Expresion
    printf("Enter the infix Expression: ");
    scanf("%s", &str);
    printf("        PostFix Expression: ");
    int i = 0;
    while (i < 17)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", str[i++]);
        }
        else
        {
            if (prec(str[i]) > prec(s[top]))
            {
                top++;
                s[top] = str[i++];
            }
            else
            {
                while (prec(str[i]) <= prec(s[top]))
                {
                    printf("%c", s[top]);
                    top--;
                }
                top++;
                s[top] = str[i++];
            }
        }
    }
    while (top != -1)
    {
        printf("%c", s[top]);
        top--;
    }

    return 0;
}