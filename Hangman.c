#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void startingDescription();
int categoryChoosing();
bool hangman(int category);
void guessingWord(char wordArr[], int size);
void drawingHangman(int wrongGuesses);

int main(void)
{
	system("COLOR F4");
	int category;
	bool end = false;
	while (1)
	{
		startingDescription();
		category = categoryChoosing();
		if (category == 0)
		{
			printf("You chose to end the game\n");
			end = true;
			break;
		}
		hangman(category);
	}
	return 0;	
}
void clearScreen()
{
	system("cls");
}
void startingDescription()
{
	printf("\tHANGMAN\n");
	printf("Choose a category:\n");
	printf("1: Animals\n");
	printf("2: Sports\n");	
	printf("3: Occupations\n");
	printf("4: Science\n");
	printf("5: Countries\n");
	printf("0: Exit\n");
}
int categoryChoosing()
{
	int optionNo;
	printf("Enter the option number: ");
	scanf("%d", &optionNo);
	return optionNo;
} 
bool hangman(int category)
{
	char fileName[100];
	switch(category)
	{
		case 1:
			strcpy(fileName, "animals.txt");
			break;
		case 2:
			strcpy(fileName, "sports.txt");
			break;
		case 3:
			strcpy(fileName, "occupations.txt");
			break;
		case 4:
			strcpy(fileName, "science.txt");
			break;
		case 5:
			strcpy(fileName, "countries.txt");
			break;
		default:
			printf("Invalid option number entered\n");
			return false;
	}
	int lineNo, currentLine = 0;
	FILE *fptr;
	char word[20];
	fptr = fopen(fileName, "r");
	srand(time(NULL));
	lineNo = rand() % 10;
	while(fgets(word, sizeof(word), fptr))
	{
		if(lineNo == currentLine)
		{
			word[strcspn(word, "\n")] = '\0';
			break;
		}
		currentLine++;
	}
	fclose(fptr);
	int sizeOfWord = strlen(word);
	guessingWord(word, sizeOfWord);
}
void guessingWord(char wordArr[], int size)
{
	
	char guessWord[size];
	for (int i = 0; i < size; i++)
	{
		guessWord[i] = '_';
		printf(" %c ", '_');	
	}
	
	guessWord[size] = '\0';
	printf("\n");
	
	char letter;
	int correctLetter = 0;
	int incorrectLetter = 0;
	bool found = false;
	while ((correctLetter < size) && (incorrectLetter < 6))
	{
		printf("Guess a letter: ");
		while (getchar() != '\n');
		scanf("%c", &letter);
		letter = tolower(letter);
		
		for (int j = 0; j < size; j++)
		{
			if((wordArr[j] == letter)&&(guessWord[j] == '_'))
			{
				guessWord[j] = letter;
				correctLetter++;
				found = true;
			}
		}
		
		if (found == false)
		{
			clearScreen();
			incorrectLetter++;	
			printf("Incorrect guess! You have %d guesses left\n", 6 - incorrectLetter);
			
		}
		else if (found == true){
			clearScreen();
		}
		for (int k = 0; k < size; k++)
		{
			printf(" %c ", guessWord[k]);
		}
		printf("\n");
		found = false;	
		drawingHangman(incorrectLetter);	
	}
	
	
	if (incorrectLetter >= 6)
	{
		printf("You have run out of attempts. The word was \'%s\'\n", wordArr);
	}
	else
	{
		printf("Congratulations! You have guessed the word\n");
	}
		
}
void drawingHangman(int wrongGuesses)
{
	
	switch (wrongGuesses)
	{
		case 0:
			printf("\t__________\n");
			printf("\t|         |\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			break;
		case 1:
			printf("\t__________\n");
			printf("\t|         |\n");
			printf("\t|        ***\n");
			printf("\t|       *   *\n");
			printf("\t|       *   *\n");
			printf("\t|        ***\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");									
			break;
		case 2:
			printf("\t__________\n");
			printf("\t|         |\n");
			printf("\t|        ***\n");
			printf("\t|       *   *\n");
			printf("\t|       *   *\n");
			printf("\t|        ***\n");
			printf("\t|         |\n");
			printf("\t|         |\n");
			printf("\t|         |\n");
			printf("\t|         |\n");
			printf("\t|         |\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			break;
		case 3:
			printf("\t__________\n");
			printf("\t|         |\n");
			printf("\t|        ***\n");
			printf("\t|       *   *\n");
			printf("\t|       *   *\n");
			printf("\t|        ***\n");
			printf("\t|         |\n");
			printf("\t|       \\ |\n");
			printf("\t|        \\|\n");
			printf("\t|         |\n");
			printf("\t|         |\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			break;

		case 4:
			printf("\t__________\n");
			printf("\t|         |\n");
			printf("\t|        ***\n"); 
			printf("\t|       *   *\n");
			printf("\t|       *   *\n");
			printf("\t|        ***\n");
			printf("\t|         |\n");
			printf("\t|       \\ | /\n");
			printf("\t|        \\|/\n");
			printf("\t|         |\n");
			printf("\t|         |\n");
			printf("\t|\n");
			printf("\t|\n");
			printf("\t|\n");
			break;
		case 5: 
			printf("\t__________\n");
			printf("\t|         |\n");
			printf("\t|        ***\n");
			printf("\t|       *   *\n");
			printf("\t|       *   *\n");
			printf("\t|        ***\n");
			printf("\t|         |\n");
			printf("\t|       \\ | /\n");
			printf("\t|        \\|/\n");
			printf("\t|         |\n");
			printf("\t|         |\n");
			printf("\t|        /\n");
			printf("\t|       /\n");
			printf("\t|\n");
		break;
		case 6:
			printf("\t__________\n");
			printf("\t|         |\n");
			printf("\t|        ***\n");
			printf("\t|       *   *\n");
			printf("\t|       *   *\n");
			printf("\t|        ***\n");
			printf("\t|         |\n");
			printf("\t|       \\ | /\n");
			printf("\t|        \\|/\n");
			printf("\t|         |\n");
			printf("\t|         |\n");
			printf("\t|        / \\\n");
			printf("\t|       /   \\\n");
			printf("\t|\n");
		break;					
	}	
}