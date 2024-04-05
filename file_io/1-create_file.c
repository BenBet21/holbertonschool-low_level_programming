#include "main.h"

/**
 * create_file - Creates a file and writes text content to it
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fichier, IndexTxt, Ecrit;

	if (filename == NULL)
		return (-1);

	fichier = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fichier == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (IndexTxt = 0; text_content[IndexTxt] != '\0'; IndexTxt++)
			;
		Ecrit = write(fichier, text_content, IndexTxt);

		if (Ecrit == -1 || Ecrit != IndexTxt)
		{
			close(fichier);
			return (-1);
		}
	}
	close(fichier);
	return (1);
}
