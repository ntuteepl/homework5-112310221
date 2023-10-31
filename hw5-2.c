#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min;
    float num;
    scanf("%d",&min);
    if(min<=800){
            num=min*0.9;
            printf("%.1f",num);
    }
    else if(min>=800 && min<=1500){
            num=min*0.9*0.9;
            printf("%.1f",num);
    }
    else if(min>=1500){
            num=min*0.9*0.79;
            printf("%.1f",num);
    }

}

