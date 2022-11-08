#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class StudentInfo {
private:
	string name;
	StudentInfo* nextStudentPtr;
public:
	StudentInfo(string value, StudentInfo* nextItem);
	string getName();
	StudentInfo* getNextStudent();
	void setNextStudent(StudentInfo* item);
};