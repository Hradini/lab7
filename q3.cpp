#include <iostream>
using namespace std;

class rectangle {
	public:
		double length;
		double breadth;
		
		double getarea(){
			return length *breadth;
		}
		double getperimeter(){
			return 2*(length + breadth);
		}
};

int main(){
	rectangle r1;
	rectangle r2;
	double a1,a2,p1,p2;
	
	cout<<"enter length and breadth of first rectangle";
	cin >> r1.length >> r1.breadth;
	cout <<"enter length and breadth of second rectangle";
	cin >> r2.length >> r2.breadth;
	
	a1= r1.getarea() ;
	a2= r2.getarea() ;
	p1= r1.getperimeter();
	p2= r2.getperimeter();
	
	if(a1>a2){
		cout<< "area of r1 is bigger than r2" << endl;
	} else
	cout <<"area of r2 is bigger than r1 \n";
	
	if(p1>p2){
		cout << "perimeter of r1 is bigger than r2 \n";
	} else
	cout << "perimeter of r2 is bigger than r1 \n";
	return 0;
}
