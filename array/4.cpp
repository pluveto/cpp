#include <stdio.h>
#include <string>
#include <iostream>
#include <list>

using namespace std;

void batchPushBack(list<string> &toWhere, list<string> &fromWhere, char prefix);

list<string> perm(string str);


int main()
{
    string str1 = "abcdefg";
    list<string> ret = perm(str1);
    printStrings(ret);
    return 0;
}

list<string> perm(string str)
{
    // 存放返回值
    list<string> ret;

    // 如果只有一个字符，直接返回
    if (str.size() == 1)
    {
        ret.push_back(str);
        return ret;
    }
    if (str.size() > 8)
    {
        cout << "emm" << endl;
        return ret;
    }

    // 遍历 str，对每个 char：
    string::iterator strIt = str.begin();
    while (strIt != str.end())
    {
        // 获取抽走 chr 之后的字符串，对其进行 perm 操作。
        char chr = *strIt;
        std::string cpy = str;
        cpy.erase(strIt - str.begin(), 1);
        list<string> perms = perm(cpy);
        // 将 perms 批量添加到返回链表中
        batchPushBack(ret, perms, chr);

        strIt++;
    }
    return ret;
}

void batchPushBack(list<string> &toWhere, list<string> &fromWhere, char prefix)
{
    list<string>::iterator stringsIt = fromWhere.begin();
    while (stringsIt != fromWhere.end())
    {
        cout << "str: " << *stringsIt << endl;
        toWhere.push_back(prefix + *stringsIt);
        stringsIt++;
    }
}

void printStrings(const list<string> &strings)
{
    list<string>::const_iterator stringsIt = strings.begin();
    while (stringsIt != strings.end())
    {
        cout << *stringsIt << endl;

        stringsIt++;
    }
}
