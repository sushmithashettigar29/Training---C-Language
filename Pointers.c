#include<stdio.h>    

void main()
{
    int x = 1, y=3;
    void intInputFunction(int u , int v);
    void ptrInputFunction(int *pu, int *pv);
    printf("Before calling function intInput : x = %d, y = %d\n",x,y);
    intInputFunction(x,y);
    printf("After calling function intInput : x = %d, y = %d\n",x,y);

    printf("Before calling function ptrInput : x = %d, y = %d\n",x,y);
    ptrInputFunction(&x,&y);
    printf("After calling function ptrInput : x = %d, y = %d\n",x,y);
}
void intInputFunction(int x , int y){
    x=0;
    y=0;
    printf("\nWithin intInput function : x = %d, y = %d\n",x,y);
    return;
}
void ptrInputFunction(int *pu, int *pv){
    *pu=0;
    *pv=0;
    printf("\nWithin ptrInput function : x = %d, y = %d\n",*pu,*pv);
    return;
}