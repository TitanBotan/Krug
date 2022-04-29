#include "krug.h"

int main()
{
	setlocale(LC_ALL, "rus");
	krug a;
	a.setRadius(3);
	cout << a.getRadius() << endl;
	cout << a.getPloshad() << endl;
	cout << a.getLength() << endl;
}