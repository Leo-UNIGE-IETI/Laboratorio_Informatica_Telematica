/*! \File: "Rectangle.h"
	\Brief: Declaration of the class "Rectangle".
	\Author: Leonardo Motta

	Details.
*/


#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

/// @class Rectangle
/// @Brief: To manage an object with the shape of a rectangle.

class Rectangle
{
private:
	int length;			/*dimensions of the sides of the rhombus*/
	int width;

public:

	Rectangle();					/*constructors*/
	Rectangle(int w, int l);
	Rectangle(const Rectangle& r);	// 'const' = non è modificabile la cella di memoria che sta puntando; è una salvaguardia:
									// perché non deve essere modificato
	
	~Rectangle();				    /*destructors*/

	Rectangle& operator=(const Rectangle& r);		/*overloading of operator '='*/
	bool operator==(const Rectangle& r);			/*overloading of operator '=='*/

	void SetDim(int w, int l);						/*functions to draw a rectangle*/
	void SetLength(int l);
	void SetWidth(int w);

	void GetDim(int& w, int& l);
	int GetLength();
	int GetWidth();

	int GetArea();
	int GetPerimeter();

/// Object printout for diagnostic
	void Dump();
};

#endif
