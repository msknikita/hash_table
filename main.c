#include <stdio.h>
#include "hash_table.h"

int main() {
	ht_hash_table* ht = ht_new();

	ht_insert(ht, "cat", "2");
	ht_insert(ht, "dog", "3");
	ht_insert(ht, "fox", "3");
	ht_insert(ht, "tiger", "1");

	char* lookup = ht_search(ht, "fox");

	printf("%s\n", lookup);

	ht_del_hash_table(ht);
}