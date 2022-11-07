#ifndef __HASH_H__
#define __HASH_H__

struct hash_t;

struct hash_t *hash_new(int size);
void hash_destroy(struct hash_t *hash);

void hash_insert(struct hash_t *hash, int key);
void hash_delete(struct hash_t *hash, int key);
void *hash_lookup(struct hash_t *hash, int key);

#endif
