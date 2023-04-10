// #include <iostream>
// using namespace std;
// int main()
// {
//     int e, v, x, y;

//     cout << "Enter number of edges and vertices:" << endl;
//     cin >> e >> v;
//     int adjM[v][v] = {0};
//     cout << "Enter connections:" << endl;
//     for (int i = 0; i < e; i++)
//     {
//         cin >> x >> y;
//         // adjM[x][x]=1;
//         adjM[x][y] = 1;
//         adjM[y][x] = 1;
//     }
//     for (int i = 0; i < v; i++)
//     {
//         for (int j = 0; j < v; j++)
//         {
//             cout << adjM[i][j] << "   ";
//         }
//         cout << endl;
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int e, v, x, y;
    cout << "EV";
    cin >> e >> v;
    vector<int> adj[v];
    cout << "Enter connections:" << endl;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 0; i < v; i++)
    {
        for (auto itr : adj[i])
        {
            cout << itr << " ";
        }
        cout << endl;
    }
}