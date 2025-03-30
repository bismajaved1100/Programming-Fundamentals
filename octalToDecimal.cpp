//#include<iostream>
//using namespace std;
//int main()
//{
//	int place = 1, digitCount = 0, octal, num, sum = 0;
//	cout << "Enter a Binary number: ";
//	cin >> octal;
//	num = octal;
//
//	while (num != 0)
//	{
//		num = num / 10;
//		digitCount = digitCount + 1;
//		place = place * 10;
//	}
//	num = octal;
//	
//	while ( digitCount != 0 )
//	{
//		place = place / 10;
//		digitCount = digitCount - 1;
//		int result = num / place;
//		int power = pow(8, digitCount);
//		sum = sum + (result * power);
//		num = num % place;
//	}
//	cout << "Decimal form of " << octal << " is: " << sum;
//}