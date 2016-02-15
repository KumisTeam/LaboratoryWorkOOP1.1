#include "stdafx.h"
#include "Triangle.h"

int main()
{
	Triangle T(2, 4, 7 ,8 ,1 ,4);
	Triangle X(1, 4, 32, 4 ,1 ,2);

	X = T;

	T.setFirstPoint(2, 3);

	return 0;
}