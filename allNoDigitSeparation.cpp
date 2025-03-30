///* Write a program that prompts the user to input an integer and then outputs both the individual digits of the number and the sum of the digits.*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num;
//	cout << "Enter a number: ";
//	cin >> num;
//	int x = num;
//	int digitCount = 0;
//	int p = 1;
//	int sum = 0;
//	while (x != 0)
//	{
//		x = x / 10;
//		digitCount++;
//	}
//	while (digitCount > 1)
//	{
//		p = p * 10;
//		digitCount--;
//	}
//	cout << "Individual digits of " << num << " are: " << endl;
//	while (p != 0)
//	{
//		x = num / p;
//		cout << x << endl;
//		sum = sum + x;
//		num = num % p;
//		p = p / 10;
//	}
//	cout << "Sum of the digits is: " << sum;
//	return 0;
//}