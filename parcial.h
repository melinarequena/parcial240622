//
// Created by Administrador on 21/6/2023.
//

#ifndef PARCIAL260622_PARCIAL_H
#define PARCIAL260622_PARCIAL_H

typedef struct node{
    int data;
    struct node * next;
    struct node * prev;
}Node;

typedef struct list{
    Node * header;
}List;

Node *newNode (int data);
List *newList();
void enlist(List * list, Node * node);
void printear(List * list);
void reemplazar(List * list, Node * node, int pos);
#endif //PARCIAL260622_PARCIAL_H
