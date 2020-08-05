#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVec(vector<int> &vec);

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        vector<int> ret;
        digits[digits.size() - 1]++;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] != 10)
            {
                continue;
            }
            if (i == 0)
            {
                digits.insert(digits.begin(), 0);
                i++;
            }
            digits[i - 1]++;
            digits[i] = 0;
        }
        return digits;
    }
};

void printVec(vector<int> &vec)
{
    size_t size = vec.size();
    cout << "{";
    for (size_t i = 0; i < size; i++)
    {
        cout << vec[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
    cout << "}\n";
}

int main()
{
    vector<int> nums1 = {8, 9, 9, 9};

    Solution *sol = new Solution();
    vector<int> result = sol->plusOne(nums1);
    printVec(result);
    return 0;
}