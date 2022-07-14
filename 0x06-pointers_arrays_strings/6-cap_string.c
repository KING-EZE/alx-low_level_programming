#include "main.h"

/**
 * cap_string - capitalise all words of a string
 * @s: input string
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	int letter = 0, i;

	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + letter) >= 97 && *(s + letter) <= 122)
		*(s + letter) = *(s + letter) - 32;
	letter++;
	while (*(s + letter) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + letter) == sep_words[i])
			{
				if ((*(s + (letter + 1)) >= 97) && (*(s + (letter + 1)) <= 122))
					*(s + (letter + 1)) = *(s + (letter + 1)) - 32;
				break;
			}
		}
		letter++;
	}
	return (s);
}
