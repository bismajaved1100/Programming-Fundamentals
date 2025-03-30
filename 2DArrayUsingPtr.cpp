//#include<iostream>
//using namespace std;
//int main()
//{
//	int rows, cols;
//	cout << "Enter no. of rows: ";
//	cin >> rows;
//	cout << "Enter no. of columns: ";
//	cin >> cols;
//	int** marks = new int*[rows];      //  Allocating array for rows
//	for (int i = 0; i < rows; i++)
//	{
//		marks[i] = new int[cols];     //  Allocating array for columns
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		cout << "Enter marks of student # " << i + 1 << ": ";
//		for (int j = 0; j < cols; j++)
//		{
//			cin >> marks[i][j];
//			// cin >> *(*(marks + i)+j);
//		}
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		cout << "Marks of student # " << i + 1 << " are: ";
//		for (int j = 0; j < cols; j++)
//		{
//			cout << marks[i][j] << " ";
//			// cout << *(*(marks + i)+j) << " ";
//		}
//		cout << endl;
//	}
//
//	//   De-Allocating the allocated array
//	for (int i = 0; i < rows; i++)                   // For Allocation, we allocate rows first and then columns 
//	{                                               // and the same process is reversed for De-Allocation.
//		delete [] marks[i];
//		marks[i] = nullptr;
//	}
//	delete[] marks;
//	marks = nullptr;
//}