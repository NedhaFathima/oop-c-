
#include <iostream>
using namespace std;
template <class T>
void bubblesort(T a[],int n)
{
    T temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    int a[]={3,5,7,9,12,2};
    bubblesort(a,6);
    cout<<"elements are";
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    float b[]={2.5,6.7,3.2,9.5};
    bubblesort(b,4);
    for(int i=0;i<4;i++)
    {
        cout<<b[i]<<" ";
    }
    
}