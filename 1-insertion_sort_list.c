 #include "sort.h"
/**
 *insertion_sort_list - ordenar una doble linked list
 *en orden ascendente
 * @list: recibimos algo
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *p = NULL, *curr = NULL, *anterior = NULL;

	/*zero or one element in list ?*/
	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	/*no puedo pararme en el primero porque tengo que evaluar el anterior nodo*/
	curr = (*list)->next;
	while (curr != NULL)
	{
		/*vamos hasta el último pero sin perder el 2do*/
		p = curr;
		curr = curr->next;
		anterior = p->prev;
		while (anterior != NULL && anterior->n > p->n)
		{
			anterior->next = p->next;
			if (p->next !=  NULL)
				p->next->prev = p->prev;
			if (anterior->prev == NULL)/*si estamos en el nodo más chico*/
			{
				p->prev = NULL;
				p->next = anterior;
				p->next->prev = p;
				*list = p; /*el segundo pasa a ser el 1ero*/
				print_list(*list);
			}
			else
			{
				anterior->prev->next = p;
				p->prev = anterior->prev;
				anterior->prev = p;
				p->next = anterior;
				print_list(*list);
			}
			anterior = anterior->prev->prev;
		}
	}
}
