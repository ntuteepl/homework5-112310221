#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m;
    float hA,mA,A;
    scanf("%d%d",&h,&m);
    hA=h*30.0+(30.0/60.0*m);
    mA=6.0*m;
    if(hA>=mA){
        A=hA-mA;
    }
    else if(hA<=mA){
        A=mA-hA;
    }
    if(A>180){
        A=360-A;
    }
    printf("%.3f",A);
    return 0;
}
