#pragma once

#include <iostream>
#include <string>
using namespace std;

struct Birth {
	short d, m;
	int y;
};

struct StudentList {
	// each student is a node
	struct Student {
		// ID and info of current node
		string ID;
		string LastName, FirstName;
		bool isFemale;
		Birth DOB;

		// next node
		Student * next;
	};

	Student * head = nullptr;
};

void ImportStudents(const char * filepath, StudentList & list);
void ExportStudents(const char * filepath, const StudentList & list);
void CreateStudent(StudentList & list);
void EditStudent(StudentList & list, const string & ID);
void DeleteStudent(StudentList & list, const string & ID);
