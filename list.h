#ifndef __LIST_H__
#define __LIST_H__

struct list_t;

struct list_t *list_new();
void list_destroy(struct list_t *list);

void list_insert(struct list_t *list, int key);
void list_delete(struct list_t *list, int key);
void *list_lookup(struct list_t *list, int key);

#endif