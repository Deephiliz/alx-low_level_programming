#ifndef MAIN_H
#define MAIN_H
char *create_array(unsigned int size, char c);
/**
 * _strdup - copies string
 * @str: string to copy
 * Return: character value
 */
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
#endif
