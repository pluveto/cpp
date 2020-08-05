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
    string countAndSay(int n)
    {
        if (n == 1) return "1";
        string ret;
        string last = countAndSay(n - 1); // "1"
        char num = last[0]; // '1'
        short count = 0;
        short size = last.size();
        for (short i = 0; i < size; i++)
        {
            if (last[i] == num)
            {
                count++;
            }
            else
            {
                ret += to_string(count) + num;
                num = last[i];
                count = 1;
            }
        }
        ret += to_string(count) + num;
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
    Solution *sol = new Solution();
    cout << sol->countAndSay(1) << endl;
    cout << sol->countAndSay(2) << endl;
    cout << sol->countAndSay(3) << endl;
    cout << sol->countAndSay(4) << endl;
    cout << sol->countAndSay(5) << endl;
    //printVec(nums3);
    return 0;
}