#pragma once

#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

struct Birth {
	short d, m;
	int y;
};

struct Student {
	// ID and info of current node
	string ID;
	string LastName, FirstName;
	string Gender;
	Birth DOB;
	// next node
	Student * next;
};

struct StudentList {
	// each student is a node
	Student * head = nullptr;
};

Student *getStudent(string, string, string, string, Birth);
void ShowInfo(const string, const StudentList &);
void ImportStudents(const char * filepath, StudentList & list);
void ExportStudents(const char * filepath, const StudentList & list);
void CreateStudent(StudentList & list);
void EditStudent(StudentList & list, const string & ID);
void DeleteStudent(StudentList & list, const string & ID);
