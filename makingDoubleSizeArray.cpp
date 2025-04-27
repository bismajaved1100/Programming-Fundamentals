//#include<iostream>
//using namespace std;
//
//int* resizeArray(int[], const int);
//
//int main()
//{
//	int n;
//	cout << "Enter size of array: " << endl;
//	cin >> n;
//	int* arr = new int[n];
//	cout << "Enter elements of array: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	int* newArr = new int[n * 2];
//	for (int i = 0; i < n; i++)
//	{
//		newArr[i] = arr[i];
//	}
//	newArr = resizeArray(newArr, n * 2);
//	cout << "Resized Array: " << endl;
//	for (int i = 0; i < n * 2; i++)
//	{
//		cout << newArr[i] << " ";
//	}
//
//	// Deallocate memory
//	delete[] arr;
//	arr = nullptr;
//	delete[] newArr;
//	newArr = nullptr;
//
//	return 0;
//}
//
//int* resizeArray(int inArray[], const int size)
//{
//	int j = 0;
//	for (int i = size / 2; i < size; i++)
//	{
//		inArray[i] = inArray[j] * 2;
//		j++;
//	}
//	return inArray;
//}