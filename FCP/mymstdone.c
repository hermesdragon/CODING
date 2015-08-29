#include <stdio.h>
#include <stdlib.h>
#define ll long long


int Vertex,front,rear;
int parent[100000],queue_array[100];


struct Edge
{
    int src, dest, weight;
};

struct Graph
{
    int V, E;
    struct Edge* edge;
};

///Prototypes
struct Graph* createGraph(int ,int );
int find(int );
int uni(int ,int);

int Comperator(const void* a, const void* b)
{
    struct Edge* a1 = (struct Edge*)a;
    struct Edge* b1 = (struct Edge*)b;
    return a1->weight > b1->weight;
}

ll modular_pow(ll base, ll exponent, ll modulus)
{
    ll result = 1;
    if(exponent==0)
        return 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}
void insert(int add_item)
{
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue_array[rear]=add_item;
        return;
}
void delete()
{
    if((front==-1) || (front>rear))
    {
        return;
    }
    else
    {
        front++;
        return;
    }
}
void minispampeda(struct Graph* graph)
{
    int V = graph->V;
    int v;
    int e = 0;int i = 0;
    qsort(graph->edge, graph->E, sizeof(graph->edge[0]), Comperator);
    while (e < V-1 )
    {
        struct Edge next_edge = graph->edge[i++];
        int x = find(next_edge.src);
        int y=find(next_edge.dest);
 		 if(uni(x,y))
        {
            printf("%d %d %d\n",next_edge.src+1,next_edge.dest+1,next_edge.weight);
            e++;
        }
    }
    return;
}


struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = (struct Graph*) malloc( sizeof(struct Graph) );
    graph->V = V;
    graph->E = E;
    graph->edge = (struct Edge*) malloc( graph->E * sizeof( struct Edge ) );
    return graph;
}

int find(int i)
{
 while(parent[i]!=-1)
  i=parent[i];
 return i;
}
int uni(int i,int j)
{
 if(i!=j)
 {
  parent[j]=i;
  return 1;
 }
 return 0;
}



int main()
{
    int E,T,i;
    scanf("%d",&T);
    while(T--)
    {
    scanf("%d%d",&Vertex,&E);
    struct Graph* graph = createGraph(Vertex, E);
    int vi,vj,w;
 	for(i=0;i<Vertex;i++)
 		parent[i]=-1;
    for(i=0;i<E;i++)
    {
    scanf("%d%d%d",&vi,&vj,&w);
    if(vi-1<=vj-1){
        graph->edge[i].src = vi-1;
        graph->edge[i].dest = vj-1;
        graph->edge[i].weight =w;
    }
    else
    {
     graph->edge[i].src = vj-1;
        graph->edge[i].dest = vi-1;
        graph->edge[i].weight =w;
    }
    }
    minispampeda(graph);
    }
    return 0;
}
