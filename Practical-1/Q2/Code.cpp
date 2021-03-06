//Q 2. WAP to accept a directed graph and compute in degree and out degree
//     of each vertex.

#include <bits/stdc++.h>
using namespace std; // Function to print the in and out degrees
// of all the vertices of the given graph
void findInOutDegree(list < list < int >> adjlist,
 int n) {
 int * iN = new int[n]();
 int * ouT = new int[n]();
 list < list < int > > ::iterator nest_list;
 int i = 0;
 for (nest_list = adjlist.begin(); nest_list != adjlist.end(); nest_list++) {
 list < int > lst = * nest_list;
 // Out degree for ith vertex will be the count
 // of direct paths from i to other vertices
 ouT[i] = lst.size();
 for (auto it = lst.begin(); it != lst.end(); it++) {
 // Every vertex that has an incoming
 // edge from i
 iN[ * it]++;
 }
 i++;
 }
 cout << "Vertex\t\tIn\t\tOut" << endl;
 for (int k = 0; k < n; k++) {
 cout << k << "\t\t" <<
 iN[k] << "\t\t" <<
 ouT[k] << endl;
 }
}
// Driver code
int main() {
 // Adjacency list representation of the graph
 list < list < int >> adjlist;
 // Vertices 1 and 2 have an incoming edge
 // from vertex 0
 list < int > tmp;
 tmp.push_back(1);
 tmp.push_back(2);
 adjlist.push_back(tmp);
 tmp.clear();
 // Vertex 3 has an incoming edge
 // from vertex 1
 tmp.push_back(3);
 adjlist.push_back(tmp);
 tmp.clear();
 // Vertices 0, 5 and 6 have an incoming
 // edge from vertex 2
 tmp.push_back(0);
 tmp.push_back(5);
 tmp.push_back(6);
 adjlist.push_back(tmp);
 tmp.clear();
 // Vertices 1 and 4 have an incoming
 // edge from vertex 3
 tmp.push_back(1);
 tmp.push_back(4);
 adjlist.push_back(tmp);
 tmp.clear();
 // Vertices 2 and 3 have an incoming
 // edge from vertex 4
 tmp.push_back(2);
 tmp.push_back(3);
 adjlist.push_back(tmp);
 tmp.clear();
 // Vertices 4 and 6 have an incoming
 // edge from vertex 5tmp.push_back(4);
 tmp.push_back(6);
 adjlist.push_back(tmp);
 tmp.clear();
 // Vertex 5 has an incoming
 // edge from vertex 6
 tmp.push_back(5);
 adjlist.push_back(tmp);
 tmp.clear();
 int n = adjlist.size();
 findInOutDegree(adjlist, n);
}
