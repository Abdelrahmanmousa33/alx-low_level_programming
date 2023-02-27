/**
 * _strlen - check the code
 *@s:input
 * Return: Always nothing
 */
int _strlen(char *s)
{
	int n, b;

	while (s[n] != '\0')
	{
		b++;
		n++;
		return (b);
	}
}
