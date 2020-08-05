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
    int myAtoi(string str)
    {
        int size = str.size(), sign = 1, i = 0;
        long ret = 0;
        while (str[i] == ' ') i++;
        if (str[i] == '-' && ++i)  sign = -1;
        else if (str[i] == '+') i++;
        else if (!('0' <= str[i] && str[i] <= '9')) return 0;
        for (; i < size; i++)
        {
            if (!('0' <= str[i] && str[i] <= '9')) break;
            ret = ret * 10 + str[i] - '0';
            if (ret > INT32_MAX) return sign == 1? INT32_MAX: INT32_MIN;
        }
        return ret * sign;
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
    cout << sol->myAtoi("+1") << " "
         << "1" << endl;
    cout << sol->myAtoi("   -42") << " "
         << "-42" << endl;
    cout << sol->myAtoi("4193 with words") << " "
         << "4193" << endl;
    cout << sol->myAtoi("words and 987") << " "
         << "0" << endl;
    cout << sol->myAtoi("-91283472332") << " "
         << "-2147483648" << endl;
    cout << sol->myAtoi("-+1") << " "
         << "0" << endl;
    cout << sol->myAtoi(" b11228552307") << " "
         << "0" << endl;
    //printVec(nums3);
    return 0;
}