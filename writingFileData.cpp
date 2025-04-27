//#include<iostream>
//#include<fstream>        // fstream = fileStream
//#include<string>
//using namespace std;
//int main()
//{
//	int num = 80;
//	double val = 2.54;
//	char ch = 'B';
//	string str = "File Handling in C++";
//	// Write / output all this data om file
//	// Variable -> File on Disk
//	// ofstream for output
//	// ifstream for input
//	ofstream fout;    //file Handle
//	fout.open("output.txt");     //write your file name inside inverted comas
//	if (!fout)    //Check if file was not opened successfully
//	{
//		cout << "ERROR: File could not be created.";
//	}
//	else
//	{
//		fout << num << endl;
//		fout << val << endl;
//		fout << ch << endl;
//		fout << str << endl;
//		fout.close();
//	}
//	return 0;
//}