#include <iostream>
using namespace std;
class marks{
int intmark,extmark;
public:
    marks()
    {
        intmark=0;
        extmark=0;
    }
    marks(int im,int em)
    {
        intmark=im;
        extmark=em;
    }
    void display()
    {
        cout<<intmark<<endl<<extmark<<endl;
    }
    marks operator +(marks &obj)
    {
        marks temp;
        temp.intmark=intmark+obj.intmark;
        temp.extmark=extmark+obj.extmark;
        return temp;
    }
};
int main()
{
    marks m1(10,20),m2(30,20);
    marks m3=m1+m2;
    m3.display();
    return 0;
}
