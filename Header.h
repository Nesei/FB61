#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
	string vnz;
	string name;
	int age;
	void SetVNZ();
	void OutData();
	void OutAge();
	void ChangeName();
	void ChangeAge();
public:
	Student();
	Student(string, int, string);
	void Interface();
};

class Journal : private Student
{
public:
	void Interface();
	Journal();
	~Journal();
private:
	int nm;
	int *mark = new int[nm];
	void WatchMarks();
};
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
	string vnz;
	string name;
	int age;
	void SetVNZ();
	void OutData();
	void OutAge();
	void ChangeName();
	void ChangeAge();
public:
	Student();
	Student(string, int, string);
	void Interface();
};

class Journal : private Student
{
public:
	void Interface();
	Journal();
	~Journal();
private:
	int nm;
	int *mark = new int[nm];
	void WatchMarks();
};

class halyavschiki:private Student
{
	halyavschiki(string,int,string):Student(string,int,string)
	{}
	void Interface();
	void halyava(string halyava)
	{
		cout<<"Nu i xto halyavschiki?"<<endl;
		cin>>halyava;
		
	}
	
};
