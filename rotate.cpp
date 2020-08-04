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
    void rotate(vector<vector<int>> &img)
    {
        int S = img.size();
        int tmp;
        for (int x = 0; (S % 2) ? x <= S / 2 : x < S / 2; x++)
        {
            for (int y = 0; y < S / 2; y++)
            {
                tmp = img[x][y];
                img[x][y] = img[S - 1 - y][x];
                img[S - 1 - y][x] = img[S - 1 - x][S - 1 - y];
                img[S - 1 - x][S - 1 - y] = img[y][S - 1 - x];
                img[y][S - 1 - x] = tmp;
            }
        }
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
    sol->rotate(nums2);
    printMat(nums2);
    //printVec(nums1);
    return 0;
}