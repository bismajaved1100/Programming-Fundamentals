//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, x;
//	cout << "Enter a number: ";
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		x = 0;
//		for (int j = 1; j <= n - i; j++)
//		{
//			cout << ".";
//			x++;
//		}
//		cout << i;
//		x++;
//        if (x == n)
//	    {
//		cout << endl;
//	    }
//		else
//	    {
//			while (x != n)
//			{
//			cout << ".";
//			x++;
//			}
//		cout << endl;
//		}
//	}
//}
////#include <iostream>
////using namespace std;
////
////int main() {
////    int n;
////    cout << "Enter a number: ";
////    cin >> n;
////
////    for (int i = 1; i <= n; i++) {
////        // Print leading dots
////        for (int j = 1; j <= n - i; j++)
////        {
////            cout << ".";
////        }
////        // Print the number
////        cout << i;
////        // Print trailing dots
////        for (int k = 1; k < i; k++) 
////        {
////            cout << ".";
////        }
////        // Move to the next line
////        cout << endl;
////    }
////    return 0;
////}