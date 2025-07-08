#include<stdio.h>
void square(int i){
    return i*i;
}

int main(){
    int i=5;
    printf("%d",i);
    int *s;
    s = &square ;
    printf("%d", square);

}