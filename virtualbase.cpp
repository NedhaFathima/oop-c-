#include<iostream>
using namespace std;
class student{
public:
	int rollno;
	string name;
	void getdata()
	{
		cout<<"enter name:"<<endl;
		cin>>name;
		cout<<"enter roll no:"<<endl;
		cin>>rollno;
	}
};
class subject:virtual public student{
public:
	int m1,m2;
	void getmarks()
	{
		cout<<"enter mark for sub 1:"<<endl;
		cin>>m1;
		cout<<"enter mark for sub 2:"<<endl;
		cin>>m2;
	}
};
class language:virtual public student{
public:
	int lang1,lang2;
	void getlang()
	{
		cout<<"enter language 1 mark:"<<endl;
		cin>>lang1;
		cout<<"enter language 2 mark:"<<endl;
		cin>>lang2;
	}
};
class result:public subject,public language{
public:
	int total;
	void compute()
	{
		total=m1+m2+lang1+lang2;
	}
	void display()
	{
		cout<<"name:"<<name<<endl;
		cout<<"roll number:"<<rollno<<endl;
		cout<<"marks for subject 1:"<<m1<<endl;
		cout<<"marks for subject 2:"<<m2<<endl;
		cout<<"marks for language 1:"<<lang1<<endl;
		cout<<"marks for language 1:"<<lang2<<endl;
		cout<<"total:"<<total<<endl;
		
	}
};
int main()
{
	result r;
	r.getdata();
	r.getmarks();
	r.getlang();
	r.compute();
	r.display();
	
}

