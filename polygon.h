//
// Created by JAD on 05/04/2022.
//
#include "point.h"

#ifndef UNTITLED32_POLYGON_H
#define UNTITLED32_POLYGON_H

typedef Point** Polygon;

Polygon* createPolygon(int nbPoints);
int addPointToPolygon(Polygon* polygon, Point* point);
Point* getPointFromPolygonByIndex(Polygon* polygon, int index);
void displayPolygon(Polygon* polygon);
int getNbPointsFromPolygon(Polygon* polygon);

#endif //UNTITLED32_POLYGON_H
