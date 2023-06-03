#include "rsa.h"

/**
 * main - program entry
 * @ac: arg count
 * @av: string, filename
 * Return: 0
 */
int main(int ac, char **av)
{
	char const *const file_name = av[1];
	FILE *file;
	char line[2048];
	unsigned long long int n;


	if (ac == 2)
	{
		file = fopen(file_name, "r");
		if (!file)
		{
			fprintf(stderr, "Cant open %s\n", av[1]);
			return (EXIT_FAILURE);
		}

		while (fgets(line, sizeof(line), file))
		{
			line[strcspn(line, "\n")] = '\0';
			n = strtoll(line, NULL, 10);
			find_factors2(n);
		}

		fclose(file);
	}

	return (0);
}
