#include<iostream>
#include<string.h>
using namespace std;
class student
{
	public:
int rno;
char name[];
double fee;
class student(int,char[],double)
{
	void display();
};
student::student(int no,char n[],double f)
{
	rno=no;
	strcpy(namen);
	fee=f;
}
void student::display()
{
	cout<<rno<<"\t"<<name<<"\t"<<fee;
}
int main()
{
	student s(10,"sita",10000);
	s.display()
		return 0;
}
