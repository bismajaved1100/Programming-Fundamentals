//#include<iostream>
//#include<string>
//using namespace std;
//
//struct Student
//{
//	string name;
//	int rollNo;
//	double cgpa;
//};
//
////Student getStudent();
////OR
//void getStudent(Student&);
//void displayStudent(const Student&);
//
//int main()
//{
//	Student data;
//	//data = getStudent();
//	//OR
//	getStudent(data);
//	displayStudent(data);
//}
//
////Student getStudent()
////{
////	Student st;
////	cout << "Enter name of the student: " << endl;
////	getline(cin,st.name);
////	cout << "Enter Roll number of the student: " << endl;
////	cin >> st.rollNo;
////	cout << "Enter CGPA of the student: " << endl;
////	cin >> st.cgpa;
////	return st;
////}
////OR
//void getStudent(Student& st)
//{
//	cout << "Enter name of the student: " << endl;
//	getline(cin,st.name);
//	cout << "Enter Roll number of the student: " << endl;
//	cin >> st.rollNo;
//	cout << "Enter CGPA of the student: " << endl;
//	cin >> st.cgpa;
//}
//
//void displayStudent(const Student& st)
//{
//	cout << "Name of the student: " << endl;
//	cout << st.name << endl;
//	//cin.ignore();
//	cout << "Roll number of the student: " << endl;
//	cout << st.rollNo << endl;
//	cout << "CGPA of the student: " << endl;
//	cout << st.cgpa << endl;
//}