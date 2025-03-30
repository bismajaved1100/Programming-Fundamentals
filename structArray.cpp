//#include <iostream>
//#include <string>
//using namespace std;
//
//struct stdd {
//    int rollno;
//    float phy;
//    float bio;
//    float math;
//    string name;
//};
//
//
//int main()
//{
//    float i;
//    stdd s[3];
//    for (int i = 0; i < 3; i++)
//    {
//        cout << "Enter data for student " << i + 1 << endl;
//        cout << endl << "Enter Roll no = ";
//        cin >> s[i].rollno;
//        cout << "Enter Name= ";
//        cin >> s[i].name;
//        cout << "Enter Physics marks= ";
//        cin >> s[i].phy;
//        cout << "Enter Biology marks= ";
//        cin >> s[i].bio;
//        cout << "Enter Mathematics marks= ";
//        cin >> s[i].math;
//        cout << endl;
//    }
//
//    cout << "The Entered Data is: " << endl;
//    for (int i = 0; i < 3; i++)
//    {
//        cout << endl << "Data of student " << i + 1 << " is: " << endl;
//        cout << "Roll no= " << s[i].rollno << endl;
//        cout << "Name= " << s[i].name << endl;
//        cout << "Phyiscs marks= " << s[i].phy << endl;
//        cout << "Biology marks= " << s[i].bio << endl;
//        cout << "Mathematcs marks= " << s[i].math << endl;
//    }
//
//    for (int i = 0; i < 3; i++)
//    {
//        float y;
//        y = (s[i].phy + s[i].bio + s[i].math) / 3;
//        cout << "The average marks of " << s[i].name << " are: " << y << endl;
//    }
//}