#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class graph{
public:

    unordered_map<int,list<int>>abj;
    
    void addEdge(int u,int v,bool direction){
        //0->directed
        //1->not directed

        abj[u].push_back(v);

        if(direction==0){
            abj[v].push_back(u);
        }

    }

    void printAbjList(){
        for(auto i:abj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }


};

int main(){
    int n;
    cout<<"Enter the number of Nodes : "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of Edges : "<<endl;
    cin>>m;

    graph g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        g.addEdge(u,v,0);
    }


    g.printAbjList();

    return 0;
}