#pragma once
#include <math.h>
class Triangle
{
	public:	
		//Triangle();
		Triangle(float a1, float b1, float a2, float b2, float a3, float b3);
		float STriangle();
		float PTriangle();
		
	private:
		float x1;
		float y1;

		float x2;
		float y2;

		float x3;
		float y3;

		float Distance(float a1, float b1, float a2, float b2);
};