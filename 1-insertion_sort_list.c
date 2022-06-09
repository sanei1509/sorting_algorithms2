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
	/*no puedo pararme en el primero porque tengo
	que evaluar el anterior nodo*/	
	curr = (*list)->next;
	while (curr != NULL)
	{
		/*vamos hasta el último pero sin perder el 2do*/
		p = curr;
		curr = curr->next;
		/*el actual es más chico que el anterior?*/
		if (p->n < p->prev->n)
		{
			anterior = p->prev;
			/*si no estamos en el 1ero y el anterior > siguiente*/
			/*debemos swapear*/
			while (anterior != NULL && anterior->n > p->n)
			{
				/*el sig */
				anterior->next = p->next;
				if (p->next !=  NULL)
					p->next->prev = p->prev;
				/*si estamos en el nodo más chico*/
				if (anterior->prev == NULL)
				{
					/*el segundo pasa a ser el 1ero*/
					p->prev = NULL;
					p->next = anterior;
					p->next->prev = p;
					*list = p;
					print_list(*list);
				}
				/*me paro en el anterior de ese?*/
				anterior = anterior->prev->prev;
			}
		}

	}
}
