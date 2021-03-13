    /*
     *  You just computed final scores for all of the students in 
     *  your classroom and would like to tell each student their 
     *  ranking when compared to the other students in your class. 
     *  For example, if Remi's score is 14, Yan's score is 2 and 
     *  Maria's score is 20 then Remi's ranking is 2 since he has 
     *  the second highest score, Yan's ranking is 3 since he has 
     *  the lowest score and Maria's ranking is 1 since she has 
     *  the highest score amongst the three students.

     * You'll be given the following inputs: first the number of 
     * students, then all of the students' final scores, then 
     * finally, all of the students' names. Be sure to look at the example below.
     * 
     * Your output should be one line per student, with each line 
     * displaying the student's name followed by "rank is" followed 
     * by the student's rank.
     *
     * The order in which names are displayed in the output should 
     * be the same as the order given in the input. The ranking starts 
     * at 1 (meaning this student has the highest score), 2 for the 
     * second highest grade etc...
     *
     * Note that no name has more than 50 characters and there are 
     * no more than 30 students.
     *
     * Example:
     * Input
     * 3
     * 14
     * 2
     * 20
     * Remi
     * Yan
     * Maria
     *
     *
     * Output
     * Remi rank is 2
     * Yan rank is 3
     * Maria rank is 1  
     *
    */

#include <stdio.h>

int main()
{
    int numberOfStudents = 0;
    int studentScores[31];
    int sortedScores[31];
    int swap = 0;
    char name[51];

    // get number of students
    scanf("%d", &numberOfStudents);

    // get student scores and store in array
    for (int i=0; i<numberOfStudents; i++)
    {
	scanf("%d", &studentScores[i]);
        // make copy of array so we can sort
        sortedScores[i] = studentScores[i];
    } 
    
    // sort array of scores in descending order
    for (int i=0; i<numberOfStudents; i++)
    {
        for (int j=i+1; j<numberOfStudents; j++)
	{
            if (sortedScores[i] < sortedScores[j])
	    {
                swap = sortedScores[i];
		sortedScores[i] = sortedScores[j];
		sortedScores[j] = swap;
	    }
	}
    }

    // get name of students and print their rank
    for (int i=0; i<numberOfStudents; i++)
    {
        scanf("%s", name);
	for (int j=0; j<numberOfStudents; j++)
	{
            if (sortedScores[j] == studentScores[i])
	    {
                printf("%s rank is %d\n", name, j+1);
	    }
	}
    }

    return 0;
}
