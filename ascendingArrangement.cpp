//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void arrange(vector<int>&, int); // Pass vector by reference
//
//int main()
//{
//    int n;
//    cout << "How many elements do you want to put in your array?" << endl;
//    cin >> n;
//
//    if (n <= 0)
//    {
//        cout << "Invalid array size!" << endl;
//        return 1;
//    }
//
//    vector<int> arr(n); // Use vector for dynamic sizing
//    cout << "Enter your " << n << " elements:" << endl;
//    for (int i = 0; i < n; i++) // Use 0-based indexing
//    {
//        cin >> arr[i];
//    }
//
//    cout << "The entered elements are:" << endl;
//    for (int i = 0; i < n; i++) // Use 0-based indexing
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    // Call the arrange function to sort the array
//    arrange(arr, n);
//
//    cout << "The sorted elements are:" << endl;
//    for (int i = 0; i < n; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
//
//// Function to sort the array in ascending order
//void arrange(vector<int>& arr, int n)
//{
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - 1 ; j++) // Optimized loop
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                // Swap the elements
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}