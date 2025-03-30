//#include<iostream>
//using namespace std;
//int main()
//{
//	int place = 1, digitCount = 0, binary, num, sum = 0;
//	cout << "Enter a Binary number: ";
//	cin >> binary;
//	num = binary;
//
//	while (num != 0)
//	{
//		num = num / 10;
//		digitCount = digitCount + 1;
//		place = place * 10;
//	}
//	num = binary;
//	
//	while ( digitCount != 0 )
//	{
//		place = place / 10;
//		digitCount = digitCount - 1;
//		int result = num / place;
//		int power = pow(2, digitCount);
//		sum = sum + (result * power);
//		num = num % place;
//	}
//	cout << "Decimal form of " << binary << " is: " << sum;
//}