#include <iostream>
using namespace std;

class scalar{
    public:
        int data[3],i;
        scalar()
        {
            for(i=0;i<3;i++)
                data[i]=0;
        }
        scalar(int a)
        {
            data[0]=a;
            data[1]=0;
            data[2]=0;
        }
        scalar(int a,int b)
        {
            data[0]=a;
            data[1]=b;
            data[2]=0;
        }
        scalar(int a,int b,int c)
        {
            data[0]=a;
            data[1]=b;
            data[2]=c;
        }
        scalar multiply(int x,scalar a)
        {
            scalar b;
            for(i=0;i<3;i++)
                b.data[i]=a.data[i]*x;
            return b;
        }
        void display()
        {
            cout <<data[0]<<"  "<<data[1]<<"  "<<data[2]<<endl;
        }
        ~scalar()
        {
            cout<<"Vector has been DESTROYED"<<endl;
        }
};
main()
{
    scalar s2;
    scalar s1(5,3,8);
    s2=s1.multiply(6,s1);
    s1.display();
    cout<<"vector scalar multiplied by 6: ";
    s2.display();
}



