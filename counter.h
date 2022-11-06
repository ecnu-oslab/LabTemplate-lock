#ifndef __COUNTER_H__
#define __COUNTER_H__

struct counter_t;

struct counter_t *counter_new(int value);
void counter_destroy(struct counter_t *c);

int counter_get_value(struct counter_t *c);
void counter_increment(struct counter_t *c);
void counter_decrement(struct counter_t *c);

#endif