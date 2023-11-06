#include <stdio.h>
#include <string.h>

void main() {
    
    char kelma1[100]; // Declare a character array to store a string
    char kelma2[100];

    // Prompt the user for input
    printf("Asidi 3tini string (kelma1) : ");
    scanf("%s", kelma1);

    // Display the input string
    printf("Asidi klemtek hiya lkbira, kelma1 diyalk hiya : %s\n", kelma1);
    printf("gha bach t3refni mtebe3 m3ak li gulti hiya li kayna\n");
    // Copy the string into another variable and display the result
    strcpy(kelma2, kelma1);
    printf("kelma2 mab9atch khawiya wellat tahia : %s \n", kelma2);

   
}


