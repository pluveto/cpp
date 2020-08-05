#include <stdio.h>
#include <string>
#include <list>
#include <iostream>

using namespace std;

void filter(list<int> &nums)
{
    list<int>::iterator it;
    it = nums.begin();
    while (it != nums.end())
    {
        if (*it % 5 == 0)
        {
            
        }
        it++;
    }
}

void print(list<int> &nums)
{
    list<int>::iterator it;
    it = nums.begin();
    while (it != nums.end())
    {
        cout << *it << endl;
        it++;
    }
}

int main()
{
    list<int> nums;
    for (int i = 1; i <= 100; i++)
    {
        nums.push_back(i);
    }
    filter(nums);
    print(nums);
}