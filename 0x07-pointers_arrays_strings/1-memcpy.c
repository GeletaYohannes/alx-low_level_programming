/**
* _memcpy - copies memory area
* @dest: destination memory
* @src: source memory
* @n: size of memory
*
*Return: char pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}