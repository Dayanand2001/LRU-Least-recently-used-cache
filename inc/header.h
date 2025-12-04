#include<stdio.h>
#include<stdlib.h>

struct node {
        int info;
        int key;
        struct node *link;
        struct node *linkprev;
};

extern struct node *start;

int put(int n);
int get(int n);
void display();
int updatetable(int key);
int insertnew(int key,int data);
