#include<Stdio.h>
#include<math.h>
int main(){
    double principle = 0.0;
    double rate = 0.0;
    int years = 0;
    int timescompounded = 0;
    double total = 0.0;

    printf("compound intrest calcultor \n");
    scanf("%lf" , &principle);

    printf("Enter the intrest rate % (r): ");
    scanf("%lf" , &rate);
    rate = rate/100;

    printf("enter the number of years (t) :");
    scanf("%d" , &years);

    printf("enter # of times compounded per year (n):");
    scanf("%d" , &timescompounded);

    return 0;
}