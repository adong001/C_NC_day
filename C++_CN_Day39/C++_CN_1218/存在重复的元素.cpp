#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
//给定一个整数数组，判断是否存在重复元素。
//如果任何值在数组中出现至少两次，函数返回 true。
//如果数组中每个元素都不相同，则返回 false。
//
//示例 1:
//
//输入 : [1, 2, 3, 1]
//输出 : true
//
//示例 2 :
//
//输入 : [1, 2, 3, 4]
//输出 : false
//
//示例 3 :
//
//输入 : [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
//输出 : true
//

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) 
	{
		unordered_set<int> s;
		for (auto& e : nums)
		{
			if (!s.insert(e).second)
			{
				return true;
			}
		}
		return false;
	}
};
int main6()
{
    system("pause");
    return 0;
}