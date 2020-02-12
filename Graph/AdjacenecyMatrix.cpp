#include<iostream>
#include<vector>
using namespace std;
template<class T>
class AdjcencyMatrix{
    public:
	void Matrix(vector<T> adj[],int u,int v){
	      adj[u].push_back(v);
	      adj[v].push_back(u);
	}
     void printmatrix(vector<T>adj[],int V){
            for(int i=0;i < V;i++){
	      for(auto x:adj[i]){
	       cout << x <<"\t";
	      }
	       cout << endl;
	    }
     
     
     }

}; 
int main(){
	
	int V=5;
    vector<int> add[5];
     AdjcencyMatrix<int>object;
     object.Matrix(add,1,2);
     object.Matrix(add,3,4);
     object.Matrix(add,5,6);
     object.Matrix(add,6,7);
     object.Matrix(add,7,2);
     object.printmatrix(add,5);
  return 0;  
};

