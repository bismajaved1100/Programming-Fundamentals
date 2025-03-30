////A perfect number is a positive integer that is equal to the sum of its proper positive divisors, 
//// that is, the sum of its positive divisors excluding the number itself. For Example 6 is perfect 
//// number.
////Write a pseudoode, which input a number from user and tells whether it's a perfect number or not
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num, sum;
//	cout << "Enter the number to be checked: ";
//	cin >> num;
//	sum = 1;
//	for (int i = 2; i < num; i++)                                  /* First five perfect numbers are 6 , 28 , 496 , 8128 , 33550336 */
//	{
//		if (num % i == 0)
//		{
//			sum = sum + i;
//		}
//	}
//	if (sum == num)
//	{
//		cout << num << " is a perfect number. ";
//	}
//	else if (sum != num)
//	{
//		cout << num << " is not a perfect number. ";
//	}
//	return 0;
//}