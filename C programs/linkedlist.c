#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *create_li(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_after(struct node *);
struct node *insert_before(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_after(struct node *);
struct node *delete_before(struct node *);
struct node *delete_li(struct node *);
struct node *sort_li(struct node *);

int main()
{
    int option;
    printf("***** MAIN-MENU*****\n");
    printf("1.Create a list\n");
    printf("2.Display a list\n");
    printf("3.Add a node at beginning\n");
    printf("4.Add a node at the end\n");
    printf("5.Add a node before a given node\n");//
    printf("6.Add a node after a given node\n");
    printf("7.Delete a node at beginning\n");
    printf("8.Delete a node at the end\n");
    printf("9.Delete a node before a given node\n");
    printf("10.Delete a node after a given node\n");//
    printf("11.Delete the entire list\n");
    printf("12.Sort the list\n");
    printf("13.Exit\n");
    do
    {
        printf("Entire Your Choice:");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            start = create_li(start);
            printf("List Created\n");
            break;
        case 2:
            start = display(start);
            printf("\n");
            break;
        case 3:
            start = insert_beg(start);
            break;
        case 4:
            start = insert_end(start);
            break;
        case 5:
            start = insert_before(start);
            break;
        case 6:
            start = insert_after(start);
            break;
        case 7:
            start = delete_beg(start);
            break;
        case 8:
            start = delete_end(start);
            break;
        case 9:
            start = delete_before(start);
            break;
        case 10:
            start = delete_after(start);
            break;
        case 11:
            start = delete_li(start);
            printf("List Deleted");
            break;
        case 12:
            start = sort_li(start);
            break;
        default:
            printf("Please choose between 1-13\n");
        }
    } while (option != 13);
    return 0;
}

struct node *create_li(struct node *start)
{
    struct node *new_node, *ptr;
    int num;
    printf("\n Enter -1 to end \n");
    printf("Enter the data: ");
    scanf("%d", &num);
    while (num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        if (start == NULL)
        {
            new_node->next = NULL;
            start = new_node;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next = NULL;
            printf("\n Enter the data: ");
            scanf("%d", &num);
        }
        return start;
    }
}

struct node *display(struct node *start)
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("List is empty");
    }
    else
    {
        ptr = start;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    return start;
}

struct node *insert_beg(struct node *start)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &new_node->data);
    new_node->next = start;
    start = new_node;
    return start;
}

struct node *insert_end(struct node *start)
{
    struct node *new_node, *ptr;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    return start;
}

struct node *insert_before(struct node *start)
{
    struct node *new_node, *ptr, *preptr;
    int val;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &new_node->data);
    printf("Enter the value before which the data need to be inserted: ");
    scanf("%d", &val);
    ptr = start;
    while (preptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    new_node->next = ptr;
    preptr->next = new_node;
    return start;
}

struct node *insert_after(struct node *start)
{
    struct node *new_node, *ptr, *postptr;
    int val;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &new_node->data);
    printf("Enter the value after which the data need to be inserted: ");
    scanf("%d", &val);
    ptr = start;
    postptr = ptr->next; 
    while (ptr->data != val)
    {
        postptr = ptr->next;
        ptr = ptr->next;
    }
    ptr->next = new_node;
    new_node->next = postptr;
    return start;
}

struct node *delete_beg(struct node *start)
{
    struct node *ptr;
    ptr = start;
    start = start->next;
    free(ptr);
    return start;
}

struct node *delete_end(struct node *start)
{
    struct node *ptr, *preptr;
    ptr = start;
    while (ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr);
    return start;
}

struct node *delete_before(struct node *start)
{
    struct node *ptr, *preptr;
    int val;
    printf("Enter the value before which the data need to be deleted: ");
    scanf("%d", &val);
    ptr = start;
    while (ptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
    return start;
}

struct node *delete_after(struct node *start)
{
    struct node *ptr, *postptr;
    int val;
    printf("Enter the value after which the data need to be deleted: ");
    scanf("%d", &val);
    postptr = start;
    while (ptr->data != val)
    {
        ptr = postptr;
        postptr = postptr->next;
    }
    ptr->next = postptr->next;
    free(postptr);
    return start;
}

struct node *delete_li(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr->next != NULL)
    {
        start = delete_beg(ptr);
        ptr = ptr->next;
    }
    return start;
}

struct node *sort_li(struct node *start)
{
    struct node *ptr1, *ptr2;
    ptr1 = start;
    while (ptr1->next != NULL)
    {
        ptr2 = ptr1->next;
        while (ptr2 != NULL)
        {
            if (ptr1->data > ptr2->data)
            {
                int temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    return start;
}
