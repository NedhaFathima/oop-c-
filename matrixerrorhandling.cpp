#include <iostream>
using namespace std;
#define N 50
int main()
{
    try{
    int i,j,a[N][N],b[N][N],c[N][N],m,n,p,q,sum,k;
    cout<<"enter row and coloumn first matrix\n";
    cin>>m>>n;
    cout<<"elements of first matrix";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter row and coloumn second matrix\n";
    cin>>p>>q;
    cout<<"elemnts of second matrix";
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"the first matrix is\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"the second matrix is\n";
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    if(n!=p)
    {
        throw "invalid matrix order";
    }
    else
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                sum=0;
                for(k=0;k<m;k++)
                {
                    sum+=a[i][k]*b[k][j];
                }
                c[i][j]=sum;
            }
                cout<<c[i][j];
            }
        }
        cout<<"multiplied matrix";
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    catch (const char* message){
        cerr << "Error: " << message << endl;
    }
    return 0;
}
