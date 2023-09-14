#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1,y1,x2,y2;
    float distance = 0;

    printf("Enter the coordinates of M:\n");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates of N:\n");
    scanf("%f %f", &x2, &y2);

    distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("the distance is %f:", distance);
    return 0;
}
