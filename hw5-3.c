#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hr,money;
    double output;
    scanf("%d%d",&hr,&money);
    if (hr<=60){
        output=money*hr;
        printf("%.1f",output);
    }
    else if (hr>=61 && hr<=120){
        output=(money*60.0)+(money*(hr-60.0)*1.33);
        printf("%.1f",output);
    }
    else if (hr>=121){
        output=(money*60.0)+(money*(hr-120.0)*1.66)+(money*60.0*1.33);
        printf("%.1f",output);
    }

}

