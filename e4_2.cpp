#include <iostream>
using namespace std;


// ********************************************************************
//  Declaration of class Point
// ********************************************************************

// class Point represents a two-dimensional point
class Point
{
public:
  // default class constructor (with no arguments):
  Point(); 

  // class constructor that sets the coordinates x, y to the values xval,
  // yval:
  Point(int xval, int yval);

  // member function for moving a point by dx, dy:
  void Move(int dx, int dy);

  // member functions for getting values of x, y:
  int Get_X() const;
  int Get_Y() const;

  // member functions for setting x, y to xval, yval respectively  
  void Set_X(int xval);
  void Set_Y(int yval);

//Lab 7 exercise 4.1. Add declaration of member function Print here:
	void print();

// private data members x, y represent coordinates of the point:
private:
  int X;
  int Y;
};  


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{
  X = 0;
  Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
  X = xval;
  Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
  X += dx;
  Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
  return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
  return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
  X = xval;
} 

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
  Y = yval;
} 
    

//Lab 7 exercise 4.1. Add definition of member function print:
void Point::print() 
{
	cout<< "(" << X << "," << Y << ")";
}


// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 
class Rectangle {
	private:
		Point A,B,C,D;
	public:
		Rectangle();
		Rectangle(Point A, Point C);
			
		
};

// ********************************************************************
//  Methods for class Rectangle
// ********************************************************************
Rectangle::Rectangle (){
			A.Set_X(0);
			A.Set_Y(0);
			B.Set_X(0);
			B.Set_Y(1);
			C.Set_X(1);
			C.Set_Y(1); 
			D.Set_X(1);
			D.Set_Y(0);
		}
Rectangle::Rectangle(Point A, Point C){
	Point B;
	B.Set_X(A.Get_X());
	B.Set_Y(C.Get_Y());
	Point D;
	D.Set_X(C.Get_X());
	D.Set_Y(A.Get_Y());
	A.print();
	B.print();
	C.print();
	D.print();    
}
//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 



// ********************************************************************
//  main() function for testing classes Point and Rectangle
// ********************************************************************



// Testing classes Point and Rectangle
int main()
{
// Declaring a point using default class constructor (x = y = 0):
  Point p1;
  cout<< "The x value for p1 is " << p1.Get_X() << endl;
  cout<< "The y value for p1 is " << p1.Get_Y() << endl;

// Declaring a point with coordinates X = 2, Y = 3:
  Point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

// Moving point p2 by (1, -1):
  p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

//Lab 7 exercise 4.1. Test member function print on points p1, p2:

//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:
//Declaring and assigning bottomleft point
	int temp1,temp2;
	Point bl;
	cout<<"enter the coordinates of bottom left point";
	cin >> temp1 >> temp2;
	bl.Set_X(temp1); bl.Set_Y(temp2) ;
	
//declaring and assigning topright point
	Point tr;
	cout <<"enter the coordinates of top right point";
	cin >> temp1 >> temp2;
	tr.Set_X(temp1); tr.Set_Y(temp2) ;
//Making the rectangle
	Rectangle Rectangle(bl, tr);

	
  return 0;
} 
