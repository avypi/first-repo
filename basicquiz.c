#include<stdio.h>
#include<string.h>

/*Version 1 code for developing a basic quiz application.*/

char answer[20];
int point = 0;

void Q1(){
    printf("Q1) What was the first satellite launched by India?\n");
    printf("A) Aryabhata\n");
    printf("B) Rohini\n");
    printf("C) Bhaskara -1 \n");
    printf("D) INSAT-1\n");
    printf("Enter your answer: ");
    scanf("%s", answer);
    
    if (strcmp(answer, "A") == 0 || strcmp(answer, "a") == 0) {
        point++;
        printf("\033[0;32mCorrect!\033[0m\n");
    } else {
        printf("\033[0;31mIncorrect!\033[0m The correct answer is A) Aryabhata.\n");
    }
    

}

void Q2(){
    printf("Q2) What is the name of the largest natural sattelite in our solar system?\n");
    printf("A) Moon\n");
    printf("B) Ganymede\n");
    printf("C) Titan\n");
    printf("D) Europa\n");
    printf("Enter your answer: ");
    scanf("%s", answer);
    if (strcmp(answer, "B")== 0 || strcmp(answer, "b") == 0) {
        point++;
        printf("\033[0;32mCorrect!\033[0m\n");
    } else {
        printf("\033[0;31mIncorrect!\033[0m The correct answer is B) Ganymede.\n");
    }
    

}

void Q3(){
    printf("Q3) Which India's satellite mission sent to study the Sun?\n");
    printf("A) Mangalyaan\n");
    printf("B) Chandrayaan-1\n");   
    printf("C) Aditya-L1\n");
    printf("D) Astrosat\n");
    printf("Enter your answer: ");
    scanf("%s", answer);
    if (strcmp(answer, "C")==0 || strcmp(answer, "c")==0){
        point++;
        printf("\033[0;32mCorrect!\033[0m\n");
    } else{
        printf("\033[0;31mIncorrect!\033[0m The correct answer is C) Aditya L-1.\n");
    }
}

void Q4(){
    printf("Q4) What is the name of the mission that made India the first country from Asia to reach Mars?\n");
    printf("A) Mangalyaan\n");
    printf("B) Chandrayaan-2\n");
    printf("C) Astrosat\n");
    printf("D) Aditya-L1\n");
    printf("Enter your answer: ");
    scanf("%s", answer);
    if (strcmp(answer, "A") == 0 || strcmp(answer, "a") == 0) {
        point++;
        printf("\033[0;32mCorrect!\033[0m\n");
    } else {
        printf("\033[0;31mIncorrect!\033[0m The correct answer is A) Mangalyaan.\n");
    }
}

void Q5(){
    printf("Q5) On what planet is a day longer than a year?\n");
    printf("A) Jupiter\n");
    printf("B) Mercury\n");
    printf("C) Venus\n");
    printf("D) Neptune\n");
    printf("Enter your answer: ");
    scanf("%s", answer);
    if (strcmp(answer, "C") == 0 || strcmp(answer, "c") == 0) {
        point++;
        printf("\033[0;32mCorrect!\033[0m\n");
    } else {
        printf("\033[0;31mIncorrect!\033[0m The correct answer is C) Venus.\n");
    }

}

int main(){
    printf("Welcome to a basic Space Quiz!\n");
    printf("You will be asked 5 questions. Let's see how many you can answer correctly!\n");
    printf("Please enter the correct letter of your answer.\n\n");
    Q1();
    printf("\n");
    Q2();
    printf("\n");
    Q3();
    printf("\n");
    Q4();
    printf("\n");
    Q5();
    printf("\n\n");
    printf("Quiz completed!\n");
    printf("You got \033[0;32m%d\033[0m/5 questions \033[0;32mcorrect!\033[0m Like a space-ranger!\n", point);
    return 0;

}