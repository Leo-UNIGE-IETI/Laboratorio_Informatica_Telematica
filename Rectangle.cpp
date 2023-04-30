/*! \File: "Rectangle.cpp"
	\Brief: "class Rectangle": implementation of the functions.
	\Author: Leonardo Motta

///	Details.
*/

#include <iostream>

#include "Rectangle.h"

/*------------------------------------------------------- Public -----------------------------------------------------------------*/

/// @brief: Default constructor.

Rectangle::Rectangle() 
{
	cout << "Rectangle - constructor - default" << endl;

	width = 0;
	length = 0;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Copy constructor.

Rectangle::Rectangle(const Rectangle& r) // 'r' è l'oggetto che deve essere copiato
{
	cout << "Rectangle - copy constructor" << endl;

	width = r.width; // width quindi assume stesso valore dell'oggetto che deve essere copiato
	length = r.length;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Constructor.
/// @param w width in pixels
/// @param h length in pixels

Rectangle::Rectangle(int w, int l) 
{
	width = 0;
	length = 0;

	cout << "Rectangle - constructor" << endl;

	if (w <= 0)
		cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else
		width = w;

	if (l <= 0)
		cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else
		length = l;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Destructor.

Rectangle::~Rectangle() 
{
	cout << "Rectangle - destructor" << endl;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Overload of operator '='.
/// @param Reference to the object on the right side of the operator.
/// @return Reference to the object on the left side of the operator.

Rectangle& Rectangle::operator=(const Rectangle& r)
{
	cout << "Rectangle - operator '='" << endl;

	width = r.width; // si vuole che due oggetti della stessa classe abbiano stessi parametri
	length = r.length;

	return *this; //ritorna una reference: ritorna l'oggetto stesso; serve per la catena dell'overload dell'operatore '='
	// 'this' in c++ significa "oggetto stesso" --> sintassi standard
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Overload of operator '=='.
/// @param Reference to the object on the right side of the operator.
/// @return Boolean recording to what the equivalence shows.

bool Rectangle::operator==(const Rectangle& r)
{
	cout << "Rectangle - operator '=='" << endl;

	if (r.width == width && r.length == length)
	{
		return true;	//ritorna un boolean
	}
	else
	{
		return false;
	}
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set width of the object.
/// @param w width in pixels
 
void Rectangle::SetWidth(int w) 
{
	if (w < 0) {
		cout << "WARNING: Rectangle - SetWidth: width should be > 0" << endl;
		return;
	}

	width = w;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set length of the object.
/// @param l length in pixels

void Rectangle::SetLength(int l) 
{
	if (l < 0) {
		cout << "WARNING: Rectangle - SetLength: length should be > 0" << endl;
		return;
	}

	length = l;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set width and length of the object.
/// @param w width in pixels
/// @param l length in pixels

void Rectangle::SetDim(int w, int l) 
{
	SetWidth(w);
	SetLength(l);
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set width of the object.
/// @param w width in pixels

int Rectangle::GetWidth() 
{
	return width;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set length of the object.
/// @param l length in pixels

int Rectangle::GetLength() 
{
	return length;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set width and length of the object.
/// @param w width in pixels
/// @param l length in pixels

void Rectangle::GetDim(int& w, int&l) 
{
	w = width;
	l = length;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set area of the object.
/// @param w width in pixels
/// @param l length in pixels

int Rectangle::GetArea() 
{
	return width * length;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set perimeter of the object
/// @param w width in pixels
/// @param l length in pixels

int Rectangle::GetPerimeter() 
{
	return 2 * (width + length);
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Debug routine

void Rectangle::Dump()
{
	cout << "Class Rectangle" << endl;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/