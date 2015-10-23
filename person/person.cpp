#include <iostream>
#include <string>
using namespace std;

class person {
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:

	person(){lname = ""; fname [0] = '\0'; } ; 
	person(const string & ln, const char * fn = "Heyyou")
	{ 
	strcpy ( fname , fn );
	lname = ln ;
	}
	void Show()
	{
		cout << fname << "  " << lname << endl;
	}

	void FormalShow()
	{
		cout << lname << " " << fname << endl ;
	}

};
int main ()
{
person one; 
person two("BoooGy");
person three("WaHooooooooo", "Sam"); 

one.Show();
one.FormalShow();
two.Show();
two.FormalShow();
three.Show();
three.FormalShow();
}