#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <iostream>
#define first(G) G.first
#define idVertex(v) v->idVertex
#define destVertexID(v) v->destVertexID
#define nextVertex(v) v->nextVertex
#define firstEdge(v) v->firstEdge
#define nextEdge(e) e->nextEdge
#define weight(e) e->weight

using namespace std;

typedef char infograph;
typedef struct vertex *adrVertex;
typedef struct edge *adrEdge;
struct vertex {
    infograph idVertex;
    adrVertex nextVertex;
    adrEdge firstEdge;
};

struct edge {
    infograph destVertexID;
    int weight;
    adrEdge nextEdge;
};

struct graph {
    adrVertex first;
};

void initGraph_103012300012(graph &g);
adrVertex createVertex_103012300012(infograph newVertexID);
void addVertex_103012300012(graph &g, adrVertex pointerV);
void buildGraph_103012300012(graph g);

void viewVertex_103012300012(graph g);
adrEdge createEdge_103012300012(infograph newEdgeID);
adrVertex findVertex_103012300012(graph g);
void addEdge_103012300012(graph &g, infograph vertex1, infograph vertex2, int bobot);

#endif // GRAPH_H_INCLUDED
