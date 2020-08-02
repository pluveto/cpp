#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVec(vector<int> &vec);

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ret;
        int count = nums.size();
        for (int i = 0, j = 0; i < count; i++)
        {
            while (j != count && nums[i] + nums[j] != target)
            {
                j++;
            }
            if(j == count){
                j = 0;
                continue;
            }
            ret.push_back(i);
            ret.push_back(j);
            return ret;
        }
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
    vector<int> nums1 = {1, 2, 3, 5, 6, 3, 2};

    Solution *sol = new Solution();
    sol->twoSum(nums1, 11);
    printVec(nums1);
    return 0;
}