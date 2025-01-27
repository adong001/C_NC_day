﻿#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;

//给定一个按照升序排列的整数数组 nums，和一个目标值 target。
//找出给定目标值在数组中的开始位置和结束位置。
//你的算法时间复杂度必须是 O(log n) 级别。
//如果数组中不存在目标值，返回 [-1, -1]。
//
//示例 1:
//输入 : nums = [5, 7, 7, 8, 8, 10], target = 8
//输出 : [3, 4]
//
//示例 2 :
//输入 : nums = [5, 7, 7, 8, 8, 10], target = 6
//输出 : [-1, -1]

class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target)
	{
		vector<int> ret = { -1, -1 };
		if (nums.size() <= 0)
		{
			return ret;
		}
		int left = 0;
		int right = nums.size() - 1;
		int mid;
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (nums[mid] == target)
			{
				break;
			}
			else if (nums[mid] > target)
			{
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		}

		if (nums[mid] == target)
		{
			int i = mid;
			while (i - 1 >= 0 && nums[i - 1] == target)
			{
				i--;
			}
			ret[0] = i;
			i = mid;

			while (i + 1 < nums.size() && nums[i + 1] == target)
			{
				i++;
			}
			ret[1] = i;
		}


		return ret;
	}
};

int main4()
{
    system("pause");
    return 0;
}