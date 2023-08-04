#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
        unordered_map<int, list<int>> adj;

        void addEdge(int u, int v, int dir){
            adj[u].push_back(v);

            if(dir == 0){
                adj[v].push_back(u);
            }
        }

        void printgraph(){
            for(auto i: adj){
                cout << i.first << " -> ";
                for(auto j : i.second){
                    cout << j << ", ";
                }
                cout << endl;
            }
        }
};

int main(){

    graph g;

    int n;
    cout << "enter vertex\n";
    cin >> n;

    int m; 
    cout << "enter edges\n";
    cin >> m;

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }

    g.printgraph();

}