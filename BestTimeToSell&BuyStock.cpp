#include<iostream>
#include<vector>
using namespace std;

int maximumProfit(vector<int> &prices){

    int mini = prices[0];
    int maxProfit = 0;
    int n= prices.size();

    for(int i=1; i<n; i++){

        int cost = prices[i]- mini;
        maxProfit = max(maxProfit,cost);
        mini = min(mini, prices[i]);
    }
return maxProfit;

}

int main(){

vector<int> v={7,6,4,3,1};
int result = maximumProfit(v);
cout<<"Maximum Profit is: "<<result;

return 0;
}