#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

void printVec(vector<int> &vec);

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int count = nums.size();
        unordered_map<int, int> map;
        map[nums[0]] = 0;
        for (int i = 1; i < count; i++)
        {
            if(map.find(target - nums[i])!=map.end()){
                return{map[target - nums[i]], i};
            }
            map[nums[i]] = i;
        }
        return {};
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
    vector<int> nums1 = {3,2,4};

    Solution *sol = new Solution();
    auto ret = sol->twoSum(nums1, 6);
    printVec(ret);
    delete sol;
    return 0;
}