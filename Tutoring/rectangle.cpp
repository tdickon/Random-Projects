#include <iostream>
using namespace std;

class rectangle
{
//Missing private member values.
private:
	double width, length, area, perimeter;
	//You need to declare variables for area and perimeter;

public:
	//You declared a constructor, but you didn't define it. 
	rectangle(double, double);

	//So you declared a mutator right here, but you have a constructor above. You don't need a set function when you have a constructor.
	//void set_Data(double, double);
	void show_Data();

	//It's not good style to fully define in your function declerations.
	//Also you need to realize that you're just returning a double, but where are you returning these values? 
	/*
	double perimeter() { return 2 * width + 2 * length; }
	double area() { return width*length; }
	*/

	double set_perimeter(const double, const double);
	double set_area(const double, const double);
};


//Constructor right here
rectangle::rectangle(double len, double w)
{
	length = len;
	width = w;
	perimeter = set_perimeter(length, width);
	area = set_area(length, width);
}

double rectangle::set_perimeter(const double len, const double w)
{
	return ((len * 2) + (w * 2));
}

double rectangle::set_area(const double len, const double w)
{
	return (len * w);
}

//GET RID OF THIS
/*void Rectangle::set_Data(double l, double w) {
	width = w;
	length = l;
}
*/


void rectangle::show_Data() {
	//Area and perimeter are not declared values. 
	cout << "The length of the rectangle's size is: " << length << " by " << width << endl;
	cout << "The area is: " << area << endl;
	cout << "The perimeter is: " << perimeter << endl;

}
int main() {
	rectangle A(5.5, 5.5);
	A.show_Data();
	return 0;
}
