/*==============================|-problem statement-|==============================*/
/*
   Represent a graph using adjacency list.
*/
/*===================================|-solution-|===================================*/
#include <iostream>
#include <stdlib.h>
using namespace std;

/* linked list node*/
struct node{
    public:
    int vert;
    int weight;
    node* nxt;
    node(int vert, int weight){
        this -> vert = vert;
        this -> weight = weight;
        this -> nxt = nullptr;

    }
    node(int vert, int weight,node* top){
        this -> vert = vert;
        this -> weight = weight;
        this -> nxt = top;

    }
    
};
/* linked list*/
struct LL{
    public:
    node* top;
    LL(){
        top = nullptr;
    }
    void add(int vert,int  weight){
        this->top = new node(vert, weight, top);

    }
    void display(){
        node *temp = top;
        while(temp != nullptr){
            cout<<temp->vert<<"->";
            temp = temp->nxt;
        }
    }
};


int main(){

    int V ;
    cout<<"Number of vertices in the graph \n";
    cin>>V;
    LL *list[V];//graph //pointer array of linked lists
    int start, end, weight;

    //intilaiseng the graph
    for(int i =0;i<V;i++){
        list[i] = new LL();   
    }
    
    cout<<"enter edges . to quit press -1\n";

 //takes inputs stops when given -1
   while(1){

        cin>>start;
        if(start == -1){
            break;
        }
        cin>>end>>weight;
        list[start]->add(end, weight);
        list[end]->add(start, weight);

    }

    cout<<"the graph is: \n";

    //displays
    for(int i =0;i<V;i++){
        cout<<i<<"->";
        list[i]->display(); 
        cout<<"null \n";  
    }
    

    return 0;


}
