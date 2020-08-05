#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVec(vector<int> &vec);

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 0, j = 0; i < nums.size(); ++i){
            if(nums[i] != 0){
                swap(nums[i], nums[j++]);                
            } 
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
    vector<int> nums1 = {0, 0, 1};

    Solution *sol = new Solution();
    sol->moveZeroes(nums1);
    printVec(nums1);
    return 0;
}