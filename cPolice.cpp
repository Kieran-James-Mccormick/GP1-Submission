/*
=================
- cPlayer.cpp
- Header file for class definition - IMPLEMENTATION
=================
*/
#include "cPolice.h"

/*
=================================================================
Defualt Constructor
=================================================================
*/
cPolice::cPolice()
{
	this->setMapPosition(0, 0);
}

void cPolice::update(int row, int column)
{
	this->setMapPosition(column, row);
}

void cPolice::movePolice(int row, int column)
{
	// New police position
	this->setMapPosition(this->policePos.R + sgn(row - this->policePos.R), this->policePos.C + sgn(column - this->policePos.C));

}

void cPolice::setMapPosition(int row, int column)
{
	this->policePos = { column, row };
}

MapRC cPolice::getMapPosition()
{
	return this->policePos;
}

void cPolice::setPoliceRotation(float angle)
{
	this->policeRotation = angle;
	this->setSpriteRotAngle(angle);
}

float cPolice::getPoliceRotation()
{
	return this->policeRotation;
}

/*
=================================================================
Defualt Destructor
=================================================================
*/

cPolice::~cPolice()
{
}
