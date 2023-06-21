#include <stdio.h>
#include "parcial.h"

int main() {
    Node * list1 = NULL;

    enlist(&list1, newNode(2));
    enlist(&list1, newNode(37));
    enlist(&list1, newNode(31));
    enlist(&list1, newNode(20));
    enlist(&list1, newNode(6));

    printf("List 1:\n");
    printear(&list1);

    Node * list2 = NULL;
    enlist(&list2, newNode(6));
    enlist(&list2, newNode(8));
    enlist(&list2, newNode(77));
    enlist(&list2, newNode(22));
    enlist(&list2, newNode(20));
    enlist(&list2, newNode(81));
    enlist(&list2, newNode(11));
    enlist(&list2, newNode(31));


    printf("List 2:\n");
    printear(&list2);

    eliminar(&list2, &list1);
    printf("List 2 eliminado:\n");

    printear(&list2);


    return 0;
}
