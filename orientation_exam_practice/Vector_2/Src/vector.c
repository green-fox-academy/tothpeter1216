#include "vector.h"

void init(vector_t *vector) {

	vector->capacity = 0;

	vector->size = 0;

}

void push_back(vector_t *vector, int new_data) {
	vector->size++;

	if (vector->capacity <= vector->size + 1) {
		vector->capacity = vector->capacity + 10;

		int *temp = vector->data;
		vector->data = (int *) pvPortMalloc(vector->capacity * sizeof(int));

		if (vector->data == NULL) {
			printf("Data NULL");
		}

		for (int i = 0; i < vector->size - 1; ++i) {
			vector->data[i] = temp[i];
		}

		vPortFree(temp);
	}
	vector->data[vector->size - 1] = new_data;


}

void push_front(vector_t *vector, int new_data) {
	vector->size++;

	if (vector->capacity <= vector->size) {
		vector->capacity = vector->capacity + 10;

		int *temp = vector->data;
		vector->data = (int *) pvPortMalloc(vector->capacity * sizeof(int));

		for (int i = 0; i < vector->size - 1; ++i) {
			vector->data[i] = temp[i];
		}

		vPortFree(temp);
	}
	for (int j = 0; j < vector->size - 1; ++j) {
		vector->data[vector->size - 1 - j] = vector->data[vector->size - 1 - j
				- 1];
	}
	vector->data[0] = new_data;

}

void pop_front(vector_t *vector) {
	for (int i = 0; i < vector->size - 1; ++i) {
		vector->data[i] = vector->data[i + 1];
	}
	vector->size--;
	if (vector->size < 0) {
		vector->size = 0;
	}
}

int size(vector_t *vector) {
	return vector->size;
}

int free_capacity(vector_t *vector) {
	return vector->capacity - vector->size;
}

void insert(vector_t *vector, int value, int position) {
	if (position > vector->size - 1) {
		printf("The vector smaller than the asked position.");
		return;
	}
	vector->size++;

	if (vector->capacity <= vector->size) {
		vector->capacity = vector->capacity + 10;

		int *temp = vector->data;
		vector->data = (int *) pvPortMalloc(vector->capacity * sizeof(int));

		for (int i = 0; i < vector->size - 1; ++i) {
			vector->data[i] = temp[i];
		}

		vPortFree(temp);
	}

	for (int i = 0; i < vector->size - position; ++i) {
		vector->data[vector->size - 1 - i] = vector->data[vector->size - 1 - i
				- 1];
	}
	vector->data[position] = value;

}

void print(vector_t *vector) {
	if (vector->size == 0) {
		printf("The vector is empty\n");
		return;
	}
	for (int i = 0; i < vector->size; ++i) {
		printf("%d: %d\n", i, vector->data[i]);
	}
}

int max_size(vector_t *vector) {
	return vector->capacity;
}

int empty(vector_t *vector) {
	if (vector->size == 0) {
		return 1;
	} else {
		return 0;
	}
}

void pop_back(vector_t *vector) {
	vector->size--;
	if (vector->size < 0) {
			vector->size = 0;
		}
}

void erase(vector_t *vector, int position) {
	if (position > vector->size - 1) {
		printf("The position does not exist.");
		return;
	}

	for (int i = 0; i < vector->size - position; ++i) {
		vector->data[position + i - 1] = vector->data[position + i];
	}

	vector->size--;
}

int search(vector_t *vector, int value) {
	int is_in = 0;
	int find = 0;
	for (int i = 0; i < vector->size - 1; ++i) {
		if (vector->data[i] == value) {
			is_in = 1;
			find = i;

		}
	}
	if (is_in == 0) {
		return -1;
	} else {
		return find;
	}

}

int average(vector_t *vector){
	int counter = 0;
	int sum = 0;
	for (int i = 0; i < vector->size -1; ++i) {
		sum += vector->data[i];
		counter++;
		return (float)sum / counter;
	};
}

