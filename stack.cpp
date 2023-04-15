#include<iostream>
#include<stdlib.h>
using namespace std;
class stack{
	private:
		int s[10],top=-1;
	public:
		stack()
		{
		    for(int i=0;i<10;i++)
		    {
		        s[top]=0;
		    }
		    cout<<"default constructor called"<<endl;
		}
		stack(int a[])
		{
		    for(int i=0;i<10;i++)
		    {
		        s[i]=a[i];
		    }
		    cout<<"parametrised constructor called";
		}
		void push(int number)
		{
			if(top==9)
				cout<<"stack overflow!\n";
			else
				top++;
				s[top]=number;
		}
		void pop()
		{
			if (top==-1)
			cout<<"Stack underflow\n";
			else
			{
			cout<<s[top]<<" popped successfully.\n";
			top--;
			}
		}
		void isfull()
		{
		    if(top==9)
		    cout<<"stack full";
		}
		int isempty()
		{
		    if(top==-1)
		        return 1;
		    else
		        return 0;
		}
		void display()
		{
		    if(top>=0)
		    {
		        cout<<"Stack elements are:";
		        for(int i=top; i>=0; i--)
		        {
		            cout<<s[i]<<" ";
		        }
		    }
		    else
		        cout<<"stack empty";
		}
		~stack()
		{
			cout<<"Stack Destructed successfully\n";
		}
		
};

int main()
{
	stack s1;
	char ch;
	int st[]={1,2,3,4,5,6,6,7,8,8};
	stack s2(st);
	while(1)
	{
		cout<<"\nmenu \n"
		<<"1 push\n"
		<<"2 pop\n"
		<<"3 isempty\n"
		<<"4 isfull\n"
		<<"5 display\n"
		<<"6 end\n\n";
		cin>>ch;
		switch(ch)
		{
			case '1':
				int n;
				cout<<"Enter a number: ";
				cin>>n;
				s1.push(n);
				break;
			case '2':
				s1.pop();
				break;
			case '3':
				if(s1.isempty()){
				    cout<<"stack empty"<<endl;
				}
				break;
			case '4':
			    break;
				
				break;
			case '5':
				s1.display();
				break;
			case '6':
				cout<<"Exiting...\n\n";
				exit(0);
				break;
			default:
				cout<<"Invalid option!\n";
				break;
		}
	}
	return 0;
}