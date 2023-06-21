//
// Created by Administrador on 21/6/2023.
//

#include "parcial.h"
#include <stdio.h>
#include <stdlib.h>

Node *newNode(int data) {
    Node * aux = NULL;
    aux = malloc(sizeof (Node));
    if(aux == NULL){
        printf("Error en asnjadn");
        exit (-1);
    }
    aux->next = NULL;
    aux->data = data;

    return aux;
}

void enlist(Node **list, Node *node) {
    if((*list) == NULL){
        (*list) = node;
    }else{
        Node * aux = (*list);
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = node;
    }
}

void printear(Node **list) {
    Node * aux = (*list);
    while(aux != NULL){
        printf("%d\n", aux->data);
        aux = aux->next;
    }
}

int diferencia(Node **list1, Node **list2) {
    int cont=0, tamanio=0;
    Node * aux1 = (*list1);
    while(aux1 != NULL){
        Node * aux2 = (*list2);
        while (aux2 != NULL && aux2->data != aux1->data){

            aux2 = aux2->next;
        }
        if(aux2 == NULL){
            cont++;
            llenarVector(aux2, cont);
            tamanio++;

        }
        aux1 = aux1->next;
    }
    return tamanio;
}

void llenarVector(Node *dif, int pos) {
    int * v;
    v = malloc(tam * sizeof(int));
    v[pos]= dif->data;
}



