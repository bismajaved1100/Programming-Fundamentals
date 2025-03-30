////sum = 2!/x^2 + 4!/x^4 + ... + n!/x^n
//#include<iostream>
//using namespace std;
//int main()
//{
//	double n, x ;
//	cout << "Enter numerator right hand limit: ";
//	cin >> n;
//    cout << "Enter denominator: ";
//	cin >> x;
//	//double f = 1;   yahan par f ko kabi bhi initialize nahi krna wrna answer ghalat ayega                         // f for factorial
//	double sum = 0;
//		for (int m = 2; m <= n; m = m + 2)
//		{
//			double f = 1;                        // f ko loop k ander initialize karen gay
//			for (int count = 1; count <= m; count++)
//			{
//				f = f * count;
//			}
//			double p = pow(x, m);
//			double t = f / p;
//			sum = sum + t;
//		}
//		cout << sum;
//	return 0;
//}