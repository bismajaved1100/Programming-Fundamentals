//// Print first n prime numbers. 
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n , p = 2 , i, f = 1;
//	cout << "How many prime numbers do you want? ";
//	cin >> n;
//	cout << "First " << n << " prime numbers are: \n";
//		while (n != 0)
//	{
//		for (i = 2; i < p; i++)
//		{
//			if ( p % i == 0 )
//			{
//				break;
//			}
//		}
//		if (i == p)
//		{
//			cout << p << ", ";
//			n--;
//		}
//		p++;
//	}
//	return 0;
//}



//// Print first n prime numbers. Without break statements. 
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n , p = 2 , f = 1,  i;
//	cout << "How many prime numbers do you want? ";
//	cin >> n;
//	cout << "First " << n << " prime numbers are: \n";
//		while (n != 0)
//	{
//		for (i = 2; i < p && f == 1; i++)
//		{
//			if ( p % i == 0 )
//			{
//				f = 0;
//			}
//		}
//		if (i == p)
//		{
//			cout << p << ", ";
//			n--;
//		}
//		p++;
//		f = 1;
//	}
//	return 0;
//}
