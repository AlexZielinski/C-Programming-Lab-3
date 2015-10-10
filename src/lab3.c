#include <stdio.h>
#include <ctype.h>

void uppercase_first(void);
void uppercase_last(void);
void squeeze_spaces(void);

int main(void)
{
	return 0;
}

/* changes all first characters of a word to an upper case */
void uppercase_first(void)
{
	int c; 
	int last = 0;
	
	while ((c = getchar()) != EOF)		/* reads every character of string */
	{
		if ((last == 0) || (isspace(last)))
		{
			putchar(toupper(c));
		}	
		else
		{
			putchar(c);
		}
		last = c;
	}
}

/* changes all last characters of a word to upper case */
void uppercase_last(void)
{
	int c;
	int last = getchar();
	while ((c = getchar()) != EOF)		/* reads every character of string */
	{
		if (isspace(c))
		{
			putchar(toupper(last));
		}
		else
		{
			putchar(last);
		}
		last = c;
	}
	putchar(toupper(last));
}

/* gets rid of extra spaces */ 
void squeeze_spaces(void)
{
	int c;
	int last = 0;
	while ((c = getchar()) != EOF)		/* reads every character of string */
	{
		if (isspace(last) && isspace(c))
		{
			
		} else
		{
			putchar(c);
		}
		last = c;
	}
	
}

/* ./a < input.txt print to stdout/cmd/cygwin */
/* ./a < input.txt > input2.txt // creates new file and writes to it */
/* ./a < input.txt >> input.txt // appends to file */