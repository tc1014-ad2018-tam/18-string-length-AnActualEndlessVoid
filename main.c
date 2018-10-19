/*
 * This program was made to get the length of a string, without the actual function
 *
 * Mario Emilio Aguilar Chung
 * A01411210@itesm.mx
 * 10/17/2018
 *
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char arr [1000];
    int i;
    int count = 0;
    //Get the characters from the user
    printf ("Give me a series of characters:\n");
    printf ("\n");
    fgets (arr,sizeof(arr),stdin);

    //Each time a character is read, it will be added to the count
   /* for (i = 0; i < strlen(arr); i++)
    {
        count++;
    }*/
   while (arr[count]!= '\0') {
       count++;
   }
    //Print the results
    printf ("\nThere are %i characters in the string\n", count);
    return 0;
}