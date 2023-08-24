#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list 
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure 0x12-singly_linked_lists
 * for alx africa project C17-2023 by zakaria moukrim
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);


#endif
