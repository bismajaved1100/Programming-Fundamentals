//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	int A[2][2];
//	int B[2][2];
//	int C[2][2];
//	
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			cout << "Enter " << i + 1 << " row " << j + 1 << " element for matrix A: ";
//			cin >> A[i][j];
//		}
//	} 
//
//	cout << "A = ";
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			cout << A[i][j] << "\t";
//		}
//		cout << endl << "    ";
//	}
//	cout << endl;
//	
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			cout << "Enter " << i + 1 << " row " << j + 1 << " element for matrix B: ";
//			cin >> B[i][j];
//		}
//	}
//	
//	cout << "B = ";
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			cout << B[i][j] << "\t";
//		}
//		cout << endl << "    ";
//	}
//	cout << endl;
//	
//	cout << endl << "Addition: A + B = " << endl;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			C[i][j] = A[i][j] + B[i][j];
//		}
//	}
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			cout << C[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}