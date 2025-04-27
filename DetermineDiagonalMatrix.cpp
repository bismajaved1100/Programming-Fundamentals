//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout << "Enter size of square matrix: " << endl;
//	cin >> n;
//	int** arr = new int* [n];
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = new int[n];
//	}
//	cout << "Enter elements of matrix: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	int f = 1;
//	for (int i = 0; i < n && f == 1; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i != j)
//			{
//				if (arr[i][j] == 0)
//				{
//					f = 1;
//				}
//				else
//				{
//					f = 0;
//				}
//			}
//		}
//	}
//	if (f == 1)
//	{
//		cout << "Matrix is diagonal" << endl;
//	}
//	else
//	{
//		cout << "Matrix is not diagonal" << endl;
//	}
//
//	// Deallocate memory
//	for (int i = 0; i < n; i++)
//	{
//		delete[] arr[i];
//		arr[i] = nullptr;
//	}
//	delete[] arr;
//	arr = nullptr;
//
//	return 0;
//}