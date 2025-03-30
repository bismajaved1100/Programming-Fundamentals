//#include<iostream>
//#include<cmath>
//#include<cstring>
//using namespace std;
//
//int binarytooctal (int);
//int binarytodecimal (int);
//void binarytohexadecimal (int);
//void octaltobinary (int);
//int octaltodecimal (int);
//void octaltohexadecimal(int);
//void decimaltobinary(int);
//int decimaltooctal(int);
//void decimaltohexadecimal(int);
//void hexadecimaltobinary(const char*);
//int hexadecimaltooctal(const char*);
//int hexadecimaltodecimal(const char*);
//
//int main()
//{
//	int count, convert, num, binary;
//	char hex[20];
//	cout << "which number do you want to convert? " << endl;
//	cout << "enter 1 for binary. " << endl;
//	cout << "enter 2 for octal. " << endl;
//	cout << "enter 3 for decimal. " << endl;
//	cout << "enter 4 for hexadecimal. " << endl;
//	cin >> count;
//	cout << "in which form do you want to convert your number? " << endl;
//	cout << "enter 1 for binary. " << endl;
//	cout << "enter 2 for octal. " << endl;
//	cout << "enter 3 for decimal. " << endl;
//	cout << "enter 4 for hexadecimal. " << endl;
//	cin >> convert;
//
//	if (count == 1 && convert == 1)
//	{
//		cout << "enter a binary number: " << endl;
//		cin >> binary;
//		cout << "equivalent binary number is: " << binary << endl;
//	}
//	else if (count == 2 && convert == 2)
//	{
//		cout << "enter a octal number: " << endl;
//		cin >> num;
//		cout << "equivalent octal number is: " << num << endl;
//	}
//	else if (count == 3 && convert == 3)
//	{
//		cout << "enter a decimal number: " << endl;
//		cin >> num;
//		cout << "equivalent decimal number is: " << num << endl;
//	}
//	else if (count == 4 && convert == 4)
//	{
//		cout << "enter a hexadecimal number: " << endl;
//		cin >> hex;
//		cout << "equivalent hexadecimal number is: " << hex << endl;
//	}
//	else if (count == 1 && convert == 2)
//	{
//		cout << "enter a binary number: " << endl;
//		cin >> binary;
//		int octal = binarytooctal(binary);
//		cout << "equivalent octal number is: " << octal << endl;
//	}
//	else if (count == 1 && convert == 3)
//	{
//		cout << "enter a binary number: " << endl;
//		cin >> binary;
//		int decimal = binarytodecimal(binary);
//		cout << "equivalent decimal number is: " << decimal << endl;
//	}
//	else if (count == 1 && convert == 4)
//	{
//		cout << "enter a binary number: " << endl;
//		cin >> binary;
//		binarytohexadecimal(binary);
//	}
//	else if (count == 2 && convert == 1)
//	{
//		cout << "enter an octal number: " << endl;
//		cin >> num;
//		octaltobinary(num);
//	}
//	else if (count == 2 && convert == 3)
//	{
//		cout << "enter an octal number: " << endl;
//		cin >> num;
//		int decimal = octaltodecimal(num);
//		cout << "equivalent decimal number is: " << decimal << endl;
//	}
//	else if (count == 2 && convert == 4)
//	{
//		cout << "enter an octal number: " << endl;
//		cin >> num;
//		octaltohexadecimal(num);
//	}
//	else if (count == 3 && convert == 1)
//	{
//		cout << "enter a decimal number: " << endl;
//		cin >> num;
//		decimaltobinary(num);
//	}
//	else if (count == 3 && convert == 2)
//	{
//		cout << "enter a decimal number: " << endl;
//		cin >> num;
//		int octal = decimaltooctal(num);
//		cout << "equivalent octal number is: " << octal << endl;
//	}
//	else if (count == 3 && convert == 4)
//	{
//		cout << "enter a decimal number: " << endl;
//		cin >> num;
//		decimaltohexadecimal(num);
//	}
//	else if (count == 4 && convert == 1)
//	{
//		cout << "enter a hexadecimal number:" << endl;
//		cin >> hex;
//		hexadecimaltobinary(hex);
//	}
//	else if (count == 4 && convert == 2)
//	{
//		cout << "enter a hexadecimal number:" << endl;
//		cin >> hex;
//		int octal = hexadecimaltooctal(hex);
//		cout << "equivalent octal number is: " << octal << endl;
//	}
//	else if (count == 4 && convert == 3)
//	{
//		cout << "enter a hexadecimal number:" << endl;
//		cin >> hex;
//		int decimal = hexadecimaltodecimal(hex);
//		cout << "equivalent decimal number is: " << decimal << endl;
//	}
//}
//
//int binarytooctal(int binary)
//{
//	int k = binarytodecimal(binary);
//	int n = decimaltooctal(k);
//	return n;
//}
//
//int binarytodecimal(int binary)
//{
//	int place = 1, digitcount = 0, num, sum = 0;
//	num = binary;
//	while (num != 0)
//	{
//		num = num / 10;
//		digitcount = digitcount + 1;
//		place = place * 10;
//	}
//	num = binary;
//	while ( digitcount != 0 )
//	{
//		place = place / 10;
//		digitcount = digitcount - 1;
//		int result = num / place;
//		int power = pow(2, digitcount);
//		sum = sum + (result * power);
//		num = num % place;
//	}
//	return sum;
//}
//
//void binarytohexadecimal(int binary) 
//{
//	int k = binarytodecimal(binary);
//    decimaltohexadecimal(k);
//}
//
//void octaltobinary(int octal)
//{
//	int k = octaltodecimal(octal);
//	decimaltobinary(k);
//}
//
//int octaltodecimal(int octal)
//{
//	int place = 1, digitcount = 0, num, sum = 0;
//	num = octal;
//	while (num != 0)
//	{
//		num = num / 10;
//		digitcount = digitcount + 1;
//		place = place * 10;
//	}
//	num = octal;
//	while ( digitcount != 0 )
//	{
//		place = place / 10;
//		digitcount = digitcount - 1;
//		int result = num / place;
//		int power = pow(8, digitcount);
//		sum = sum + (result * power);
//		num = num % place;
//	}
//	return sum;
//}
//
//void octaltohexadecimal(int octal)
//{
//	int k = octaltodecimal(octal);
//	decimaltohexadecimal(k);
//}
//
//void decimaltobinary(int decimal)
//{
//	char binary[101];
//	int digitcount = 0, place = 1, num = decimal;
//	while (num > 0)
//	{
//		digitcount++;
//		num = num / 2;
//	}
//	for (int i = digitcount - 1; i >= 0; i--)
//	{
//		binary[i] = (decimal % 2) + '0';
//		decimal = decimal / 2;
//	}
//	cout << "equivalent binary number is: ";
//	for (int i = 0; i < digitcount; i++)
//	{
//		cout << binary[i];
//	}
//	cout << endl;
//}
//
//int decimaltooctal(int decimal)
//{
//	int num = decimal, place = 1, octal = 0;
//	while (num > 0)
//	{
//		int remainder = num % 8;
//		octal = octal + (remainder * place);
//		place = place * 10;
//		num = num / 8;
//	}
//	return octal;
//}
//
//void decimaltohexadecimal(int decimal)
//{
//	int num, digitcount = 0;
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
//			hex[i] = 'a' + (remainder - 10);
//		}
//		else
//		{
//			hex[i] = remainder + '0';
//		}
//		num = num / 16;
//	}
//	cout << "equivalent hexadecimal number is: ";
//	for (int i = 0; i < digitcount; i++)
//	{
//		cout << hex[i];
//	}
//	cout << endl;	
//}
//
//void hexadecimaltobinary(const char* hex)
//{
//	int k = hexadecimaltodecimal(hex);
//	decimaltobinary(k);
//}
//
//int hexadecimaltooctal(const char* hex)
//{
//	int k = hexadecimaltodecimal(hex);
//	int n = decimaltooctal(k);
//	return n;
//}
//
//int hexadecimaltodecimal(const char* hex)
//{
//	int digitcount = 0, num, sum = 0, power;
//	digitcount = strlen(hex);
//	//cout << digitcount << endl;
//	int exp = digitcount - 1;
//	for (int i = 0; i < digitcount; i++)
//	{
//		if (hex[i] >= '0' && hex[i] <= '9')
//		{
//		    num = hex[i] - '0';
//		}
//		else if ( hex[i] >= 'a' && hex[i] <= 'f' )
//		{
//			num = (hex[i] - 'a') + 10;
//		}
//		else if (hex[i] >= 'a' && hex[i] <= 'f')
//		{
//			num = (hex[i] - 'a') + 10;
//		}
//		else
//		{
//			cout << "invalid hexadecimal number. " << endl;
//			return 1;
//		}
//		power = pow(16, exp);
//		sum = sum + (num * power);
//		exp = exp - 1;
//	}
//	return sum;
//}
