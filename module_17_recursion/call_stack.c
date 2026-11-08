#include<stdio.h>
void third(){
    printf("third\n");
}
void second(){
    third();
}
void first(){
    second();
}
int main(){
    first();
    return 0;
}