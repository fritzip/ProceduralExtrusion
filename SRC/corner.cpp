#include <iostream>

#include "corner.h"

Corner::Corner() : co(), prev(NULL), next(NULL)
{}

Corner::Corner(const double &x, const double &y, const double &z) : co(x, y, z), prev(NULL), next(NULL)
{}

Corner::Corner(const double &x, const double &y, const double &z, Edge *e1, Edge *e2 ) : co(x, y, z), prev(e1), next(e2)
{
	e1->next = this;
	e2->prev = this;
}

Corner::~Corner()
{}