﻿#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//给定一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素，返回移除后数组的新长度。
//不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
//
//示例 1:
//给定 nums = [3, 2, 2, 3], val = 3,
//函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。
//你不需要考虑数组中超出新长度后面的元素。

//示例 2 :
//给定 nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2,
//函数应该返回新的长度 5, 并且 nums 中的前五个元素为 0, 1, 3, 0, 4。
//注意这五个元素可为任意顺序。
//你不需要考虑数组中超出新长度后面的元素。

//说明 :
//为什么返回数值是整数，但输出的答案是数组呢 ?
//
//请注意，输入数组是以“引用”方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。
//你可以想象内部操作如下 :
//nums 是以“引用”方式传递的。也就是说，不对实参作任何拷贝
//int len = removeElement(nums, val);
//在函数里修改输入数组对于调用者是可见的。
//根据你的函数返回的长度, 它会打印出数组中该长度范围内的所有元素。
//for (int i = 0; i < len; i++) 
//{
//	print(nums[i]);
//}
class Solution {
public:
	int removeElement(vector<int>& nums, int val)
	{
		//方法一
		/*if (nums.size() == 0)
		{
		return 0;
		}

		int left = 0, right = 0;
		vector<int>::iterator pos, i;
		sort(nums.begin(), nums.end());//先排序
		pos = find(nums.begin(), nums.end(), val);//再找到那个元素
		if (pos != nums.end())
		{
		for (i = pos + 1; i != nums.end(); i++)//向右找相同的记录
		{
		if (*i == val)
		{
		right++;
		}
		else
		{
		break;
		}
		}

		if (pos != nums.begin())//向左
		{
		do
		{
		i = pos - 1;
		if (*i == val)
		{
		left++;
		}

		else
		{
		break;
		}

		} while (i != nums.begin());
		}

		nums.erase(pos - left, pos + right + 1);//删除左右两边的元素
		}
		return nums.size();
		*/
	 //方法二
		int i, j = 0;
		int size = nums.size();
		for (i = 0; i < size; i++)
		{
			if (nums[i] != val)
			{
				nums[j++] = nums[i];
			}
		}
		return j;
	}
};
int main3()
{
	vector<int> nums = { 3, 2, 3, 3 };
	Solution s;
	s.removeElement(nums, 3);
	system("pause");
	return 0;
}