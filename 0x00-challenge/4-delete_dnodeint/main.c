int main(void)
{
    dlistint_t *head = NULL;

    // Adding nodes
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    
    // Printing the list
    print_dlistint(head);
    
    printf("-----------------\n");
    
    // Deleting nodes at specific indexes
    delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    
    printf("-----------------\n");
    
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    
    // Continue deleting nodes if needed
    
    // Freeing the list
    free_dlistint(head);
    
    return (0);
}
