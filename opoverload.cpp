/*Implement a class string containing the following functions. Develop C++ program using menu
– driven approach.
- Overload + operator to carry out the concatenation of strings.
- Overload = operator to carry out string copy.
- Overload - operator to carry out sub-string removal.
- Overload <= operator to carry out the comparison of strings.
- Overload ++ operator to change string characters to upper case

- Overload -- operator to change string characters to lower case
- Function to display the length of a string.*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

class strng{
    public:
        string str;
        
        void readString()
        {
            cout<<"Enter the string: ";
            getline(cin, str);
        }

        void putString()
        {
            cout<<"The string is: "<<str;
        }

        strng operator +(strng const &obj)
        {
        	strng newstr;
			newstr.str = this->str + obj.str;
			return newstr;
        }
        
        strng operator -(strng const &obj)
        {
        	strng newstr;
        	int index;
        	
        	newstr.str=this->str;
        	index=(newstr.str).find(obj.str);
        	
        	if(index != string::npos)
        	{
        		(newstr.str).erase(index,(obj.str).length());
        	}
			
			return newstr;
        }
        
        strng operator =(strng const &obj)
        {
        	strng newstr;
        	this->str=obj.str;
        	return newstr;
        }
        
        strng operator <=(strng const &obj)
        {
        	strng newstr;
        	if(this->str == obj.str)
        	{
        		cout<<"\nThe srings are same!";
        	}
        	else
			{
				cout<<"The strings are not same!";
			}
			return newstr;
        }
        
        void operator ++()
        {
        	transform(this->str.begin(), this->str.end(), this->str.begin(), ::toupper);
        }
        
        void operator --()
        {
        	transform(this->str.begin(), this->str.end(), this->str.begin(), ::tolower);
        }
        
        void displayLength()
        {
        	cout<<"Size of string is: "<<this->str.length();
        }
		
};
int main()
{
    int ch;
    strng obj1, obj2, obj3;
    cout<<"OPERATOR OVERLOADING FOR STRING FUNCTIONS!\n\n";
	cout<<"MENU:-\n1. CONCATENATION(+)\n2. COPY(=)\n3. SUBSTRING REMOVAL(-)\n4. COMPARE(<=)\n5. CONVERT TO UPPERCASE(++)\n6. CONVERT TO LOWERCASE(--)\n7. DISPLAY LENGTH\n8. EXIT\n";
    while(1)
    {
        cout<<"\n\nEnter your choice: ";
        cin>>ch;
        cin.ignore();
        
        switch(ch)
        {
            case 1:{
                obj1.readString();
                obj2.readString();
                obj3 = (obj1 + obj2);
                obj3.putString();
                break;
            }

            case 2:{
                obj1.readString();
                obj2 = obj1;
                obj2.putString();
                break;
            }
            
            case 3:{
            	obj1.readString();
            	cout<<"For the substring removal,"<<endl;
            	obj2.readString();
            	obj3 = obj1 - obj2;
            	obj3.putString();
            	break;    
            }
            
            case 4:{
            	obj1.readString();
                obj2.readString();
                obj1 <= obj2;         
            	break;    
            }

			case 5:{
            	obj1.readString();
                ++obj1;
                obj1.putString();        
            	break;    
            }

			case 6:{
            	obj1.readString();
                --obj1;   
                obj1.putString();       
            	break;    
            }
            
            case 7:{
            	obj1.readString();
            	obj1.displayLength();     
            	break;    
            }
            
            case 8:{
                cout<<"Thank You\n"; 
                exit(0);
            }

            default:{
                cout<<"INVALID CHOICE!";
                break;
            }
        }
    }
}
