///* make the pattern     1
//                       212
//                      32123
//                       212
//                        1
//*/ 
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num, m, i, j, t;
//	cout << "enter an integer: ";
//	cin >> num;
//	for (i = 1; i <= num; i++)
//	{
//		for (m = num - i ; m > 0; m--)
//		{
//			cout << " ";
//		}
//		cout << i;
//		for (j = i - 1; j > 0; j--)
//		{
//			cout << j;
//		}
//	    for (t = j + 2; t <= i; t++)
//		{
//			cout << t;
//		}
//		cout << endl;
//	}
//	for (i = num - 1; i > 0; i--)
//	{
//		for (m = num - i; m > 0; m--)
//		{
//			cout << " ";
//		}
//		cout << i;
//		for (j = i - 1; j > 0; j--)
//		{
//			cout << j;
//		}
//		for (t = j + 2; t <= i; t++)
//		{
//			cout << t;
//		}
//		cout << endl;
//	}
//	return 0;
//}