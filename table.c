#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

int main(int argc, char *argv[]){



	int num1 = atoi(argv[2]);
	int num2 = atoi(argv[1]);


	if ((argc != 4) || 
	   ((num1 <= 0) || (num2 <= 0)) || 
	   ((*argv[3] != 'm') && (*argv[3] != 'M') && (*argv[3] != 'A') && (*argv[3] != 'a'))){
		printf("usage: ./table >0 >0 [A|M]\n");
		return EXIT_SUCCESS;	
		
	}
	char operation = *argv[3];

	int i,j;

	int divisor = 0;

	int maxDivisor = (log((operation == 'M' || operation == 'm')?num1 * num2: num1 + num2)/log(10));

	int spaceCount = 0;

	int countHor = 0;

	int totalLength = 0;

	//int add = 0;

	printf("\n");

	int count = 0;
	for (count = 0; count < log(num1)/log(10) + 1; count ++){
		if (count == (floor(log(num1)/log(10))+1)){
			((operation == 'M' || operation == 'm')? printf("x |"): printf("+ |"));
		} else {
			printf(" ");
		}
		
	}

	for(countHor = 0; countHor <= num2; countHor++){



		if (countHor != 0){
			divisor = log(countHor)/log(10);
		} else {
			divisor = 0;
		}
		
		for (spaceCount = 0; spaceCount <= maxDivisor - divisor; spaceCount ++){
			printf(" ");

			totalLength++;
			
		}
		if (countHor == 0){
				totalLength++;
			} else{
				totalLength += floor(log(countHor)/log(10)) ;
		}
		totalLength++;
		printf("%d",countHor);


	}
	printf("\n");
	for(countHor = 0; countHor <= totalLength + log(num1)/log(10) + 3; countHor++){

		printf("-");
	}
	printf("\n");


	for (i = 0; i <= num1; i ++){
		for (j = 0; j <= num2; j++){



			if (j == 0){
				int newMd = (log(num1)/log(10));
				if (i != 0){
					divisor = log(i)/log(10);
				} else {
					divisor = 0;
				}
				if (j == 1000) divisor ++;
				for (spaceCount = 0; spaceCount < newMd - divisor; spaceCount ++){
					printf(" ");
				}
				printf(" %d |",i );
			}


			if ((operation == 'M' || operation == 'm')?i * j : i + j != 0){
				divisor = log((operation == 'M' || operation == 'm')? i * j : i + j)/log(10);
			} else {
				divisor = 0;
			}
			if (i * j== 1000) divisor ++;

			for (spaceCount = 0; spaceCount < maxDivisor - divisor; spaceCount ++){
				printf(" ");
			}
			if (j == 0){
				printf(" %d",(operation == 'M' || operation == 'm')? i * j: i + j);
			} else {
				printf("%d",(operation == 'M' || operation == 'm')? i * j: i + j);

			}
			


			printf(" ");
		}
		printf("\n");
	}
//take floor then add 1
	printf("\n");
	return EXIT_SUCCESS;
}