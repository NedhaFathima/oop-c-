#include <iostream>
using namespace std;
class Shape {
public:
    virtual int numberOfSides() = 0;
};

class Rectangle : public Shape {
public:
    int numberOfSides() {
        return 4;
    }
};

class Triangle : public Shape {
public:
    int numberOfSides() {
        return 3;
    }
};

class Hexagon : public Shape {
public:
    int numberOfSides() {
        return 6;
    }
};

int main() 
{
	int a;
    	Rectangle R;
    	Triangle T;
    	Hexagon H;
	a=R.numberOfSides();
    cout << "Number of sides in rectangle: " << a <<endl;
    cout << "Number of sides in triangle: " << T.numberOfSides() <<endl;
    cout << "Number of sides in hexagon: " << H.numberOfSides() <<endl;
    return 0;
}
