#include "point.h"
#include "polygon.h"

int main() {
    Point* a = createPoint('A', -10, 12.3);
    displayPoint(a);
    Polygon* rectangle = createPolygon(4);
    addPointToPolygon(rectangle, createPoint('A', 0, 0));
    addPointToPolygon(rectangle, createPoint('B', 10, 0));
    addPointToPolygon(rectangle, createPoint('C', 10, 50));
    addPointToPolygon(rectangle, createPoint('D', 0, 50));
    printf("\n%d\n", getNbPointsFromPolygon(rectangle));
    displayPolygon(rectangle);
    displayPoint(getPointFromPolygonByIndex(rectangle, 2));
    return 0;
}
