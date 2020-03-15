#include <stdio.h>
#define PI 3.14159

int main(){
    if(PI ==  3.14159 ){
        printf("Pi is set correctly");
    } else {
#define PI 3.14159
        printf("Pi has been set to the correct value");
    }
}
