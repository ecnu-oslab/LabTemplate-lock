#ifndef __MQ_H__
#define __MQ_H__

struct mq_t;

struct mq_t *mq_new(int buf_size);
void mq_destroy(struct mq_t *mq);

void mq_produce(struct mq_t *mq, int item);
int mq_consume(struct mq_t *mq);

#endif