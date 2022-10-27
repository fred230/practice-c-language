
#include <stdio.h>
#include "lists.h"

/*task2 - adds a new node at the beginning */
listint_t *add_nodeint(listint_t **head, const int n){

listint_t *new_node;

new_node = malloc(sizeof(listint_t));

new_node->n = n;
if(head==NULL){
    return (NULL);

}
new_node->next = (*head);

(*head) = new_node;



}

/*task1 - prints all elemets of the linked list*/
size_t print_listint(const listint_t *h){

size_t n =0;

while(h != NULL){
    printf("%d\n", h->n);
    h = h->next;
    n++;
}
return (n);

}

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    printf("task 1 ends\n\n");
    

    /*task 2 tests*/
    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);

    printf("task 2 ends\n\n");
}