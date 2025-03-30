//#include<iostream>
//using namespace std;
//int main()
//{
//	/*int a;
//	int* p1 = &a;
//	int** p2 = &p1;
//	a = 5;
//	*p1 = 5;
//	**p2 = 5;*/
//	int r, c;
//	cout << "Enter rows:";
//	cin >> r;
//	cout << "Enter columns:";
//	cin >> c;
//	// int *arr = new int [n];		(for 1D Array)
//	// arr[i]  -->  int
//	// arr[i] is equivalent to *(arr+i)
//
//	// arr[i][j] is equivalent to
//	// *(*(arr + i) +j)
//	int ** marks = new int* [r];
//	// marks [i]  --> int*
//	for (int i = 0; i < r; i++)
//	{
//		marks[i] = new int[c];
//	}
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << "Enter element of row " << i + 1 << " and column " << j + 1 << endl;
//			cin >> marks[i][j];
//			// cin >> *(*(marks + i)+ j);
//		}
//	}
//	for (int i = 0; i < r; i++)
//	{
//		delete[]marks[i];
//		marks[i] = nullptr;
//	}
//	delete[]marks;
//	marks = nullptr;
//}