//
// Created by JAD on 05/04/2022.
//

#include "polygon.h"

Polygon *createPolygon(int nbPoints) {
    Polygon *polygon = (Polygon *) malloc(sizeof(Point*) * (nbPoints + 1));
    if (polygon != NULL) {
        for (int i = 0; i < nbPoints; i++) {
            polygon[i] = NULL;
        }
        polygon[nbPoints] = createEndPoint();
    }
    return polygon;
}

int addPointToPolygon(Polygon *polygon, Point *point) {
    for (int i = 0; ! isEndPoint(polygon[i]); i++) {
        if (polygon[i] == NULL) {
            polygon[i] = point;
            return 1;
        }
    }
    return 0;
}

Point *getPointFromPolygonByIndex(Polygon *polygon, int index) {
    if (index >= getNbPointsFromPolygon(polygon)) {
        return NULL;
    }
    return polygon[index];
}

void displayPolygon(Polygon *polygon) {
    for (int i = 0; ! isEndPoint(polygon[i]); i++) {
        displayPoint(polygon[i]);
        printf(" - ");
    }
}

int getNbPointsFromPolygon(Polygon *polygon) {
    int nbPoints;
    for (nbPoints = 0; ! isEndPoint(polygon[nbPoints]); nbPoints++);
    return nbPoints;
}