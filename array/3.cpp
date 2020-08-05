#include <stdio.h>
#include <cmath>

bool check(int num)
{
    return num > 0 && (int)pow(3,19) % num == 0;
}

int main()
{
    printf("%d", check(27)) ;
}