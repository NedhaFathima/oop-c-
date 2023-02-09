#include <iostream>
using namespace std;
static int c1=1,c2=1;

class student{
	public:
	
		int  STDID,phone, 
		Subject_IA[3], Subject_ESE[3], Subject_Attendnace[3],
		Total;
		string Email,name,eligibleStatus;
		float CGPA;
		
		
		student()
		{
			STDID=c1++;
			for(int i=0;i<3;i++)
			{
				Subject_IA[i]=0;
				Subject_ESE[i]=0;
				Subject_Attendnace[i]=0;
				Total=0;
				CGPA=0;
			}
		}
		
		void getData()
		{
			
			cout<<endl<<"Enter name :";
			cin>>name;
			cout<<"Enter phone Number :";
			cin>>phone;
			cout<<"Enter Email Address :";
			cin>>Email;
			
				
		}
		
		void putData()
		{
			cout<<endl<<"student ID :"<<STDID;
			cout<<endl<<"name :"<<name;
			cout<<endl<<"phone Number :"<<phone;
			cout<<endl<<"Email Address :"<<Email;
			for(int i=0;i<3;i++)
			{	cout<<endl<<"\nsubject "<<i+1<<"Details:";
				cout<<endl<<"	internal :"<<Subject_IA[i];
				cout<<endl<<"	end sem :"<<Subject_ESE[i];
				cout<<endl<<"	attendance :"<<Subject_Attendnace[i];
			}
			cout<<endl<<"eligible Status :"<<eligibleStatus;
			cout<<endl<<"CGPA :"<<CGPA;
		}
		friend class Subject_Teacher;
		friend class Class_Teacher;
};



class Subject_Teacher{
	public:
	
		int  EMPID,phone;
		string Email,name;
		
		Subject_Teacher()
		{
			EMPID=c2++;
		}
		
		void getData()
		{
			cout<<endl<<"Enter name :";
			cin>>name;
			cout<<"Enter phone Number :";
			cin>>phone;
			cout<<"Enter Email Address :";
			cin>>Email;
			
		}

		void enterMarks(student &t,int id)
		{
			cout<<endl<<"Enter internal mark :";
			cin>>t.Subject_IA[id];
			cout<<"Enter end sem mark :";
			cin>>t.Subject_ESE[id];
		}
		
		void enterAtt(student &t,int id)
		{
			cout<<"Enter attandence:";
			cin>>t.Subject_Attendnace[id];
		}
		
};



class Class_Teacher{
	public:
	
		int  EMPID,phone;
		string Email,name;
		
		Class_Teacher()
		{
			EMPID=c2++;
		}
		
		void getData()
		{
			cout<<endl<<"Enter name :";
			cin>>name;
			cout<<"Enter phone Number :";
			cin>>phone;
			cout<<"Enter Email Address :";
			cin>>Email;
			
		}
		void calculateTotal(student &t)
		{
			t.Total=0;
			for(int i=0;i<3;i++)
			{
				t.Total+=t.Subject_IA[i]+t.Subject_ESE[i];
			}
		}
		
				
		void calculateCGPA(student &t)
		{
			t.CGPA=0.1*t.Total/6;
		}
		
		void eligibility(student &t)
		{
			int sum=0;
			for(int i=0;i<3;i++)
			{
				sum=sum+t.Subject_Attendnace[i];
			}
			if (sum<80*3)
				t.eligibleStatus="False";
			else
				t.eligibleStatus="True";
		}					

		void showRanklist(student t[])
		{
			int i,j,n=5;
			student temp;
			//sorting - Descending ORDER
			for(i=0;i<n;i++)
			{		
				for(j=i+1;j<n;j++)
				{
					if(t[i].Total<t[j].Total)
					{
						temp =t[i];
						t[i]=t[j];
						t[j]=temp;
					}
				}
			}
	
		
			cout<<"-----------\nRANK LIST:"<<endl;
			cout<<"STDID  Total  Rank "<<endl;
			int rank=1;
			for(i=0;i<n;i++)
			{
				cout<<t[i].STDID<<"\t"<<t[i].Total<<"\t"<<rank<<endl;
				rank+=1;
			}
				cout<<endl;	
			 
		}
};
		
int main()
{
	student s[5];
	Class_Teacher ct;
	Subject_Teacher st[3];
	cout<<endl<<"-----------\nEnter Class Teacher details:";
	ct.getData();
	
	for(int i=0;i<3;i++)
	{	cout<<endl<<"Enter teacher "<<1+i<<" details:";
		st[i].getData();
	}
	
	for(int i=0;i<5;i++)
	{	
		cout<<endl<<"-----------\nEnter student "<<i+1<<"  details:";
		s[i].getData();
		for(int j=0;j<3;j++)
		{	
			cout<<endl<<"\nsubject "<<i+1<<"Details:";
			st[j].enterMarks(s[i],j);
			st[j].enterAtt(s[i],j);
			ct.calculateTotal(s[i]);
			ct.calculateCGPA(s[i]);
			ct.eligibility(s[i]);
			
 		}
 	}
 	
 	
	for(int i=0;i<5;i++)
	{	
		cout<<endl<<"-----------\nstudent "<<i+1<<"  details:";
		s[i].putData();		
	}
	
	ct.showRanklist(s);
	return 0;
 
}


