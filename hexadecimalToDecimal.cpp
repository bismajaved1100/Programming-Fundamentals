//#include<iostream>
//#include<cstring>
//#include<cmath>
//using namespace std;
//int main()
//{
//	char hex[20];
//	int digitCount = 0, num, sum = 0, power;
//	cout << "Enter a Hexadecimal number: ";
//	cin >> hex;
//	digitCount = strlen(hex);
//	//cout << digitCount << endl;
//	int exp = digitCount - 1;
//	for (int i = 0; i < digitCount; i++)
//	{
//		if (hex[i] >= '0' && hex[i] <= '9')
//		{
//		    num = hex[i] - '0';
//		}
//		else if ( hex[i] >= 'A' && hex[i] <= 'F' )
//		{
//			num = (hex[i] - 'A') + 10;
//		}
//		else if (hex[i] >= 'a' && hex[i] <= 'f')
//		{
//			num = (hex[i] - 'a') + 10;
//		}
//		else
//		{
//			cout << "Invalid Hexadecimal number. " << endl;
//			return 1;
//		}
//		power = pow(16, exp);
//		sum = sum + (num * power);
//		exp = exp - 1;
//	}
//	cout << "Decimal form of " << hex << " is: " << sum;
//}