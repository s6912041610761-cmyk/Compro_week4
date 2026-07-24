#include <stdio.h> //header

int z = 30;

void show() {
int x = 10; 
printf ("x = %d\n", x);
}

int main(){
int y = 20;
printf("y = %d\n", y);
printf("z = %d\n", z);

show();
return 0;
}