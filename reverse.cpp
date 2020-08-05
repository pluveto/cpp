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
    int reverse(int x)
    {
        int c = getNumerCount(x);
        cout << getNumerCount(x) << endl;
        cout << pow(10, c) - x << endl;
        return 0;
    }
    short getNumerCount(int x)
    {
        int ret = 0;
        while (x)
        {
            x /= 10;
            ret++;
        }

        return ret;        
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

    cout << sol->reverse(666);

    return 0;
}