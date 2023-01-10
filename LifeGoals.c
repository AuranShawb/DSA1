#include <stdio.h>

int main() {
    // Read in the values for X, Y, and Z
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);

    // Calculate the minimum distance to the treasure chest
    int distance;
    if ((X < Y && X>0) || (Y<X && Y<0 && X>0)||(X < Y && X <0 && Y>0)||(Y<X && Y<0 && X>0) ||(Y<X && X<0)) {
        distance = abs(X);
    } else if(Y>X && X<0 && Y<0) {
        if(Z>0){
            distance = 2*Z - X;
        }
        else if(Z>Y){
            distance = X;
        }
        else if(Y>Z){
            distance = -1;
        }
    } else if(X>Y && Y>0){
        if(Z<0){
            distance = 2*(-Z) + X;
        }
        else if(Z>0 && Y>Z){
            distance = X;
        }
        else if(Z>Y){
           distance = -1; 
        }
    }

    // Print the result
    printf("%d\n", distance);
    return 0;
}
