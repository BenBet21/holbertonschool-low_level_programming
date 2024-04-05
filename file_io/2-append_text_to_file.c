#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: Name of the file
 * @text_content: Text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fichier, longueur = 0, ecrit;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fichier = open(filename, O_WRONLY | O_APPEND);

	if (fichier == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[longueur] != '\0')
		{
		longueur++;
		}
		ecrit = write(fichier, text_content, longueur);

		if (ecrit == -1 || ecrit != longueur)
		{
			close(fichier);
			return (-1);
		}
	}

	close(fichier);
	return (1);
}
