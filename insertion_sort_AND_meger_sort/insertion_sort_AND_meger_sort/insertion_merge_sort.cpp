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
	cout << "The insertion method sort function results are " << endl;
	for (vector<double>::iterator beg = sort_vec.begin(); beg != sort_vec.end(); ++beg)
	{
		cout << *beg << " ";
	}
	cout << endl;
	return 0;
}
//selection sort funciton
//firt we find the minimum number and swap it with the first element int the vector container
//the second iteration ,find the minimum number from the second element to the last element and swip it with the second element etc.
int selection_sort(vector<double> &sort_vec)
{
	vector<double>::size_type length = sort_vec.size();
	for (vector<double>::size_type index = 0; index != length - 1; index++)
	{
		//min is the minimum number variable and initialize with the value of the first element's index
		double min = index;
		for (vector<double>::size_type j = index+1 ; j != length; j++)
		{
			if (sort_vec[j] < sort_vec[min])
			{
				min = j;
			}
		}
		if (min != index)
		{
			//swap the minimum number with the index number
			double temp = sort_vec[min];
			sort_vec[min] = sort_vec[index];
			sort_vec[index] = temp;
		}
	}
	cout << "The selection sort method's sort results are" << endl;
	for (vector<double>::size_type i = 0; i != length; i++)
	{
		cout << sort_vec[i] << " ";
	}
	cout << endl;
	return 0;
}
//merger sort function
//The idea for merger sort is divide and conquer
int merger_sort(vector<double>::iterator beg,vector<double>::iterator end)
{
	// the condition to break the recursion
	if (beg == end)
	{
		return 0;
	}
	vector<double>::difference_type distance = (end - beg) / 2;
	vector<double>::iterator middle = beg + distance;
	merger_sort(beg, middle);
	merger_sort(middle + 1, end);
	//if the two divided partion is sorted, we merger the two part to a sorted sequence
	vector<double>::iterator current = middle + 1;
	//this part is similarly to insertion sort
	for (; current != end + 1; current++)
	{
		double tem = *current;
		bool par = true;
		//USE WHILE IS BETER !!!! 
		for (vector<double>::size_type i = distance +1; i != 0; --i)
		{
			if (*(beg + i-1)>tem)
			{
				*(beg + i) = *(beg + i - 1);
		    }
			else
			{
				par = false;
				*(beg + i) = tem;
				break;
			}

		}
		if (par)
		{
			*beg = tem;
		}
		
	}

	return 0;
}

