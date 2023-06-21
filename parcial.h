//
// Created by Administrador on 21/6/2023.
//

#ifndef PARCIAL260622_PARCIAL_H
#define PARCIAL260622_PARCIAL_H

typedef struct node{
    int data;
    struct node * next;
}Node;

Node *newNode (int data);
void enlist(Node ** list, Node * node);
void printear(Node ** list);
void eliminar(Node ** list1, Node ** list2);


#endif //PARCIAL260622_PARCIAL_H
