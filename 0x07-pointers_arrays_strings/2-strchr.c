/**
* _strchr - locates a character in a string
* @s: string
* @c: character to be searched
*
* Return: char pointer
*/
char *_strchr(char *s, char c)
{
while (*(++s) != '\0')
{
if (*s == c)
return (s);
}
return (NULL);
}
