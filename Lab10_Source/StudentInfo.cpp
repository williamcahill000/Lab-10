#include "StudentInfo.h"



StudentInfo::StudentInfo(string value, StudentInfo* nextItem) {
	this->name = value;
	this->nextStudentPtr = nullptr;
}
string StudentInfo::getName() {
	return name;
}
StudentInfo* StudentInfo::getNextStudent() {
	return nextStudentPtr;
}
void StudentInfo::setNextStudent(StudentInfo* item) {
	StudentInfo* newNode = new StudentInfo(item);
}