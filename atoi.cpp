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

    bool fuck(string s)
    {
        int size = s.size();
        char *shit = new char[size];
        int cursor = 0;
        int i;
        for (i = 0; i < size; i++)
        {
            if (('0' <= s[i] && s[i] <= '9') || ('a' <= s[i] && s[i] <= 'z'))
            {
                shit[cursor++] = (s[i]);
            }
            else if ('A' <= s[i] && s[i] <= 'Z')
            {
                shit[cursor++] = (s[i] - ('Z' - 'z'));
            }
        }
        for (i = 0; i < cursor; i++)
        {
            cout << shit[i] << " " << shit[cursor - i - 1] << endl;
            if (shit[i] != shit[cursor - i - 1])
            {
                return false;
            }
        }
        delete[] shit;
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
    cout << sol->isPalindrome("A man, a plan, a canal: Panama");
    //printVec(nums3);
    return 0;
}