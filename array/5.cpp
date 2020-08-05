/**
 * 输出一个集合的所有子集
 */

#include <iostream>
#include <vector>

using namespace std;

template <class T>
void subsets(vector<vector<T>> &result, const vector<T> &originSet, size_t index, vector<T> setToAppend)
{
    if (originSet.size() == index)
    {
        if (setToAppend.size() >= 0)
        {
            result.push_back(setToAppend);
        }
        return;
    }

    vector<T> setToAppend1 = setToAppend;
    setToAppend.push_back(originSet[index]);
    vector<T> setToAppend2 = setToAppend;

    index++;

    subsets(result, originSet, index, setToAppend1);
    subsets(result, originSet, index, setToAppend2);
}

template <class T>
void printSet(vector<vector<T>> set)
{
    cout << "set: " << endl;
    for (size_t i = 0; i < set.size(); i++)
    {
        vector<T> subset = set[i];
        cout << "{";
        for (size_t j = 0; j < subset.size(); j++)
        {
            cout << subset[j];
            if (j != subset.size() - 1)
            {
                cout << ", ";
            }
        }
        cout << "}" << endl;
    }
}

int main()
{
    vector<vector<int>> result;
    subsets(result, {1, 2, 3, 4, 5}, 0, {});
    printSet<int>(result);
    return 0;
}