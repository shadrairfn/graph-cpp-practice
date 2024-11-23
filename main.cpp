#include <iostream>
#include "graph.h"

using namespace std;

int main()
{
    graph g;
    initGraph_103012300012(g);

    infograph namaVertex;

    for (int i = 1; i <= 5; i++) {
        cout << "Masukan nama vertex ke " << i << " : ";
        cin >> namaVertex;
        adrVertex v = createVertex_103012300012(namaVertex);
        addVertex_103012300012(g, v);
    }

    buildGraph_103012300012(g);
    cout << endl;

    // Bobot dari A ke C sebesar 12
    addEdge_103012300012(g, 'A', 'C', 12);

    // Bobot dari A ke D sebesar 60
    addEdge_103012300012(g, 'A', 'D', 60);

    // Bobot dari B ke A sebesar 10
    addEdge_103012300012(g, 'B', 'A', 10);

    // Bobot dari C ke B sebesar 20
    addEdge_103012300012(g, 'C', 'B', 20);

    // Bobot dari C ke D sebesar 32
    addEdge_103012300012(g, 'C', 'D', 32);

    // Bobot dari E ke A sebesar 7
    addEdge_103012300012(g, 'E', 'A', 7);

    viewVertex_103012300012(g);
    return 0;
}
