#include <stdio.h>
#include <math.h>

int main() {
    double x;
    double y;
    double axis = 1;
    scanf("%lf",&x);
    scanf("%lf",&y);
    for(int i = 1 ; i <= y-1 ;i++){
        double reverse_slope = x/(y-1);
        for (int j = 1; j <= (int)axis ; j++) {
            printf("*");
        }
        axis = axis + reverse_slope;
        printf("\n");
    }
    for (int i = 1; i <= x ; i++) {
        printf("*");
    }
    return 0;
}
