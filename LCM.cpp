///* Write a program, which takes input of two integers. It then displays the least common multiple of the two entered integers.*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int originalNum1, originalNum2, num1, num2, remainder, r1, r2;
//	cout << "Enter two integers: ";
//	cin >> originalNum1 >> originalNum2;
//	num1 = originalNum1;
//	num2 = originalNum2;
//	while (num2 % num1 > 0)
//	{
//		remainder = num2 % num1;
//		num2 = num1;
//		num1 = remainder;
//	}
//	r1 = originalNum1 / num1;
//	r2 = originalNum2 / num1;
//	int lcm = num1 * r1 * r2;
//	cout << "LCM of " << originalNum1 << " and " << originalNum2 << " is: " << lcm;
//	return 0;
//}