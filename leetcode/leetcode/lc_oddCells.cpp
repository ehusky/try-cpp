#include "leetcode.h"

int Solution::oddCells(int n, int m, std::vector<std::vector<int>>& indices)
{
	std::vector<int> row(m, 0);
	std::vector<std::vector<int>> matrix(n, row);
	int num_odds = 0;
	for (std::vector<std::vector<int>>::iterator iter = indices.begin(); iter != indices.end(); iter++)
	{
		for (int i = 0; i < n; i++)
		{
			matrix[i][iter[0][1]] = !matrix[i][iter[0][1]];
		}
		for (int i = 0; i < m; i++)
		{
			matrix[iter[0][0]][i] = !matrix[iter[0][0]][i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			num_odds += matrix[i][j];
		}
	}
	return num_odds;
}