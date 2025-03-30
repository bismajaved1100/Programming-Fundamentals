//#include<iostream>
//using namespace std;
//int lastPrimeNumber(int);
//int add(int, int);
//int main()
//{
//	int k, m, prime1, prime2, sum;
//	cout << "Enter a number: " << endl;
//	cin >> k;
//	prime1 = lastPrimeNumber (k);
//	cout << "Last occurred prime number is: " << prime1 << endl;
//	cout << "Enter another number: " << endl;
//	cin >> m;
//	prime2 = lastPrimeNumber(m);
//	cout << "Last occurred prime number is: " << prime2 << endl;
//	sum = add(prime1, prime2);
//	cout << "Sum of both the numbers is: " << sum;
//}
//int lastPrimeNumber(int a)
//{ 
//	int n, i, t = 1, f = 1;
//	n = a - 1;
//	while ( t == 1 )
//	{
//	    for (i = 2; i < n && f == 1; i++)
//		{
//		    if (n % i == 0)
//			{
//			    f = 0;
//			}
//		}
//		if (i == n)
//		{
//			t = 0;
//	    }
//	n = n - 1;
//    f = 1;
//	}
//return i;
//}
//int add (int x, int y)
//{
//	int p;
//	p = x + y;
//	return p;
//}