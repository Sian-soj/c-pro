	#include <stdio.h>

	int main() {
		/* TODO: declare the 2D array grades here */
        int grades[2][5];
		float average;
		int i;
		int j;

		grades[0][0] = 80;
		grades[0][1] = 70;
		grades[0][2] = 65;
		grades[0][3] = 89;
		grades[0][4] = 90;

		grades[1][0] = 85;
		grades[1][1] = 80;
		grades[1][2] = 80;
		grades[1][3] = 82;
		grades[1][4] = 87;

		/* TODO: complete the for loop with appropriate terminating conditions */
		for (i = 0; i < 2 ; i++) {
			average = 0;
			for (j = 0; j < 5 ; j++) {
				average += grades[i][j];
			}

			/* TODO: compute the average marks for subject i */
			printf("The average marks obtained in subject %d is: %.2f\n", i, average/5);
		}

		


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
	return 0;
	}
