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
    aux->prev = NULL;
    aux->data = data;

    return aux;
}

void enlist(List *list, Node *node) {
    if(list->header == NULL){
        list->header = node;
        node->prev = NULL;
    }else{
        Node * aux = list->header;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = node;
        node->prev = aux;
    }
}

void printear(List *list) {
    Node * aux = list->header;
    while(aux != NULL){
        printf("%d\n", aux->data);
        aux = aux->next;
    }
}

void reemplazar(List *list, Node *node, int pos) {
    Node * aux = list->header;
    for(int i=0; i<pos; i++){
        aux = aux->next;
    }
    if(aux != NULL){
        if(aux->next == NULL){
            node->prev = aux->prev;
            aux->prev->next = node;
            free(aux);
        }else{
            if(aux == list->header){
                node->next = aux->next;
                aux->prev = node;
                list->header = node;
                free(aux);
            }else{
                node->next = aux->next;
                node->prev = aux->prev;
                aux->next->prev = node;
                aux->prev->next = node;
                free(aux);
            }
        }
    }
}

List *newList() {
    List * aux = NULL;
    aux = malloc(sizeof(List));
    if(aux == NULL){
        printf("Error al asignar memoria\n");
        exit (-1);
    }
    aux->header = NULL;
    return aux;
}

