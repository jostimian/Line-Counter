/*
Author: Joseph Timothy Ian T. Ganoza
Intitial build in: 29/10/2020
Latest build in 28/10/2020
*/

#include <stdio.h>
#define MAX_FILE_NAME_LENGTH 100

int main(){
    FILE *pointer; //? creates a file pointer
    char fileName[MAX_FILE_NAME_LENGTH];
    char readChar;
    int countLines = 0;

    printf("What is the file name: ");
    scanf("%s",fileName); //? stores the user input to the file name charachter array
    
    pointer = fopen(fileName, "r"); //? open the file using read mode 
    if (pointer == NULL){
        printf("Make sure you have the file in the same dir as the executable file. Also make sure the application is update \n go to my github page and download the newest version");
        return 0;
    }
    for (readChar = getc(pointer); readChar != EOF; readChar = getc(pointer)){
        if(readChar == '\n'){ //! make sure to use '' not "" or else you will get an error
            countLines++;
        }
    }
    fclose(pointer);
    printf("This file contains %d \n", countLines+1);
    printf("Thanks for using this application");
}