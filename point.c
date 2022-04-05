//
// Created by JAD on 05/04/2022.
//

#include "point.h"

Point* createPoint(char name, float x, float y) {
    Point* point = (Point*) malloc(sizeof(Point));
    if (point != NULL) {
        point->name = name;
        point->x = x;
        point->y = y;
    }
    return point;
}

void displayPoint(Point* point) {
    if (point != 0) {
        printf("%c(%f,%f)", point->name, point->x, point->y);
    }
}

Point* createEndPoint() {
    return createPoint(NULL, 0, 0);
};

int isEndPoint(Point* point) {
    if (point == NULL) {
        return 0;
    }
    return point->name == NULL;
}
