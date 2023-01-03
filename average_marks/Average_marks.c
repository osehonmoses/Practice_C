#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i;
        double marks[5];
        printf("Please enter five marks of a student : \n");

        for(i = 0; i < 5; i++)
        {
                scanf("%lf", &marks[i]);
        }

        double sum = 0;

        for(i = 0; i < 5; i++)
        {
        sum = marks[i] + sum;
        }
        double avg_marks = sum/5;
        {
             printf("The average mark of the student is %.1lf", avg_marks);
        }

        return 0;
}

