////calculate pay of employees
//#include<iostream>
//using namespace std;
//int main()
//{
//	double workHours, payRate, totalPay;
//	cout << "Enter Employee Total Hours Worked: ";
//	cin >> workHours;
//	cout << "Enter Employee Hourly Pay Rate: ";
//	cin >> payRate;
//	if (workHours <= 40)
//	{
//		totalPay = workHours * payRate;
//	}
//	else if (workHours > 40)
//	{
//		double x = 40 * payRate;
//		workHours = workHours - 40;
//		payRate = payRate + (payRate * 50 / 100);
//		double y = workHours * payRate;
//		totalPay = x + y;
//	}
//	cout << "Total pay of the Employee is: " << totalPay << endl;
//	return 0;
//}