//#include<iostream>
//#include<fstream>        // fstream = fileStream
//#include<string>
//using namespace std;
//int main()
//{
//	ifstream fin;
//	fin.open("output.txt");
//	if (!fin)
//	{
//		cout << "File NOT found.";
//	}
//	else
//	{
//		int i;
//		double d;
//		char c;
//		string s;
//
//		fin >> i;
//		fin >> d;
//		fin >> c;
//		fin.ignore();      //ignores "endl" in previous line otherwise getline function in the next line will not work due to endl
//		getline(fin, s);
//
//		fin.close();
//
//		cout << i << endl;
//		cout << d << endl;
//		cout << c << endl;
//		cout << s << endl;
//	}
//	return 0;
//}