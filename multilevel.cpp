#include<iostream>
#include <string>
using namespace std;
class student{
public:
	int rno;
	string sname;
	void getstudentdata()
	{
		cout<<"Enter roll number:";
		cin>>rno;
		cout<<"Enter name:";
		cin>>sname;
	}
};
class test:public student{
public:
	int marksub1,marksub2,marksub3;
	void getmarks()
	{
		cout<<"enter mark 1:";
		cin>>marksub1;
		cout<<"enter mark 2:";
		cin>>marksub2;
		cout<<"enter mark 3:";
		cin>>marksub3;
	}
};
class result:public test{
public:
	int total;
	void putresult()
	{
		total=marksub1+marksub2+marksub3;
		cout <<"total mark is:"<<total<<endl;
	}
};
int main ()  
{  
    result obj;
    obj.getstudentdata();
    obj.getmarks();
    obj.putresult();
}
	
		
multi.cpp
Displaying multi.cpp.
Lab Cycle - Set 3
Binu A.
•
Dec 15, 2022
100 points

Set 3.pdf
PDF
Class comments
