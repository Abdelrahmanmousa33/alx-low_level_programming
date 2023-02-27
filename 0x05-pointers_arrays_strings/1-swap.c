/**
 * swap_int- check the code
 *@a:intput1
 *@b:input 2
 * Return: Always nothing
 */
void swap_int(int *a, int *b)
{
	int *tmp;

	*tmp = *a;
	*a = *b;
	*b = *tmp;

}
