#include"Sort_function.h"
#include<vector>
#include<iostream>
#include<string>

using namespace std;

//define the two sort functions
//The insertion sort
int insertion_sort(vector<double> &sort_vec)
{
	for (vector<double>::iterator beg = sort_vec.begin() + 1; beg != sort_vec.end(); ++beg)
	{
		//assign the number which need be sorted to a temporary variable
		double tem = *beg;
		//find a position where the number to be put 
		for (vector<double>::iterator sbeg = beg - 1; sbeg >= sort_vec.begin(); --sbeg)
		{
			if (*sbeg > tem&&sbeg>sort_vec.begin())
			{
				*(sbeg + 1) = *sbeg;
			}
			else if (*sbeg > tem)
			{
				*(sbeg + 1) = *sbeg;
				*(sbeg) = tem;
				break;
			}
			else
			{
				*(sbeg + 1) = tem;
				break;

			}
		}

	}
	//output the sorted sequence
	cout << "The sorted number is " << endl;
	for (vector<double>::iterator beg = sort_vec.begin(); beg != sort_vec.end(); ++beg)
	{
		cout << *beg << " ";
	}
	return 0;
}
//merge sort function
int merge_sort(vector<double> &sort_vec)
{
	return 0;
}

