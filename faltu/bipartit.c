#include<string.h>
#include <stdio.h>
#include <stdlib.h>
int label=0;

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}
int alter(int flag)
{
    if(flag==0)
        return 1;
    else
        return 0;
}
struct AdjListNode
{
    int dest;
    struct AdjListNode* next;
};

struct AdjList
{
    struct AdjListNode *head;
};

struct Graph
{
    int V;
    struct AdjList* array;
};
void deleteGraph(struct Graph* g,int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		while(g->array[i].head!=NULL)
		{
			g->array[i].head=(g->array[i].head)->next;
		}
	}
	free(g);
}
struct AdjListNode* newAdjListNode(int dest)
{
    struct AdjListNode* newNode =(struct AdjListNode*) malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

struct Graph* createGraph(int V)
{
    struct Graph* graph = (struct Graph*) malloc(sizeof(struct Graph));
    graph->V = V;

    graph->array = (struct AdjList*) malloc(V * sizeof(struct AdjList));
    int i;
    for (i = 0; i < V; ++i)
        graph->array[i].head = NULL;

    return graph;
}

void bfs (struct Graph * G, int num_nodes, int start_node)
{
    int queue[10000],ultimate=0;
    int color[num_nodes],visited[num_nodes];
    int flag=0;
    memset (color, 0, sizeof (color));
    memset (color, 0, sizeof (color));
    int front=-1, rear=-1;
    queue[rear+1] = start_node;
    color[start_node]=flag;
    visited[start_node]=1;
    rear++;
    front++;
    while (front <= rear)
    {
        int current = queue[front];
        flag=alter(flag);
        struct AdjListNode *tmp = G->array[current].head;
        while(tmp)
        {
            if (visited[tmp->dest] == 0)
            {
                rear++;
                queue[rear] = tmp->dest;
                visited[tmp->dest] = 1;
                color[tmp->dest]=flag;
            }
            else if(color[tmp->dest]==color[current])
            {
                ultimate=1;
                break;
            }
            tmp = tmp->next;
        }
        if(ultimate==1)
            break;
        front++;
    }
    if(ultimate==0)
        printf("YES\n");
    else
        printf("NO\n");
        front=rear=-1;
}

void addEdge(struct Graph* graph, int src, int dest)
{
    struct AdjListNode* newNode = newAdjListNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    newNode = newAdjListNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int V,E,i;
    scanf("%d %d",&V,&E);
    int src,dest,j=1,flag=0;
    struct Graph* graph = createGraph(V);
    while(E--)
    {
        scanf("%d %d",&src,&dest);
        src--;
        dest--;
        addEdge(graph, src, dest);
    }
    bfs(graph,V,0);
    deleteGraph(graph,V);
    }

    return 0;
}
