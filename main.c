#include <stdio.h>
#include <malloc.h>
#include "parcial.h"

int main() {
    Node * list1 = NULL;

    enlist(&list1, newNode(2));
    enlist(&list1, newNode(37));
    enlist(&list1, newNode(31));
    enlist(&list1, newNode(20));
    enlist(&list1, newNode(37));
    enlist(&list1, newNode(6));

    printf("List 1:\n");
    printear(&list1);

    printf("List 2 eliminado:\n");

    eliminar(&list1);
    printear(&list1);


    return 0;
}
