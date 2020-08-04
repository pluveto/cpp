#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

template <class T>
void printVec(vector<T> &vec);

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        bool bitmap[27] = {};
        for (short i = 0; i < 9; i++)
        {            
            for (short j = 0; j < 9; j++)
            {
                short m = j / 3 + 3 * (i / 3);
                short n = j % 3 + 3 * (i % 3);

                if (board[i][j] != 46 && bitmap[board[i][j] - 49]) return false;
                if (board[j][i] != 46 && bitmap[board[j][i] - 40]) return false;
                if (board[m][n] != 46 && bitmap[board[m][n] - 31]) return false;

                if (board[i][j] != 46) bitmap[board[i][j] - 49] = 1;
                if (board[j][i] != 46) bitmap[board[j][i] - 40] = 1;
                if (board[m][n] != 46) bitmap[board[m][n] - 31] = 1;
            }
            memset(bitmap, 0, 27);
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
    cout << "}\n";
}

int main()
{
    vector<vector<char>> nums1 = {
        {'5', '3', 46, 46, '7', 46, 46, 46, 46},
        {'6', 46, 46, 49, '9', '5', 46, 46, 46},
        {46, '9', '8', 46, 46, 46, 46, '6', 46},
        {'8', 46, 46, 46, '6', 46, 46, 46, '3'},
        {'4', 46, 46, '8', 46, '3', 46, 46, 49},
        {'7', 46, 46, 46, '2', 46, 46, 46, '6'},
        {46, '6', 46, 46, 46, 46, '2', '8', 46},
        {46, 46, 46, '4', 49, '9', 46, 46, '5'},
        {46, 46, 46, 46, '8', 46, 46, '7', '9'},
    };

    Solution *sol = new Solution();
    bool valid = sol->isValidSudoku(nums1);
    cout << "is valid: " << valid << endl;
    //printVec(nums1);
    return 0;
}