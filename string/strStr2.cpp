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
    int strStr(string subject, string word)
    {
        int sSize = subject.size();
        int wSize = word.size();

        if (wSize > sSize)
            return -1;
        if (sSize == 0)
            return 0;
        int scur = 0;
        int wcur = 0;
        while(scur < sSize - wSize){
            
        }
        return -1;
    }
    bool match(string subject, string what, int from, int to)
    {
        for (int j = from; j < to; j++)
        {
            if (subject[j] != what[j - from])
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
    Solution *sol = new Solution();
    cout << sol->strStr("motherfucker fucki ihr seid", "fucki") << endl;
    cout << strlen(strstr("motherfucker fucki ihr seid", "fucki")) << endl;

    cout << sol->strStr("hello", "ll") << endl;
    cout << strlen(strstr("hello", "ll")) << endl;

    cout << sol->strStr("aaaaa", "bba") << endl;
    //printVec(nums3);
    return 0;
}