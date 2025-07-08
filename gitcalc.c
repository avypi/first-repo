#include<stdio.h>
#include<string.h>

float div(float x, float y){
  return y=!0 ? x/y : 0;
}
float mul(float x, float y){
  return x * y;
}
float add(float x, float y){
  return x + y;
}
float sub(float x, float y){
  return x - y;
}

int main(){
  float a, b, result;
  char sym[20];
  printf("Hi! This is my first C project here. Feel free to test it! Cheers to more progress :)\n");
  printf("-----INPUT------\n");
  printf("Enter no. 1: ");
  scanf("%f",&a);
  printf("Enter no. 2: ");
  scanf("%f",&b);
  getchar();
  printf("Enter the operation: \n");
  printf("Type 'div' for Division \n");
  printf("Type 'mul' for Multiplication \n");
  printf("Type 'add' for Addition \n");
  printf("Type 'sub' for Subtraction \n");
  fgets(sym, sizeof(sym),stdin);
  sym[strcspn(sym,"\n")] = 0;
  if (strcmp(sym, "add")==0){
    result = add(a,b);
  } else if (strcmp(sym,"sub")==0){
    result = sub(a,b);
  } else if (strcmp(sym, "mul")==0){
    result = mul(a,b);
  } else if (strcmp(sym, "div")==0) {
    if(b==0){
      printf("Error. Can't divide by 0.\n");
      return 1;
    } else {
      result = div(a,b);
    }
  } else {
        printf("Invalid operation.\n");
        return 1;
    }
  printf("------OUTPUT-----\n");
  printf("Result: %.1f\n", result);
  return 0;

}