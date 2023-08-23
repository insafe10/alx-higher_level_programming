#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - linkd list
 * @a: intger
 * @nxt: points to next code
 *
 * Description: snglyb linked llist nose strct
 * for alx project
 */
typdef struct listint_s
{
	int a;
	struct listint_s *nxt;
} listint_s;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
