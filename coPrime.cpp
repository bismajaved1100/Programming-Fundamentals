///* Write a program which takes input from user for a and b and tells wherher they are co prime or not.*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, i, f = 1;
//	cout << "Enter two integers: ";
//	cin >> a >> b;
//	for ( i = 2; i <= a && f == 1; i++)
//	{
//		if (a % i == 0)
//		{
//			if (b % i == 0)
//			{
//				cout << a << " and " << b << " are not co-prime. ";
//				f = 0;
//			}
//			else if (b % i != 0)
//			{
//				f = 1;
//			}
//		}
//	}
//	if (i == a + 1)
//	{
//		cout << a << " and " << b << " are co-prime. ";
//	}
//	return 0;
//}