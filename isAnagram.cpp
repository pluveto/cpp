#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

template <class T>
void printVec(vector<T> &vec);

template <class T>
void printMat(vector<vector<T>> &mat);

class Solution
{
public:
    int map[52];
    bool isAnagram(string s, string t)
    {
        int sizeOfS = s.size();
        int sizeOfT = t.size();
        if (sizeOfS != sizeOfT)
            return false;
        for (int i = 0; i < sizeOfS; i++)
        {
            map[s[i] - 'a']++;
            map[t[i] - 'a' + 26]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (map[i] != map[i + 26])
            {
                return false;
            }
        }
        return true;
    }
};

template <class T>
void printVec(vector<T> &vec)
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
    cout << "}";
}

template <class T>
void printMat(vector<vector<T>> &mat)
{
    size_t size = mat.size();
    cout << "{";
    for (size_t i = 0; i < size; i++)
    {
        printVec(mat[i]);
        if (i != size - 1)
        {
            cout << ", \n";
        }
    }
    cout << "}";
}

int main()
{
    vector<vector<int>> nums1 = {
        {5, 1, 9, 11},
        {2, 4, 8, 10},
        {13, 3, 6, 7},
        {15, 14, 12, 16},
    };

    vector<vector<int>> nums2 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    Solution *sol = new Solution();

    vector<char> nums3 = {'a', 'b', 'c', 'd'};
    auto  s = "rat", t = "car";
    cout << sol->isAnagram(s, t);
    //printVec(nums3);
    return 0;
}