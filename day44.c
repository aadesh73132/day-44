#include<stdio.h>
#include<math.h>
int main()
{
    float P,R,T,CI;

    printf("enter the principle\n");
    scanf("%f",&P);
    printf("enter the time\n");
    scanf("%f",&T);
    printf("enter the rate\n");
    scanf("%f",&R);

    CI=P*(pow((1+R/100),T));
    printf("CI=%f",CI);
    return 0;
}
