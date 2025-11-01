#include<stdio.h>
#include<math.h>
int main(){
    double radius = 0.0;
    double area = 0.0;
    double surfacearea = 0.0;
    double volume = 0.0;
    const double pi = 3.14;

    printf("Enter the Radius : ");
    scanf("%lf", &radius);

    area = pi * pow(radius , 2);
    surfacearea = 4 * pi * pow(radius , 2);
    volume = (4.0/3.0) * pi * pow(radius , 3);

    printf("Area : %lf\n" , area);
    printf("surfacearea : %lf\n", surfacearea);
    printf("volume : %lf\n" , volume);


    return 0;
}