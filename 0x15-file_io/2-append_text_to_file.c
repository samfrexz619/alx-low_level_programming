#include "main.h"
/**
 * append_text_to_file - appends text
 * @filename: filename
 * @text_content: content
 * Return: 1 if succesful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fid;
	int lett;
	int wr;

	if (!filename)
		return (-1);

	fid = open(filename, O_WRONLY | O_APPEND);

	if (fid == -1)
		return (-1);

	if (text_content)
	{
		lett = 0;

		while (text_content[lett])
			lett++;

		wr = write(fid, text_content, lett);

		if (wr == -1)
			return (-1);
	}

	close(fid);

	return (1);
}
