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

void eliminar(Node **list2, Node **list1) {
    Node * aux1 = (*list1);
    Node * ant = NULL;

    while (aux1 != NULL){
        Node * aux2 = (*list2);
        while (aux2 != NULL && aux2->data != aux1->data){
            ant = aux2;
            aux2 = aux2->next;
        }
        if(aux2 != NULL){
            if(aux2->data == aux1->data){
                if(aux2 == (*list2)){
                    (*list2) = aux2->next;
                }else{
                    if(aux2->next == NULL){
                        ant->next = NULL;
                    }else{
                        ant->next = aux2->next;
                    }
                }
                free(aux2);

        }
            aux2 = ant->next;
        }

        aux1 = aux1->next;
        }
    }



