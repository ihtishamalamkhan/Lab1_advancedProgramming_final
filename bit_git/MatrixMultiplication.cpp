#include <iostream>
#include <iostream>
#include "MatrixLib.h"
#include <vector>
#include "Stdafx.h"
using namespace std;
using namespace MatrixLib;

vector<vector<int> > Class1::multiply(vector <vector<int> > array1, vector <vector<int> > array2)
{
	int row1 = array1.size();
	int col1 = array1[0].size();
	int row2 = array2.size();
	int col2 = array2[0].size();

	vector<vector<int> > multiply(row1, vector <int>());

	for (int i = 0; i < row1; ++i)
		for (int j = 0; j < col2; ++j)
		{
			multiply[i].push_back(0);
		}

	if (col1 != row2)
	{
		printf("The matrices are not compatible for multiplication");
	}
	else
	{
		for (int i = 0; i < row1; i++)
		{
			for (int j = 0; j < col2; j++)
			{
				for (int k = 0; k < col1; k++)
				{
					multiply[i][j] += array1[i][k] * array2[k][j];
				}
			}

		}

	}

	for (int i = 0; i < multiply.size(); i++)
	{
		for (int j = 0; j < multiply[0].size(); j++)
		{
			cout << multiply[i][j] << " ";
		}
		cout << endl;
	}

	return multiply;
}