#include <iostream>
using namespace std;
class matrix{
	public:
		int x[2][2],i,j;
		matrix(){
			for (i=0;i<2;i++){
				for(j=0;j<2;j++){
					x[i][j]=1;
				}
			}
		}
		matrix(int a,int b,int c,int d){
			x[0][0]=a;
			x[0][1]=b;
			x[1][0]=c;
			x[1][1]=d;
		}
		matrix addmat(matrix u,matrix v){
			matrix w;
			w.x[0][0]=u.x[0][0]+v.x[0][0];
			w.x[0][1]=u.x[0][1]+v.x[0][1];
			w.x[1][0]=u.x[1][0]+v.x[1][0];
			w.x[1][1]=u.x[1][1]+v.x[1][1];
			return w;
		}
		void display(){
			cout<<x[0][0]<<"\t"<<x[0][1]<<"\n"<<x[1][0]<<"\t"<<x[1][1]<<endl;
		}
		~matrix(){
			cout<<"Destructor"<<endl;
		}
};
int main(){
	matrix mat1(1,1,1,1),mat2(1,2,3,4),mat3;
	mat3=mat3.addmat(mat1,mat2);
	mat3.display();
}

