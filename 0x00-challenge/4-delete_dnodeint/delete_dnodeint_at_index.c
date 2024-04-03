int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    if (*head == NULL)
    {
        return -1;
    }

    dlistint_t *current = *head;
    unsigned int i = 0;

    while (current != NULL && i < index)
    {
        current = current->next;
        i++;
    }

    if (current == NULL)
    {
        return -1;
    }

    if (current->prev != NULL)
    {
        current->prev->next = current->next;
    }
    else
    {
        *head = current->next;
    }

    if (current->next != NULL)
    {
        current->next->prev = current->prev;
    }

    free(current);
    return 1;
}
