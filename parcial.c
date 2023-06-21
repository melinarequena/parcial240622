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

void eliminar(Node **list) {
 Node * auxF = (*list);

 while(auxF != NULL){
     Node * auxD = auxF->next;
     Node * ant = auxF;
     while(auxD != NULL && auxD->data != auxF->data){
         ant = auxD;
         auxD = auxD->next;
     }
     if(auxD != NULL && auxD->data == auxF->data){
         if(auxD->next == NULL){
             ant->next = NULL;
             free(auxD);
         }else{
             ant->next = auxD->next;
             free(auxD);
         }
     }
     auxF = auxF->next;
 }
}