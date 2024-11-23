#include "graph.h"
#include <iostream>

using namespace std;

void initGraph_103012300012(graph &g) {
    first(g) = NULL;
}

adrVertex createVertex_103012300012(infograph newVertexID){
    adrVertex v = new vertex;
    idVertex(v) = newVertexID;
    nextVertex(v) = NULL;
    firstEdge(v) = NULL;

    return v;
}

void addVertex_103012300012(graph &g, adrVertex pointerV) {
    if (first(g) == NULL) {
        first(g) = pointerV;
    } else {
        adrVertex v = first(g);
        while (nextVertex(v) != NULL) {
            v = nextVertex(v);
        }
        nextVertex(v) = pointerV;
    }
}

adrVertex findVertex_103012300012(graph g, infograph namaVertex) {
    adrVertex v = first(g);
    while (v != NULL) {
        if (namaVertex == idVertex(v)) {
            return v;
        }
        v = nextVertex(v);
    }
    cout << "vertex tidak ditemukan!" << endl;
    return NULL;
}

adrEdge createEdge_103012300012(infograph newEdgeID, int bobot){
    adrEdge e = new edge;
    destVertexID(e) = newEdgeID;
    weight(e) = bobot;
    nextEdge(e) = NULL;

    return e;
}

void addEdge_103012300012(graph &g, infograph vertex1, infograph vertex2, int bobot){
    adrVertex V1, V2;
    V1 = findVertex_103012300012(g, vertex1);
    V2 = findVertex_103012300012(g, vertex2);

    if (V1 != NULL && V2 != NULL) {
        adrEdge edge = createEdge_103012300012(vertex2, bobot);
        if (firstEdge(V1) == NULL) {
            firstEdge(V1) = edge;
        } else {
            adrEdge edge2 = firstEdge(V1);
            while (nextEdge(edge2) != NULL) {
                edge2 = nextEdge(edge2);
            }
            nextEdge(edge2) = edge;
        }
    }
}

void buildGraph_103012300012(graph g) {
    adrVertex v = first(g);
    while (v != NULL){
        cout << idVertex(v) << endl;
        v = nextVertex(v);
    }
}

void viewVertex_103012300012(graph g) {
    adrVertex v = first(g);
    while (v != NULL) {
        if (firstEdge(v) != NULL) {
            adrEdge e = firstEdge(v);
            while (e != NULL){
                cout << idVertex(v) << " ke " << destVertexID(e) << " bobot : " << weight(e) << endl;
                e = nextEdge(e);
            }
            cout << endl;
        } else {
            cout << idVertex(v) << endl;
        }
        v = nextVertex(v);
    }
}
