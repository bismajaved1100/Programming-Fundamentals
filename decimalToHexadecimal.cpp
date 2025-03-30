//#include<iostream>
//using namespace std;
//int main()
//{
//	int decimal, num, digitcount = 0;
//	cout << "Enter a decimal number: ";
//	cin >> decimal;
//	if (decimal == 0)
//	{
//		cout << "Hexadecimal form of 0 is: 0" << endl;
//		return 0;
//	}
//	num = decimal;
//	while (num != 0)
//	{
//		num = num / 16;
//		digitcount = digitcount + 1;
//	}
//	num = decimal;
//	char hex[20];
//	for (int i = digitcount - 1; i >= 0; i--)
//	{
//		int remainder = num % 16;
//		if (remainder >= 10)
//		{
//			hex[i] = 'A' + (remainder - 10);
//		}
//		else
//		{
//			hex[i] = remainder + '0';
//		}
//		num = num / 16;
//	}
//	cout << "Hexadecimal form of " << decimal << " is: ";
//	for (int i = 0; i < digitcount; i++)
//	{
//		cout << hex[i];
//	}
//	cout << endl;
//}