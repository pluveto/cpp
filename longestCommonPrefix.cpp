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
    string longestCommonPrefix(vector<string> &strs)
    { 
        string pub = !strs.size()?"":strs[0];
        for (int i = 0; i < strs.size(); i++)
            while (pub.size() && strs[i].rfind(pub, 0) != 0) pub.pop_back();
        return pub;
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
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "\"" << sol->longestCommonPrefix(strs1) << "\"" << endl;
    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "\"" << sol->longestCommonPrefix(strs2) << "\"" << endl;

    return 0;
}