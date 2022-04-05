//
// Created by JAD on 05/04/2022.
//

#ifndef UNTITLED32_POINT_H
#define UNTITLED32_POINT_H

#include <stdlib.h>
#include <stdio.h>

typedef struct {
    char name;
    float x;
    float y;
} Point;

Point* createPoint(char name, float x, float y);
void displayPoint(Point* point);
Point* createEndPoint();
int isEndPoint(Point* point);

#endif //UNTITLED32_POINT_H
