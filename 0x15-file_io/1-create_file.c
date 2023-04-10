#include "main.h"
/**
 * create_file - to creates a file
 * @filename: filename
 * @text_content: content wrtitten to the file
 *
 * Return: 1 if it is successful
 */
int create_file(const char *filename, char *text_content)
{
	int fid;
	int lett;
	int wr;

	if (!filename)
		return (-1);

	fid = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fid == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	lett = 0;

	while (text_content[lett])
		lett++;

	wr = write(fid, text_content, lett);

	if (wr == -1)
		return (-1);

	close(fid);

	return (1);
}
