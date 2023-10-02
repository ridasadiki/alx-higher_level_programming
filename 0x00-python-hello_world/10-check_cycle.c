#include "lists.h"

/**
 * check_cycle - checks if a lnkd lst contains a cycle
 * @list: lnkd lst to check
 * Return: true if the list has a cycle, NULL if it doesn't
 * done by Rida
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (NULL);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (true);
	}

	return (0);
}
