#include<stdio.h>
#include<string.h>

float add(float a, float b){
    return a+b;
}

float sub(float a, float b){
    return a-b;
}

int main(){
    float x,y,result;
    char str[20];
    printf("Enter a no.: ");
    scanf("%f",&x);
    printf("Enter a no.: ");
    scanf("%f", &y);
    getchar();
    printf("ADD/SUB: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = 0;
    if (strcmp(str,"add")==0) {
        result = add(x, y);
    } else if (strcmp(str, "sub") == 0) {
        result = sub(x, y);
    } else {
        printf("Invalid operation.\n");
        return 1;
    }

    printf("Result %.1f\n", result);
    return 0;
}