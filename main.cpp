#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <limits>
#include <cstring>
using namespace std;


struct Student {
    int id;
    string name;
    float gpa;
};

struct Date { int day, month, year; };

struct BankAccount {
    char name[15];
    int accountNo;
    float balance;
    Date birthday;
};

struct StudentInfo {
    int Id;
    int Age;
    char Gender;
    float CGA;
};

struct StudentGrade {
    float Lab[5];
    float Homework[3];
    float Exam[2];
};

struct StudentInfor {
    int Id;
    int Age;
    char Gender;
    float CGA;
};

struct StudentProfile {
    int studentId;
    int studentAge;
    char studentGender;
    float academicScore;
};

struct StudInfo {
    int id;
    string name;
    float marks;
};

struct Point {
    float x;
    float y;
};

struct Line {
    Point p1;
    Point p2;
};

//distancebetweentwolines
float calculateDistance(Point a, Point b) {
    return sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
}


int main() {

    //problem1

    // ofstream("output.txt") << "Hello, File!";

    //problem2

    // ifstream file("greeting.txt");
    // if (!file) {
    //     cout << "Error'" << endl;
    //     return 1;
    // }
    // string line;
    // while (getline(file, line)) {
    //     cout << line << endl;
    // }
    // file.close();


    //problem3

    // string name; int age;
    // cout << "name and age: ";
    // cin >> name >> age;
    // ofstream("user.txt") << name << " " << age;

    //problem4

    // ifstream inputFile("data.txt");
    // if (!inputFile.is_open()) {
    //     cerr << "Error opening" << endl;
    //     return 1;
    // }
    // string line;
    // int lineNumber = 1;
    // cout << "data.txt:" << endl;
    // while (getline(inputFile, line)) {
    //     cout << "Line " << lineNumber << ": " << line << endl;
    //     lineNumber++;
    // }
    // inputFile.close();

    //problem5

    // ifstream sourceFile("source.txt");
    // if (!sourceFile.is_open()) {
    //     cerr << "Error readin" << endl;
    //     return 1;
    // }
    // ofstream targetFile("target.txt");
    // if (!targetFile.is_open()) {
    //     cerr << "Error writing" << endl;
    //     sourceFile.close();
    //     return 1;
    // }
    // string line;
    // while (getline(sourceFile, line)) {
    //     targetFile << line << "\n";
    // }
    // sourceFile.close();
    // targetFile.close();
    // cout << "copied from source.txt to target.txt" << endl;

    //problem6

    // ifstream file("essay.txt");
    // if (!file) {
    //     cout << "Error opening" << endl;
    //     return 1;
    // }
    // string word;
    // int wordCount = 0;
    // while (file >> word) {
    //     wordCount++;
    // }
    // file.close();
    // cout << "total words: " << wordCount << endl;

    //problem7

    // ifstream file("numbers.txt");
    // if (!file) {
    //     cout << "error" << endl;
    //     return 1;
    // }
    // int number, sum = 0;
    // while (file >> number) {
    //     sum += number;
    // }
    // file.close();
    // cout << "sum: " << sum << endl;

    //problem8

    // ifstream file("values.txt");
    // if (!file) {
    //     cout << "error" << endl;
    //     return 1;
    // }
    // int number;
    // int maxVal = numeric_limits<int>::min();
    // int minVal = numeric_limits<int>::max();
    // while (file >> number) {
    //     if (number > maxVal) maxVal = number;
    //     if (number < minVal) minVal = number;
    // }
    // file.close();
    // cout << "max: " << maxVal << ", min: " << minVal << endl;


    //problem9

    // Student s;
    // cout << "student id, name, gpa : " << endl;
    // cin >> s.id >> s.name >> s.gpa;
    // ofstream outFile("student.txt");
    // if (!outFile.is_open()) {
    //     cerr << "error" << endl;
    //     return 1;
    // }
    // outFile << "ID: " << s.id << "\n";
    // outFile << "Name: " << s.name << "\n";
    // outFile << "GPA: " << s.gpa << "\n";
    // outFile.close();
    // cout << "saved to student.txt" << endl;

    //problem10

    // Student s;
    // ifstream inFile("student.txt");
    // if (!inFile.is_open()) {
    //     cerr << "Error" << endl;
    //     return 1;
    // }
    // string dummy;
    // inFile >> dummy >> s.id;
    // inFile >> dummy >> s.name;
    // inFile >> dummy >> s.gpa;
    // inFile.close();
    // cout << "id: " << s.id << ", name: " << s.name << ", gpa: " << s.gpa << endl;

    //problem13

    // Date d;
    // cout << "Enter date (day month year): ";
    // cin >> d.day >> d.month >> d.year;
    // printf("Formatted date: %02d-%02d-%d\n", d.day, d.month, d.year);

    //problem14

    // StudentInfo student = {101, 19, 'M', 3.4f};
    // cout << "id: " << student.Id << ", ";
    // cout << "age: " << student.Age << ", ";
    // cout << "gender: " << student.Gender << ", ";
    // cout << fixed << setprecision(1);
    // cout << "gpa: " << student.CGA << endl;

    //problem15

    // StudentGrade grades;
    // cout << "5 labs ";
    // for (int i = 0; i < 5; i++) cin >> grades.Lab[i];
    // cout << "3 hws";
    // for (int i = 0; i < 3; i++) cin >> grades.Homework[i];
    // cout << "midterm and final: ";
    // for (int i = 0; i < 2; i++) cin >> grades.Exam[i];
    // float total = 0;
    // for (float grade : grades.Lab) total += grade;
    // for (float grade : grades.Homework) total += grade;
    // for (float grade : grades.Exam) total += grade;
    // float average = total / (5 + 3 + 2);
    // cout << fixed << setprecision(1);
    // cout << "total: " << total << ", average: " << average << endl;

    //problem16

    // const int TOTAL_STUDENTS = 3;
    // StudentProfile classList[TOTAL_STUDENTS];
    // cout << "info for " << TOTAL_STUDENTS << " students:\n";
    // for (int i = 0; i < TOTAL_STUDENTS; i++) {
    //     cout << "\nSTUDENT #" << i+1 << ":\n";
    //     cout << "id: ";
    //     cin >> classList[i].studentId;
    //     cout << "age: ";
    //     cin >> classList[i].studentAge;
    //     cout << "male or female (m/f): ";
    //     cin >> classList[i].studentGender;
    //     cout << "gpa: ";
    //     cin >> classList[i].academicScore;
    // }
    // for (int i = 0; i < TOTAL_STUDENTS; i++) {
    //     cout << classList[i].studentId << "\t";
    //     cout << classList[i].studentAge << "\t";
    //     cout << classList[i].studentGender << "\t";
    //     cout << fixed << setprecision(1) << classList[i].academicScore << endl;
    // }
    // cout << "\nAll student records are now stored!\n";

    //problem17

    // StudentInfo student1, student2;
    // student1.Id = 240;
    // student1.Age = 19;
    // student1.Gender = 'f';
    // student1.CGA = 3.6;
    // student2 = student1;
    // cout << "student:\n";
    // cout << "id: " << student1.Id << ", age: " << student1.Age
    //      << ", gender: " << student1.Gender << ", gpa: " << student1.CGA << endl;
    // cout << "\nCopied Student:\n";
    // cout << "id: " << student2.Id << ", age: " << student2.Age
    //      << ", gender: " << student2.Gender << ", gpa: " << student2.CGA << endl;
    // cout << "copy done\n";

    //problem18

    // StudInfo students[5] = {
    //     {241, "gavhar", 85.5},
    //     {242, "mohina", 78.0},
    //     {243, "ziyoda", 92.3},
    //     {234, "diora", 88.9},
    //     {0, "", 0.0}
    // };
    // students[4] = students[2];
    // cout << "student 3: " << students[2].id << ", "
    //      << students[2].name << ", " << students[2].marks << endl;
    // cout << "student 5: " << students[4].id << ", "
    //      << students[4].name << ", " << students[4].marks << endl;
    // cout << "student3 & student5 same" << endl;

    //problem19

    // BankAccount acc;
    // cout << "name: ";
    // cin.getline(acc.name, 15);
    // cout << "account number: ";
    // cin >> acc.accountNo;
    // cout << "balance: ";
    // cin >> acc.balance;
    // cout << "birth date month year: ";
    // cin >> acc.birthday.day >> acc.birthday.month >> acc.birthday.year;
    // cout << "name: " << acc.name
    //      << ", Accnum: " << acc.accountNo
    //      << ", birthday: " << acc.birthday.day << "-"
    //      << acc.birthday.month << "-" << acc.birthday.year << endl;


    //problem20


    Line line;
    cout << "x, y: ";
    cin >> line.p1.x >> line.p1.y;
    cout << "second x, y: ";
    cin >> line.p2.x >> line.p2.y;
    float distance = calculateDistance(line.p1, line.p2);
    cout << "distance = " << distance << endl;


    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}