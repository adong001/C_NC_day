#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//给定一个由非负整数填充的m x n的二维数组，现在要从二维数组的左上角走到右下角，请找出路径上的所有数字之和最小的路径。
//注意：你每次只能向下或向右移动。
//class Solution {
//public:
//
//	int minPathSum(vector<vector<int> > &grid)
//	{
//		int n = grid.size();
//		int m = grid[0].size();
//		for (int i = 1; i<n; i++)
//		{
//			grid[i][0] += grid[i - 1][0];
//		}
//		for (int i = 1; i<m; i++)
//		{
//			grid[0][i] += grid[0][i - 1];
//		}
//
//		for (int i = 1; i<n; i++)
//		{
//			for (int j = 1; j<m; j++)
//			{
//				grid[i][j] += min(grid[i][j - 1], grid[i - 1][j]);
//			}
//		}
//		return grid[n - 1][m - 1];
//	}
//};


int MinPath(vector<vector<int> > &grid, int n, int m)
{

	if (n > 0 && m > 0)
	{
		return grid[n][m] + min(MinPath(grid, n - 1, m), MinPath(grid, n, m - 1));
	}

	else if (n == 0 && m == 0)
	{
		return grid[0][0];
	}

	else
	{
		if (n == 0)
		{
			return grid[n][m] + MinPath(grid, n, m - 1);
		}
		else
		{
			return grid[n][m] + MinPath(grid, n - 1, m);
		}
	}

}

int minPathSum(vector<vector<int> > &grid)
{
	return MinPath(grid, grid.size() - 1, grid[0].size() - 1);
}
int main()
{
	//Solution s;
	vector<vector<int> > sss = { { 1, 2, 3 ,2}, { 2, 3, 4 ,1}, { 0, 1, 2 ,5} };
	//s.minPathSum(sss);
	cout << minPathSum(sss) << endl;
	system("pause");
	return 0;
}