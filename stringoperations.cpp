#include <iostream>
#include<stdlib.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
class strng{
    public:
        string str;
        void readstring()
        {
            cout<<"enter string:";
            getline(cin,str);
        }
        void putstring()
        {
            cout<<"the string is:"<<str;
        }
        strng operator +(strng const &obj)
        {
            strng newstr;
            newstr.str=this->str+obj.str;
            return newstr;
        }
        strng operator -(strng const &obj)
        {
            strng newstr;
            int index;
            newstr.str=this->str;
            index=(newstr.str).find(obj.str);
            if(index!=string::npos)
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
        strng operator ==(strng const &obj)
        {
            strng newstr;
            if(this->str==obj.str)
            
                cout<<"same string";
            
            else
            {
                cout<<"not same";
            }
            return newstr;
        }
         strng operator <=(strng const &obj)
        {
            strng newstr;
            if(this->str<=obj.str)
            
                cout<<"string1 small";
            
            else
            {
                cout<<"string2 small";
            }
            return newstr;
        }
        void operator ++()
        {
            transform(this->str.begin(),this->str.end(),this->str.begin(),::toupper);
        }
        void operator --()
        {
            transform(this->str.begin(),this->str.end(),this->str.begin(),::tolower);
        }
        void displaylength()
        {
            cout<<"lenght is"<<this->str.length();
        }
};
int main()
{
    int ch;
    strng obj1,obj2,obj3;
    cout<<"MENU \n 1.CONCAT\n 2.REMOVAL\n 3.COPY\n 4.SAME\n 5.COMPARE\n 6.TOUPPER \n 7.TOLOWER \n 8.LENGTH \n 9.EXIT"<<endl;
    while(1)
    {
        cout<<"enter choice"<<endl;
        cin>>ch;
        cin.ignore();
        switch(ch)
        {
            case 1:
            {
                obj1.readstring();
                obj2.readstring();
                obj3=(obj1+obj2);
                obj3.putstring();
                break;
            }
            case 2:
            {
                obj1.readstring();
                obj2.readstring();
                obj3=obj1-obj2;
                obj3.putstring();
                break;
            }
            case 3:
            {
                obj1.readstring();
                obj2=obj1;
                obj2.putstring();
                break;
            }
            case 4:
            {
                obj1.readstring();
                obj2.readstring();
                obj1==obj2;
                break;
            }
             case 5:
            {
                obj1.readstring();
                obj2.readstring();
                obj1<=obj2;
                break;
            }
            case 6:
            {
                obj1.readstring();
                ++obj1;
                obj1.putstring();
                break;
                
            }
            case 7:
            {
                obj1.readstring();
                --obj1;
                obj1.putstring();
                break;
            }
            case 8:
            {
                obj1.readstring();
                obj1.displaylength();
                break;
            }
            case 9:
            {
                cout<<"thank you";
                exit(0);
            }
            default:
            {
                cout<<"INVALID CHOICE";
                break;
            }
        }
    }
}
