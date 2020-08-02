#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        // sort
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        // {1, 2, 4, 5}
        // {1, 3, 4}
        vector<int>::const_iterator it1 = nums1.begin();
        vector<int>::const_iterator it2 = nums2.begin();

        vector<int> ret;

        while (it1 != nums1.end() && it2 != nums2.end())
        {
            if (*it1 > *it2)
            {
                it2++;
                continue;
            }
            if (*it1 < *it2)
            {
                it1++;
                continue;
            }
            ret.push_back(*it1);
            it1++;
            it2++;
        }
        return ret;
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
    vector<int> nums1 = {2, 6, 2, 9, 1};
    vector<int> nums2 = {7, 1};

    Solution *sol = new Solution();
    vector<int> result = sol->intersect(nums1, nums2);
    printVec(result);
    return 0;
}