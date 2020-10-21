/*==============================|-problem statement-|==============================*/
/*
    Implement fractional knapsack problem
*/
/*===================================|-solution-|===================================*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class item{
    public:
    int weight;
    float cost;
    float costPerItem;
    item(int weight, float cost){
        this-> weight = weight;
        this -> cost = cost;
        this-> costPerItem = cost/weight;
    }
};
bool comparator( const item &l,  const item &r) {
    return l.costPerItem > r.costPerItem;
}
int main(int argc, char const *argv[])
{
    int n,w,c,maxW,profit = 0;
    
    vector<item> items;
    while (1)
    {
        cin>>w;
        if (w == -1)
           break;
        cin>>c;
        items.push_back(item(w,c));

    }
    cout<<"the maximum weight of knapsack : ";
    cin>>maxW;
    sort(items.begin(), items.end(), &comparator);
 
    for(auto it = items.begin(); it != items.end(); it++){
        if(it->weight > maxW){
            profit += (it->costPerItem * maxW);
            break;
        }
        profit += (it->cost);
        maxW -= (it->weight);
    }
    cout<<"The maximum profit we can get is "<<profit;
    
    return 0;
}