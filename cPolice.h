#pragma once
#include "cSprite.h"
#include <random>

class cPolice : 	public cSprite
{
	/*declares private variables*/
private:
	MapRC policePos;
	float policeRotation;

	/*implements the sgn function*/
	template <class T>
	inline int sgn(T v) {
		return (v > T(0)) - (v < T(0));
	}

	/*declares public functions*/
public:
	cPolice();
	virtual ~cPolice();
	void update(int row, int column);
	void movePolice(int row, int column);
	void setMapPosition(int row, int column);
	MapRC getMapPosition();
	void setPoliceRotation(float angle);
	float getPoliceRotation();
};

