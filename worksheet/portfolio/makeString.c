
/*
Name: Xavier Cunningham
Student ID: 202028992
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    char buffer[64] = "";

    for (int i = 1; i < argc; i++) { //starts at 1 due to 0 being program name
        strcat(buffer, argv[i]); 
        if (i < argc - 1) { //add hyphon unless last argument
            strcat(buffer, "-"); 
            }       

    }
    // define appropriate data to hold your answer

    // process the command-line data using appropriate string functions

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}