#include "stdafx.h"
#include "MatrixLib.h"
#include <vector>
#include <iostream>
#include <stdio.h>
using namespace MatrixLib;
using namespace std;

vector<vector<int>> MatrixLib::Class1::add(vector <vector<int> > array1, vector <vector<int> > array2)
{
	int rows = array1.size();
	int columns = array1[0].size();
	vector <vector <int> > sum{ { 0, 0, 0 },
	{ 0, 0, 0 },
	{ 0, 0, 0 } };

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			sum[i][j] = array1[i][j] + array2[i][j];
		}

	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			cout << sum[i][j] << " ";
		}
		cout << endl;
	}

	return sum;

}

vector<vector<int>> Class1::sub(vector <vector<int> > array1, vector <vector<int> > array2)
{
	int rows = array1.size();
	int columns = array1[0].size();
	vector <vector <int> > diff{ { 0, 0, 0 },
	{ 0, 0, 0 },
	{ 0, 0, 0 } };

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			diff[i][j] = array1[i][j] - array2[i][j];
		}

	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			cout << diff[i][j] << " ";
		}
		cout << endl;
	}
	return diff;
}