#include <stdio.h>
#include <stdlib.h>
#include "static_array.h"

void insert_front(array list, int data);
void insert_rear(array list, int data);
void insert_at(array list, int data);

void delete_front(array list);
void delete_rear(array list);
void delete_at(array list, int position);
void delete_item(array list, int item);

void display_array(array list) {
    for (int i = 0; i < list.count; i++)
    {
        printf("%d", list.list[i]);
    }
    
}