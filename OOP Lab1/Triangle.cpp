#include "stdafx.h"
#include "Triangle.h"

Triangle::Triangle(float a1, float b1, float a2, float b2, float a3, float b3)
{
	this->x1 = a1;
	this->y1 = b1;

	this->x2 = a2;
	this->y2 = b2;

	this->x3 = a3;
	this->y3 = b3;
}

float Triangle::Distance(float a1, float b1, float a2, float b2){
	return sqrt(pow((a2 - a1), 2) + pow((b2 - b1), 2));
}

float Triangle::PTriangle()
{
	float d1 = Distance(x1, y1, x2, y2);
	float d2 = Distance(x2, y2, x3, y3);
	float d3 = Distance(x3, y3, x1, y1);

	return d1 + d2 + d3;;
}

float Triangle::STriangle() 
{
	float PartP = PTriangle()/2;
	float d1 = Distance(x1, y1, x2, y2);
	float d2 = Distance(x2, y2, x3, y3);
	float d3 = Distance(x3, y3, x1, y1);

	float temp =  sqrt(PartP * (PartP - d1)*(PartP - d2)*(PartP - d3));
	return temp;
}