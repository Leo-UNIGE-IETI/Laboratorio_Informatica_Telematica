/*! \File: "Rhombus.cpp"
	\Brief: "class Rhombus": implementation of the functions.
	\Author: Leonardo Motta

///	Details.
*/

#include <iostream>
#include <math.h>

#include "Rhombus.h"

/*------------------------------------------------------ Private -----------------------------------------------------------------*/
/// @brief: function that computes the side of the rhombus with given diagonals.

float Side(float dH, float dV)
{
	return sqrt(pow(dH, 2) + pow(dV, 2));
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------- Public -----------------------------------------------------------------*/

/// @brief: Default constructor.

Rhombus::Rhombus() 
{
	cout << "Rhombus - constructor - default" << endl;

	diagH = 0;
	diagV = 0;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Copy constructor.

Rhombus::Rhombus(const Rhombus& r) // 'r' è l'oggetto che deve essere copiato
{
	cout << "Rhombus - copy constructor" << endl;

	diagH = r.diagH; // diagH quindi assume stesso valore dell'oggetto che deve essere copiato
	diagV = r.diagV;

}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Constructor 
/// @param dH horizontal diagonal in pixels
/// @param dV vertical diagonal in pixels

Rhombus::Rhombus(float dH, float dV) 
{
	dH = dV = 0;
	
	cout << "Rhombus - constructor" << endl;

	if (dH <= 0)
		cout << "WARNING: Rhombus - constructor: horizontal diagonal should be > 0" << endl;
	else
		diagH = dH;

	if (dV <= 0)
		cout << "WARNING: Rhombus - constructor: vertical diagonal should be > 0" << endl;
	else
		diagV = dV;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Destructor.

Rhombus::~Rhombus() 
{
	cout << "Rhombus - destructor" << endl;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Overload of operator '='.
/// @param Reference to the object on the right side of the operator
/// @return Reference to the object on the left side of the operator

Rhombus& Rhombus::operator=(const Rhombus& r)
{
	cout << "Rhombus - operator '='" << endl;

	diagH = r.diagH; // si vuole che due oggetti della stessa classe abbiano stessi parametri
	diagV = r.diagV;

	return *this; //ritorna una reference: ritorna l'oggetto stesso; serve per la catena dell'overload dell'operatore '='
	// 'this' in c++ significa "oggetto stesso" --> sintassi standard
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Overload of operator '=='.
/// @param Reference to the object on the right side of the operator
/// @return Boolean recording to what the equivalence shows

bool Rhombus::operator==(const Rhombus& r)
{
	cout << "Rhombus - operator '=='" << endl;

	if (r.diagH == diagH && r.diagV == diagV)
	{
		return true;	//ritorna un boolean
	}
	else
	{
		return false;
	}
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set horizontal diagonal of the object.
/// @param dH horizontal diagonal in pixels

void Rhombus::SetDiagH(float dH) 
{
	if (dH < 0) {
		cout << "WARNING: Rhombus - SetDiagH: horizontal diagonal should be > 0" << endl;
		return;
	}

	diagH = dH;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set vertical diagonal of the object.
/// @param l length in pixels

void Rhombus::SetDiagV(float dV) 
{
	if (dV < 0) {
		cout << "WARNING: Rhombus - SetDiagV: vertical diagonal should be > 0" << endl;
		return;
	}

	diagV = dV;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set diagonals of the object.
/// @param dH horizontal diagonal in pixels
/// @param dV vertical diagonal in pixels

void Rhombus::SetDiagonals(float dH, float dV) 
{
	SetDiagH(dH);
	SetDiagV(dV);
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set horizontal diagonal of the object.
/// @param dH horizontal diagonal in pixels

float Rhombus::GetDiagH() 
{
	return diagH;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set vertical diagonal of the object.
/// @param dV vertical diagonal in pixels

float Rhombus::GetDiagV() 
{
	return diagV;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set diagonals of the object.
/// @param dH horizontal diagonal in pixels
/// @param dV vertical diagonal in pixels

void Rhombus::GetDiagonals(float& dH, float& dV)
{
	dH = diagH;
	dV = diagV;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set side of the object.

float Rhombus::GetSide() 
{
	return Side();
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set area of the object.
/// @param dH horizontal diagonal in pixels
/// @param dV vertical diagonal in pixels

float Rhombus::GetArea() 
{
	return ((diagH * diagV)/2);
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Set perimeter of the object.

float Rhombus::GetPerimeter() 
{
	return (4 * (Side()));
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/// @brief: Debug routine

void Rhombus::Dump()
{
	cout << "Class Rhombus" << endl;
}

/*--------------------------------------------------------------------------------------------------------------------------------*/