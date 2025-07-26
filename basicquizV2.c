#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*This is my Version 2 for the basic quiz which I have developed as a fun project. This one utilizes arrays and loops. */

char ans[20];
int point = 0;

int main(){

    char *ques[5] = {
        "Q1) What was the first satellite launched by India?\n",
        "Q2) What is the name of the largest natural satellite in our solar system?\n",
        "Q3) Which India's satellite mission sent to study the Sun?\n", 
        "Q4) What is the name of the first Indian satellite to be launched into space?\n",
        "Q5) Which Indian satellite was launched to study the Moon?\n"
    };

    char  *options[5][4] = {
        {"A) Aryabhata", "B) Rohini", "C) Bhaskara -1", "D) INSAT-1"},
        {"A) Moon", "B) Ganymede", "C) Titan", "D) Europa"},
        {"A) Mangalyaan", "B) Chandrayaan-1", "C) Aditya-L1", "D) Astrosat"},
        {"A) Aryabhata", "B) Rohini", "C) Bhaskara -1", "D) INSAT-1"},
        {"A) Chandrayaan-1", "B) Mangalyaan", "C) Astrosat", "D) Aditya-L1"}
    };

    char *answers[5][2] = {{"A", "a"},{"B","b"}, {"C","c"}, {"A","a"},{"C","c"}};

    printf("Welcome to a basic Space Quiz!\n");
    printf("You will be asked 5 questions. Let's see how many you can answer correctly!\n");
    printf("Please enter the correct letter of your answer.\n\n");  
    for(int i=0; i<5; i++){
        printf("%s",ques[i]);
        for(int j=0; j<4; j++){
            printf("%s\n", options[i][j]);
        };
        printf("Enter your answer: ");
        scanf("%s", ans);
        if (strcmp(ans, answers[i][0]) == 0 || strcmp(ans, answers[i][1]) ==0){
                point++;
        printf("\033[0;32mCorrect\033[0m!\n\n");
        } else { 
        printf("\033[0;31mIncorrect\033[0m! The correct answer is %s.\n\n", answers[i][0]);
        }

    }
    if(point<1){
        printf("You scored \033[0;31m%d\033[0m/5 points. Better luck next time!\n", point);
    } else if(point<3){
        printf("You scored \033[0;33m%d\033[0m/5 points. Not bad, but you can do better!\n", point);
    } else {
        printf("You scored \033[0;32m%d\033[0m/5 points. Future's looking bright!\n", point);
    }
}

        