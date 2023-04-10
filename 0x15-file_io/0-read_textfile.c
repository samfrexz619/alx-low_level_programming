#include "main.h"
/**
 * read_textfile - reads a textfile and prints the letters
 * @filename: filename
 * @letters: nums of letters
 * Return: nums of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fid;

	ssize_t rd, wr;

	char *buff;

	if (!filename)
		return (0);

	fid = open(filename, O_RDONLY);

	if (fid == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));

	if (!buff)
		return (0);

	rd = read(fid, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	close(fid);

	free(buff);

	return (wr);
}
