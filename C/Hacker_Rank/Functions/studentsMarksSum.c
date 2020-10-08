#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
    0, 2, 4 => boys
    1, 3, 5 => girls
*/

int marks_summation(int* marks, int number_of_students, char gender) {
    int i, step = 2, sum = 0;
    if(gender == 'b')
        i = 0;
    else
        i = 1;
    for(i; i < number_of_students; i+=step){
        sum += marks[i];
    }
    return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}