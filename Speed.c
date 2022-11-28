#include <stdio.h>
int main()
{
    for(int i=0;i<100;i++){
    float a, b;
    float c;
    printf("*******Enter Distance of vehicle (M) ,(KM) *************** : ");
    scanf("%f", &a,"Km");
    printf("how much Time it take : \n ");
    scanf("%f", &b);
    c = a / b;
    printf("Speed of vehicle %f  m/s  \n", c);
    }
}
/////Simple project////////
