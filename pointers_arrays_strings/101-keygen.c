#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void randomPasswordGeneration()
{
	/*Function genereate random pawword*/
	/*Creating arrays that hold symbols, letters, numbers, uppercase letters*/	
	
	int i = 0;
	in random = 0;
	
	/*numbes will be different*/
	srand((unsigned int) time(NULL));
	
	/*arrays of numbers*/
	char numbers[] = "0123456789";

	/*array of letters*/
	char letters[] = "abcdefghijklmnopqrstuwxyz";

	/*array of symbols*/
	char symbols[] = "*-/+=$%^!@";

	/*array of uppercase letters*/ 
	char uppercaseLetters[] = "ABCDEFGHHIJKLMNOPQRSTUWXYZ";
	
	/*hold password*/
	char password[N];

	rand = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if ( random == 1)
		{
			password[i] = numbers[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		}	
	}

}

int main()
{
	
}
