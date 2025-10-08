	#include <stdio.h>

	// Define constants for the number of subjects and grades
	#define SUBJECTS 2
	#define GRADES 5

	int main() {
		float average;
		int i;
		int j;

		// Initialize the 2D array in a more concise way
		int grades[SUBJECTS][GRADES] = {
			{80, 70, 65, 89, 90},
			{85, 80, 80, 82, 87}
		};

		/* TODO: complete the for loop with appropriate terminating conditions */
		// Use the defined constants in the loop conditions
		for (i = 0; i < SUBJECTS; i++) {
			average = 0;
			for (j = 0; j < GRADES; j++) {
				average += grades[i][j];
			}

			/* TODO: compute the average marks for subject i */
			printf("The average marks obtained in subject %d is: %.2f\n", i, average / GRADES);
		}

		// You can add a return statement here to stop the program's execution.
		// The code below this line will not be executed.

		


	// now time to learn the if conditioning

	int a = 1;
	int b = 2;
	if (a < b){
		printf("a is less than b\n");
	}
	else{
		printf("a is greater than b\n");
	}
    printf("a = %d, b = %d\n", a, b);
	a++;
	b--;
	if (a == b){
		printf("a is equal to b\n");
	}
	else{
		printf("a is not equal to b\n");
	}

	printf("a = %d, b = %d\n", a, b);


	// lets build a a system where i take input and based on the given age i will decide whether he can vote or not
	int age;
	printf("enter your age\n");
	fflush(stdout); // Force the "enter your age" message to be printed
	scanf("%d", &age);
	if (age >= 18){
		printf("you can vote\n");
	}
	else{
		printf("you can't vote\n");
	}
	return 0;
}