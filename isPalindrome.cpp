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
    bool isPalindrome(string s)
    {
        int size = s.size();
        if (size < 2)
            return 1;
        int i, j;
        for (i = 0, j = size - 1; i < j; i++, j--)
        {
            while (i < j && !(('0' <= s[i] && s[i] <= '9') || ('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z')))
            {
                i++;
            }
            while (i <j && !(('0' <= s[j] && s[j] <= '9') || ('a' <= s[j] && s[j] <= 'z') || ('A' <= s[j] && s[j] <= 'Z')))
            {
                j--;
            }
            if (i == j)
                break;
            if (('A' <= s[j] && s[j] <= 'Z'))
                s[j] -= ('A' - 'a');
            if (('A' <= s[i] && s[i] <= 'Z'))
                s[i] -= ('A' - 'a');

            //cout << i << ":" << s[i] << ", " << j << ":" << s[j] << endl;
            if (s[i] != s[j])
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
    auto s = "rat", t = "car";
    cout << sol->isPalindrome("aa");
    //printVec(nums3);
    return 0;
}