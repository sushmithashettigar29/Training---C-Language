#include <stdio.h>
void main(void){
    int i, xLen, yWid, zHgt;
    double volCubes[8][4];
    double volumeOfCuboid (int x, int y, int z);
    printf("\nEnter dimensions of object.  Enter 0 0 0 to exit\n");
    scanf("%2d %2d %2d", &xLen, &yWid, &zHgt);
    i=0;
    while(i<8 && (xLen != 0 || yWid != 0 || zHgt != 0)) 
    {
        volCubes[i][0] = xLen; volCubes[i][1] = yWid;
        volCubes[i][2] = zHgt; volCubes[i][3] = volumeOfCuboid(xLen, yWid, zHgt);
        printf("\nEnter dimensions of cuboid.  Enter 0 0 0 to exit\n");
        scanf("%2d %2d %2d", &xLen, &yWid, &zHgt);
        i++;
    }
    for (i=0;i<8;i++) 
    printf("\n Cuboid: %02i -Length=%02.0lf, Width=%03.02lf, Height=%02.1lf and volume=%08.0lf", i, volCubes[i][0], volCubes[i][1], volCubes[i][2], volCubes[i][3]);
    return;
}

double volumeOfCuboid (int x, int y, int z)
{ 
    return x *y * z; 
}