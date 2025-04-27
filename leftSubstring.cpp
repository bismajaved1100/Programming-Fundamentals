//#include <iostream>
//#include <cstring>
//using namespace std;
//
//char* left(const char* target, const int count) 
//{
//   if (count < 0 || count > strlen(target)) 
//   {
//       return nullptr;
//   }
//   else
//   {
//       char* substring = new char[count + 1];
//       //memcpy(substring, target, count);        // strncpy OR strlcpy can also be used instead of memcpy but this compiler supports memcpy
//       //OR
//	   for (int i = 0; i < count; i++)
//	   {
//		   substring[i] = target[i];
//	   }
//	   substring[count] = '\0';             // Null-terminate the substring and is used to avoid buffer overflow, also if we dont use this then it will not be null terminated and will give garbage value of the string in the output
//       return substring;
//   }
//}
//
//void Destructor(char*& p) 
//{
//   delete[] p;
//   p = nullptr;
//}
//
//int main() 
//{
//   int arraySize = 30;
//   char* inputString = new char[arraySize + 1];
//   cout << "Enter a string: ";
//   cin.getline(inputString, arraySize + 1);
//   int count;
//   cout << "Enter count: ";
//   cin >> count;
//   char* leftSubstring = left(inputString, count);
//   if (leftSubstring != nullptr) 
//   {
//       cout << "Left substring: " << leftSubstring << endl;
//       Destructor(leftSubstring);
//   }
//   else 
//   {
//       cout << "Error: Count is out of range." << endl;
//   }
//
//   Destructor(inputString);
//
//   return 0;
//}