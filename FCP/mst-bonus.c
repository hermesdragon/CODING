#include <stdio.h>
#include <stdlib.h>
#define ll long long
#define rep(i,s,e) for(i=s;i<=e;i++)
#define rrep(i,s,e) for(i=s;i>=e;i--)
#define S(t) scanf("%d",&t);
#define P(t) printf("%d ",t);
#define SLL(t) scanf("%lld",&t)
#define PLL(t) printf("%lld\n",t)
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

#define NIL -1
int Sum,front,rear;


typedef int bool;

#define TRUE 1
#define FALSE 0


struct Edge
{
    bool mark;
    int source;
    int dest;
    int weight;

};

struct AdjListNode
{
    int dest;
    int w;
    struct AdjListNode* next;

};

struct AdjList
{
    struct AdjListNode *head;  // pointer to head node of list

};

struct Graph
{
    int V;
    int E;
    struct Edge *edge;
    struct AdjList* array;

};

struct Set
{
    bool visited;
    int parent;
    int rank;
};

struct AdjListNode* newAdjListNode(int dest,int weight)
{
    struct AdjListNode* newNode = (struct AdjListNode*) malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->w = weight;

    newNode->next = NULL;

    return newNode;
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

int N,visited[1010],disc[1010],low[1010],parent[1010],G[1010][1010],flag,time,colorArr[1010],front,rear,queue_array[10010];

void insert(int add_item)
{
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue_array[rear]=add_item;
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
    }
}
int front_queue()
{
    int i;
    if((front==-1) || (front>rear))
    {
         return -1;
    }
    else
    {
         return queue_array[front];
    }
}
int BFFS(int src)
{
    int i;
    colorArr[src]=1;
    insert(src);
    while(front_queue()!=-1)
    {
        int u=front_queue(),v;
        delete();
        for(v=0;v<N;v++)
        {
            if((G[u][v]) && (colorArr[v]==-1))
            {
                colorArr[v]=1;
                insert(v);
            }
        }
    }
    return 1;
}
int bridgeUtil(int u,int visited[],int disc[],int low[],int parent[])
{
    int i;
    visited[u]=1;
    disc[u]=low[u]=++time;
    for(i=0;i<N;i++)
    {
        if(G[u][i]==1)
        {
            int v=i;
            if(!visited[v])
            {
                parent[v]=u;
                bridgeUtil(v,visited,disc,low,parent);
                low[u]=min(low[u],low[v]);
                if(low[v]>disc[u])
                {
                    flag=0;
                }
            }
            else if(v!=parent[u])
            {
                low[u]=min(low[u],disc[v]);
            }
        }
    }
    return flag;
}
int bridge()
{
    int i,ret;
    flag=1;
    for(i=0;i<N;i++)
    {
        parent[i]=NIL;
        visited[i]=0;
    }
    for(i=0;i<N;i++)
    {
         if(visited[i]==0)
         {
            bridgeUtil(i,visited,disc,low,parent);
         }
    }
    return flag;
}

void printadj(struct Graph* graph)
{
    int v;
    for (v = 1; v <= graph->V; ++v)
    {
        struct AdjListNode* pCrawl = graph->array[v].head;
        printf("\n Adjacency list of vertex %d\n head ", v);
        while (pCrawl)
        {
            printf("-> %d", pCrawl->dest);
            printf("/%d ", pCrawl->w);

            pCrawl = pCrawl->next;
        }
        printf("\n");
    }
}

int isBipartite(struct Graph *g,int src)
{
        struct AdjListNode *temp;
        temp=(struct AdjListNode*)malloc(sizeof(struct AdjListNode));
        int i,u;

        colorArr[src]=1;
        insert(src);
        while(front_queue()!=-1)
        {
                    u=front_queue();
                    delete();
                    temp=g->array[u].head;
                    while(temp!=NULL)
                    {
                        if(colorArr[temp->dest]==-1)
                        {
                            colorArr[temp->dest]=1-colorArr[u];
                            insert(temp->dest);
                        }
                        else if(colorArr[temp->dest]==colorArr[u])
                        {
                            return 0;
                        }
                        temp=temp->next;
                    }
         }
         return 1;
}


struct Graph* createGraph(int vertices,int edges)
{
    int i;
    struct Graph* graph = (struct Graph*) malloc(sizeof(struct Graph));
    graph->V = vertices;
    graph->E= edges;
    graph->edge = (struct Edge*) malloc( (edges) * sizeof(struct Edge));

    for(i = 0 ;i < edges; i++ )
        graph->edge[i].mark=FALSE;

   graph->array = (struct AdjList*) malloc((vertices+1) * sizeof(struct AdjList));

    for (i = 0; i <= vertices; ++i)
        graph->array[i].head = NULL;

    return graph;
}

struct Set *createSets(struct Graph* graph)
{
    int i;
    struct Set *set = (struct Set *)malloc( (graph->V+1) *sizeof(struct Set));

    for(i=1 ; i <= graph->V ; i++)
    {
        set[i].visited=FALSE;
        set[i].rank=1;
        set[i].parent=i;

    }

    set[0].visited=-1;
    set[0].rank=-1;
    set[0].parent=-1;

    return set;
}

void addEdge(struct Graph* graph, int src, int dest,int weight)
{
    struct AdjListNode* newNode = newAdjListNode(dest,weight);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    newNode = newAdjListNode(src,weight);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;

}

int BFS(struct Graph *graph,int v,int final_node)
{
    int size=(graph->E);    // prerequisites

    int queue[size];
    int front=-1,rear=-1;

    int *visited=(int *)calloc(size,sizeof(int));
    int *parent=(int *)calloc(size,sizeof(int));


    visited[0]=TRUE;
    parent[0]=-1000;

    visited[v]=TRUE;
    parent[v]=-1;
    // ENQUEUE
    front++;
    rear++;
    queue[rear]=v;
    //////////

    while(rear>=front)
    {
        //DEQUEUE
        int p=queue[front];
        front++;
        ///////////////
        struct AdjListNode* tmp=graph->array[p].head;
        while(tmp!=NULL)
        {
            int x=tmp->dest;
            if (visited[x]!=TRUE)
            {
                visited[x]=TRUE;
                parent[x]=p;
                //printf("parent=%d child=%d child level=%d \n",p,x,level[x]);

                // ENQUEUE
                rear++;
                queue[rear]=x;


            }
            if (visited[final_node]==TRUE)
                break;

            tmp=tmp->next;
        }
    }

    int i;
    int max_weight=-1;
    int weight;

    i=final_node;
    while(parent[i]!=-1)
    {


        weight=EdgeWeight(graph,i,parent[i]);

        if( weight > max_weight )
        {
            max_weight=weight;
        }
        i=parent[i];

    }

    free(parent);
    free(visited);

    return max_weight;

}

int EdgeWeight(struct Graph *graph,int u,int v)
{
	struct AdjListNode* tmp=graph->array[u].head;
	while(tmp!=NULL)
	{
		if(tmp->dest==v)
		return tmp->w;

		tmp=tmp->next;
	}

}



int Find(struct Set *set, int node)
{
    int start;
    int flag=0;
    int next;
    int end;


    while (set[node].parent != node)
    {
        if (set[node].visited == FALSE && flag==0)
        {
            start=node;
            flag=1;
        }
        node=set[node].parent;

    }

    end=set[node].parent;

    if(flag==1)
    while(start!=end)
    {
        next=set[start].parent;
        set[start].parent=end;
        set[start].visited=TRUE;
        start=next;
    }
    return end;
}

void Union(struct Set *set,int root_1, int root_2)
{
    if (set[root_1].rank < set[root_2].rank)
    {
        set[root_1].parent = root_2;
        set[root_2].rank += set[root_1].rank;
    }

    else if (set[root_1].rank > set[root_2].rank)
    {
        set[root_2].parent = root_1;
        set[root_1].rank += set[root_2].rank;
    }
    else
    {
        set[root_2].parent = root_1;
        set[root_1].rank*=2;
    }
}


int comp(const void *a, const void *b)
{
    struct Edge *A= (struct Edge*)a;
    struct Edge *B= (struct Edge*)b;

    if (A->weight > B->weight)
        return 1;
    else if (A->weight < B->weight)
        return -1;
    else
        return 0;

}

void minispampeda(struct Graph *graph)
{
    int index=0;
    int edge_count=1;
    int i=0; // for mst
    Sum=0;


	qsort(graph->edge,graph->E, sizeof(graph->edge[1]), comp );

   struct Set *set=createSets(graph);

    while(edge_count < (graph->V) )
    {
        struct Edge New = graph->edge[index];

        int head_set=Find(set,New.source);
        int tail_set=Find(set,New.dest);


        if (head_set != tail_set)
        {
    	//printf("1\n");
    	   addEdge(graph,New.source,New.dest,New.weight);

    	   Sum+=New.weight;

            graph->edge[index].mark=TRUE;
            Union(set,head_set,tail_set);
            edge_count++;

        }

    index++;

}
    free(set);


}
int z;
void minispampaka(struct Graph* graph,int sum,int k)
{
    int i;
    int Second_MST = sum;
    int min=10000000;
    int max_weight;
    int new_weight;

    for (i = 0; i < ( (graph->E)/k ) ; ++i)
    {
        if ( graph->edge[i].mark == FALSE)
        {

            z++;
            int curr_max_weight=BFS(graph,graph->edge[i].source,graph->edge[i].dest);

            int diff = (graph->edge[i].weight) - curr_max_weight ;

            if ((diff < min) && (diff > 0))
            {

                min=diff;
                max_weight=curr_max_weight;
                new_weight=graph->edge[i].weight;
    		//	printf("max weight = %d , new_weight =%d \n",max_weight,new_weight);

            }

        }
        if (min==1)
        {
                break;
        }

    }

    //printf("sum =%d \n",sum);


    if(min==10000000)
    	printf("-1");
    else
    {
    	Second_MST = ( (Second_MST + new_weight) - (max_weight) );
		printf("%d",Second_MST);
	}

}



int main()
{
	int t;
    scanf("%d",&t);

    while(t>0)
    {
    	int vertices,edges;

        scanf("%d",&vertices);
        scanf("%d",&edges);

        struct Graph* graph=createGraph(vertices,edges);
        int i=0,B=edges;

        while(edges > 0)
        {
            int a,b,w;
            scanf("%d",&a);
            scanf("%d",&b);
            scanf("%d",&w);
            graph->edge[i].source = a;
            graph->edge[i].dest = b;
            graph->edge[i].weight = w;

			i++;
 			edges--;
 		//	printf("1\n");

        }
        Sum=0;
        z=0;

        minispampeda(graph);
        //printadj(graph);
        if(B < (10*vertices) )
        minispampaka(graph,Sum,1);
        else
        minispampaka(graph,Sum,10);


        printf("\n");

        //printf("z=%d \n",z );
        free(graph->array);
        free(graph->edge);
        free(graph);

    	t--;
    }

	return 0;
}
