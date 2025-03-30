//#include<iostream>
//#include<string>
//using namespace std;
//
//struct Student
//{
//	int rollNo;
//	string name;
//	double cgpa;
//};
//
//void inputStudents(Student[], int);
//void displayStudents(const Student[], int);
//Student getStudent();
//void displayStudent(const Student&);
//
//int main()
//{
//	const int size = 2;
//	Student stds[size];
//	inputStudents(stds, size);
//	displayStudents(stds, size);
//}
//
//void inputStudents(Student stds[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter data for student " << i + 1 << ":" << endl;
//		stds[i] = getStudent();
//	}
//}
//
//Student getStudent()
//{
//	Student st;
//	cout << "Enter Roll number of the student: " << endl;
//	cin >> st.rollNo;
//	cin.ignore();
//	cout << "Enter name of the student: " << endl;
//	getline(cin,st.name);
//	cout << "Enter CGPA of the student: " << endl;
//	cin >> st.cgpa;
//	return st;
//}
//
//void displayStudents(const Student stds[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Data of student " << i + 1 << ":" << endl;
//		displayStudent(stds[i]);
//	}
//}
//
//void displayStudent(const Student& st)
//{
//	cout << "Roll number of the student: " << endl;
//	cout << st.rollNo << endl;
//	//cin.ignore();
//	cout << "Name of the student: " << endl;
//	cout << st.name << endl;
//	cout << "CGPA of the student: " << endl;
//	cout << st.cgpa << endl;
//}