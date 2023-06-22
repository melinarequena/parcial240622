#include <stdio.h>
#include "parcial.h"

int main() {
    List * list1 = newList();

    enlist(list1, newNode(2));
    enlist(list1, newNode(37));
    enlist(list1, newNode(31));
    enlist(list1, newNode(20));
    enlist(list1, newNode(37));
    enlist(list1, newNode(6));

    printf("List 1:\n");
    printear(list1);

    printf("List eliminado:\n");

    reemplazar(list1, newNode(444), 3);
    printear(list1);


    return 0;
}
