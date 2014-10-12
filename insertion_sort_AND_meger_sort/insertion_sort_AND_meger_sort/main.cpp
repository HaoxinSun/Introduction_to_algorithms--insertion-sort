#include<iostream>
#include<string>
#include<vector>
#include"Sort_function.h"


using namespace std;

int main()
{
	//this program include two sort methods, one is insertion sort and the other is merge sort 
	//a practice of the book(introduction to algorithms)
	//author by Haoxin Sun  date:10-10-2014
	vector<double> sort_vec;
	cout << "Enter the numbers to sort-using intertion sort and enter \"ctrl+z\" to stop enter number" << endl;
	double number;
	while (cin >> number)
	{
		sort_vec.push_back(number);
	}
	//call the insertion sort function to sort the numbers
	insertion_sort(sort_vec);

	

	
	system("pause");
	return 0;
}
