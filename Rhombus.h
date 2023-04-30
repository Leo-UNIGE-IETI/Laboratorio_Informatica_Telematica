/*! \File: "Rhombus.h"
	\Brief: Declaration of the class "Rhombus".
	\Author: Leonardo Motta

	Details.
*/


#ifndef RHOMBUS_H
#define RHOMBUS_H

using namespace std;

/// @class Rhombus
/// @brief: To manage an object with the shape of a rhombus.

class Rhombus
{
private:
	float diagH;	/*dimensions of the diagonals of the rhombus*/
	float diagV;

	float Side();	/*function to compute the side of the rhobus*/

public:

	Rhombus();								/*constructors*/
	Rhombus(float dH, float dV);
	Rhombus(const Rhombus& r);

	~Rhombus();								/*destructors*/

	Rhombus& operator=(const Rhombus& r);	/*overloading of operator '='*/
	bool operator==(const Rhombus& r);		/*overloading of operator '=='*/


	void SetDiagonals(float dH, float dV);			/*functions to draw a rhombus*/
	void SetDiagH(float dH);
	void SetDiagV(float dV);

	void GetDiagonals(float& dH, float& dV);
	float GetDiagH();
	float GetDiagV();
	float GetSide();

	float GetArea();
	float GetPerimeter();

/// Object printout for diagnostic
	void Dump();
};

#endif