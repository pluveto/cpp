#include <stdio.h>

int main()
{
    return 0;
}
int binsearch(int keyword, int increase_list[], int length)
{
    int low, high, mid;
    low = 1;
    high = length;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (keyword < increase_list[mid])
            high = mid - 1;
        else if (keyword > increase_list[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1; 
}
