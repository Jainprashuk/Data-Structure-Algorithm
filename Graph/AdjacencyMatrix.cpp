#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m ;
    cout<<"Enter Number Of Nodes  :";
    cin>>m;

    int n ;
    cout<<"Enter Number Of Edges : ";
    cin>>n;

    vector<vector<int>>adjmatrix(n+1 , vector<int>(n+1 , 0));

    for (int i = 0; i < n; i++)
    {
        int u , v;
        cin>>u>>v;
        adjmatrix[u][v] = 1;
        adjmatrix[v][u] = 1;
    }
    

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
           cout<< adjmatrix[i][j];
        }
        cout<<endl;
        
    }
    
}