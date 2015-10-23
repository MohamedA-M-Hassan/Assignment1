#include <iostream>
using  namespace std;

class Move 
{ private : 
double x , y;
public :
	Move(double a = 0, double b = 0)

	{ x= a;
	  y= b;
	}
	void showmove()
	{
		cout << x << " " << y << endl ;
	} 
	Move add(const Move & m) const {
		this -> x+m.x ;
		this -> y+m.y ; 
		Move e (this->x +m.x,this->y+m.y);

		return e;
	}
	void reset(double a = 0, double b = 0)
	{
		x=a;
		y=b;
	}
};

int main ()
{
	Move one;
	one.showmove(); // Wahoooooooooooooooooooooooo 

}