#ifndef _LISTS_H
#define _LISTS_H

#include <unistd.h>
/**
 * _putchar - print character
 * c: character
 * Return: only one character
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/*function prototypes*/
size_t print_list(const list_t *h);
int _putchar(char c);
#endif
