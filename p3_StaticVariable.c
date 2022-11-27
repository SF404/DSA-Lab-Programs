// ----------Program using stati variable------------
#include <stdio.h>
int staticfun()
{
    static int count; // Static Variable gets initialized to zero and Holds the previous value when function is returned
    count++;
    return count;
}
int fun()
{
    int count = 0;
    count++;
    return count;
}
int main()
{
    printf("variable %d \n", fun()); // variable need initialization it stores garbage value
    printf("variable %d \n", fun()); // variable is initialized for every function call
    printf("Static variable %d \n", staticfun());
    printf("Static variable %d \n", staticfun()); // variable is not initialized again Previous value is incremented
    return 0;
}
