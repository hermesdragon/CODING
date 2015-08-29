#include<string.h>
#include <stdio.h>
#include <stdlib.h>
int label=0;

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
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

struct AdjListNode* newAdjListNode(int dest)
{
    struct AdjListNode* newNode =
            (struct AdjListNode*) malloc(sizeof(struct AdjListNode));
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
void DFS(int v,struct Graph *graph,int visited[])
{
    visited[v]=label;
    //printf("->%d",v);
    int i;
    struct AdjListNode* pCrawl = graph->array[v].head;
    while(pCrawl)
        if(visited[pCrawl->dest]==0)
            DFS(pCrawl->dest,graph,visited);
        else
            pCrawl=pCrawl->next;
}
/*void DFS(int v,struct Graph* graph,int visited[])
{
    int i;
    for(i=0;i<graph->V;i++)
        visited[i]=0;
    DFSUtil(v,graph,visited);
}*/
void addEdge(struct Graph* graph, int src, int dest)
{
    struct AdjListNode* newNode = newAdjListNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    newNode = newAdjListNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

void bfs (struct Graph *G, int num_nodes, int start_node)
{
    int queue[1000];
    int color[num_nodes+1];
    memset (color, 0, sizeof (color));
    int front=-1, rear=-1;
    queue[rear+1] = start_node;
    rear++;printf("\n\n");
    while (front != rear)
    {
        front++;
        int current = queue[front];
        printf("%d  ",current);

        struct AdjListNode *tmp = G->array[current].head;
        while (tmp != NULL)
        {
            if (color[tmp->dest] == 0)
            {
                queue[rear+1] = tmp->dest;
                rear++;
                color[tmp->dest] = 1;
            }
            tmp = tmp->next;
        }
    }

}

void printGraph(struct Graph* graph)
{
    int v;
    for (v = 0; v < graph->V; ++v)
    {
        struct AdjListNode* pCrawl = graph->array[v].head;
        printf("\n Adjacency list of vertex %d\n head ", v);
        while (pCrawl)
        {
            printf("-> %d", pCrawl->dest);
            pCrawl = pCrawl->next;
        }
        printf("\n");
    }
}

int main()
{
    int V,E,i;
    scanf("%d %d",&V,&E);
    V++;
    int src,dest,j=1,flag=0;
    struct Graph* graph = createGraph(V);
    while(E--)
    {
        scanf("%d %d",&src,&dest);
        addEdge(graph, src, dest);
    }
    int *visited=(int *)malloc(V*sizeof(int ));
    int *csort=(int *)malloc(V*sizeof(int ));
    for(i=0;i<graph->V;i++)
        csort[i]=visited[i]=0;
    while(1)
    {
        label++;
        flag=0;
        DFS(j, graph, visited);
        for(i=1;i<V;i++)
            if(!visited[i])
            {
                flag=1;
                j=i;
                break;
            }
        if(flag==0)
            break;
    }
    int comp=-1,color[V],parent;
    qsort(visited,V,sizeof(int),cmpfunc);
    comp=visited[0];
    if(comp!=-1)
        printf("NO\n");
    else
    {
        for(i=0;i<V;i++)
            color[i]=-1;
        for(i=1;i<V;i++)
        {
            parent=color[i];

        }

    }
    return 0;
}
