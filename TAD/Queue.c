#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct static_queue
{
    int *data; // vetor de inteiros
    long capacity;
    long size;
    long begin;
    long end;
} QueueStatic;

// construtores
QueueStatic *create(long capacity)
{
    QueueStatic *q = (QueueStatic *)malloc(sizeof(QueueStatic));
    q->capacity = capacity;
    q->data = (int)malloc(capacity * sizeof(int));
    q->size = 0;
    q->begin = 0;
    q->end = 0;
    return q;
}

void destroy(QueueStatic **Q_ref)
{
    QueueStatic *q = *Q_ref;
    free(q->data);
    free(q);
    *Q_ref = NULL;
}
// funções
bool isEmpty(QueueStatic *q)
{
    return q->size == 0;
}

bool isFull(QueueStatic *q)
{
    return q->size == q->capacity;
}

// getSize, boa prática
long size(QueueStatic *q)
{
    return q->size;
}

void enqueue(QueueStatic *q, int x)
{
    if (isFull(q))
    {
        printf("Queue is full!\n");
        exit(EXIT_FAILURE);
    }
    q->data[q->end] = x;
    q->end = (q->end + 1) % q->capacity; // fila circular
    q->size++;
}

int peek(QueueStatic *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty");
        exit(EXIT_FAILURE);
    }
    return q->data[q->begin];
}

int dequeue(QueueStatic *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty");
        exit(EXIT_FAILURE);
    }
    int res = q->data[q->begin];
    q->begin = (q->begin + 1) % q->capacity;
    q->size--;
    return res;
}

void show(QueueStatic *q)
{
    printf("Capacity: %ld\n", q->capacity);
    printf("Size: %ld\n", q->size);
    printf("Begin: %ld\n", q->begin);
    printf("End: %ld\n", q->end);

    int i = q->begin;
    while (i != q->end)
    {
        printf("%d ", q->data[i]);
        i = (i + 1) % q->capacity;
    }
}

int main()
{
    QueueStatic *q = create(5);
    int val;

    show(q);
    puts("Enqueue: 10,20,30"); // put string, coloca string na saída de dados
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    show(q);

    val = peek(q);
    printf("\n%d\n", val);

    dequeue(q);

    show(q);

    destroy(q);

    return 0;
}