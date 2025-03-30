//#include<iostream>
//using namespace std;
////void displayValue(int*);
//void displayValue(const int*);
//int main()
//{
//	int num = 54;                 // Whwn an integer is passed to a function, it is passed by value. (Copy is formed)
//	int* p1 = &num;
//	cout << "In main, the address of pointer is: " << &p1 << endl;
//	//displayValue(p1);              //A pointer is also passed to a function by value
//	displayValue(&num);
//	cout << "Back in main, num is: " << * p1 << " " << num << endl;
//}
////void displayValue(int *pVal)
//void displayValue(const int* pVal)
//{
//	cout << "In displayValue, the address of pointer is: " << &pVal << endl;
//	cout << "Value is: " << pVal << endl;
//	//*pVal = 10;
//	pVal = nullptr;
//}