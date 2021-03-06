//Q 3. Given a graph, WAP to find the number of paths of length n between
//     source and destination entered by user.
#include <iostream>
using namespace std;
#define V 4
// A naive recursive function to count
// walks from u to v with k edges
int countwalks(int graph[][V], int u, int v, int k)
{
 if (k == 0 && u == v)
 return 1;
 if (k == 1 && graph[u][v])
 return 1;
 if (k <= 0)
 return 0;
 int count = 0;
 for (int i = 0; i < V; i++)
 if (graph[u][i] == 1) // Check if is adjacent of u
 count += countwalks(graph, i, v, k - 1);
 return count;
}
void displayMatrix() {
}
int main()
{
 int graph[V][V] = { { 0, 1, 1, 1 },
 { 0, 0, 0, 1 },
 { 0, 0, 0, 1 },
 { 0, 0, 0, 0 } };
 int u = 0, v = 3, n = 2;
 cout<<"Given graph: "<<endl;
 for (int i = 0; i < V; i++) {
 for (int j = 0; j < V; j++) {
 cout << graph[i][j] << " ";
 }
 cout << endl;
 }
 cout<<"Source = " << u<<"\tDestination = "<<v<<"\tLength = "<<n<<endl;
 cout << "Number of paths : " <<countwalks(graph, u, v, n);
 return 0;
}
