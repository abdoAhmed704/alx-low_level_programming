#include "hash_tables.h"

/**
 * key_index - give the index of a key.
 *
 * @key: the key
 * @size: the size of hash tables
 *
 * Return: the index in the hash
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((unsigned char *)key) % size);
}
