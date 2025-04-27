//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//int findMin(int [], const int);
//int findMax(int[], const int);
//int computeAverage(int[], const int);
//int computeMedian(int[], const int);
//
//int main()
//{
//	int count;
//	cout << "Enter the number of students: ";
//	cin >> count;
//	int* arrStudent = new int[count];
//	cout << "Enter the marks of students: " << endl;
//	for (int i = 0; i < count; i++)
//	{
//		cin >> arrStudent[i];
//	}
//
//	cout << "Minimum marks are: " << findMin(arrStudent, count) << endl;
//	cout << "Maximum marks are: " << findMax(arrStudent, count) << endl;
//	cout << "Average marks are: " << computeAverage(arrStudent, count) << endl;
//	cout << "Median marks are: " << computeMedian(arrStudent, count) << endl;
//
//	return 0;
//}
//
//int findMin(int inArray[], const int size)
//{
//	int min = inArray[0];
//	for (int i = 1; i < size; i++)
//	{
//		if (inArray[i] < min)
//		{
//			min = inArray[i];
//		}
//	}
//	return min;
//}
//
//int findMax(int inArray[], const int size)
//{
//	int max = inArray[0];
//	for (int i = 1; i < size; i++)
//	{
//		if (inArray[i] > max)
//		{
//			max = inArray[i];
//		}
//	}
//	return max;
//}
//
//int computeAverage(int inArray[], const int size)
//{
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		sum = sum + inArray[i];
//	}
//	return sum / size;
//}
//
//int computeMedian(int inArray[], const int size)	//when a set of values is sorted in ascending or descending order, the median is the middle value. If the set contains an even number of values, the median is the average of the two middle values.
//{
//	int median;
//	// Sort the array
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//			if (inArray[i] > inArray[j])
//			{
//				int temp = inArray[i];
//				inArray[i] = inArray[j];
//				inArray[j] = temp;
//			}
//		}
//	}
//	if (size % 2 != 0)
//	{
//		median = inArray[size / 2];
//	}
//	else
//	{
//		median = (inArray[size / 2] + inArray[(size / 2) - 1]) / 2;
//	}
//	return median;
//}