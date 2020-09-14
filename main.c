#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NMAX 100

typedef struct grades {
    char name[30] = {'\0'};
    int age;
    int marks[5];
    char date[30] = {'\0'};
    } Info;


int main()
{
    Info *students = \NULL;
    students = (Info *) malloc (NMAX * sizeof(Info));


}

Info indata(){
    infile = fopen("data.txt","r");
    if (infile == NULL){
        printf("I cannot open the file\n");
        return -1;
    }
    while (fscanf(infile, "%c %d %d %c", &name, &age, &marks, &date) != EOF){

    }
}
