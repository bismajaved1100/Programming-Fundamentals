///* By considering the terms in the Fibonacci sequence, find the sum of the first 'N' even valued terms.*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout << "How many even valued terms do you want? ";
//	cin >> n;
//	int t1 = 1;
//	int t2 = 2;
//	int t3 = t1 + t2;
//	int i = 1;
//	int sum = 2;
//	while (i < n)
//	{
//		t1 = t2;
//		t2 = t3;
//		t3 = t1 + t2;
//		if (t3 % 2 == 0)
//		{
//			sum = sum + t3;
//			i++;
//		}
//	}
//	cout << "Sum of first " << n << " even valued terms in the fibonacci sequence is: " << sum;
//	return 0;
//}