#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int V;
typedef enum { false, true } bool;

struct Queue
{
    int front, rear, capacity;
    int* array;
};

int initColorMatrix(int color[], int N)
{
    int i;
    for (i = 0; i < N; ++i)
        color[i] = -1;
}

struct Queue* createQueue(int capacity)
{
    struct Queue* queue = (struct Queue*) malloc(sizeof(struct Queue));

    queue->capacity = capacity;
    queue->front = queue->rear = -1;

    queue->array = (int*) malloc(queue->capacity * (sizeof(int)));

    return queue;
}

bool isEmpty(struct Queue* queue)
{
    return queue->front == -1 ? true : false;
}

bool isFull(struct Queue* queue)
{
    return queue->rear == queue->capacity - 1 ? true : false;
}

void enQueue(struct Queue* queue, int item)
{
    if (isFull(queue))
        return;

    queue->array[++queue->rear] = item;
    if (isEmpty(queue))
        ++queue->front;
}
bool isBipartite(int G[][V], int src)
{
    int colorMatrix[V], color, temp, u;

    initColorMatrix(colorMatrix, V);

    struct Queue* queue = createQueue(V);

    color = 1;
    colorMatrix[src] = color;
    enQueue(queue, src);

    while (!isEmpty(queue))
    {
        temp = deQueue(queue);
        // assign alternate color to its neighbor
        color = 1 - colorMatrix[temp];

    	for (u = 0; u < V; ++u)
        {
        	// an edge exists and destination not colored
        	if (G[temp][u] && colorMatrix[u] == -1)
	        {
		        colorMatrix[u] = color;
                enQueue(queue, u);
	        }

            else if (G[temp][u] && colorMatrix[u] == colorMatrix[temp])
                return false;
        }
    }

    return true;
}

int deQueue(struct Queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;

    int item = queue->array[queue->front];

    if (queue->front == queue->rear)
        queue->front = queue->rear = -1;

    else
        ++queue->front;

    return item;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int E,i,j;
        scanf("%d %d",&V,&E);
        int G[V][V];
        int a,b;
        for(i=0;i<V;i++)
            for(j=0;j<V;j++)
                G[i][j]=0;
        while(E--)
        {
            scanf("%d %d",&a,&b);
            a--;
            b--;
            G[a][b]=1;
            G[b][a]=1;
        }

        isBipartite(G, 0) ? printf("YES\n") : printf("NO\n");
    }
    return 0;
}
