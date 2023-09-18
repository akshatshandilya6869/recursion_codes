class Solution {
public:
int minCostHelper(vector<int>& days, vector<int>& cost,int i){
    //base case
    if(i==days.size())
    return 0;
    //sol for 1 case
    //1 day pass taken
    int cost1=cost[0]+minCostHelper(days,cost,i+1);

    //7 day pass taken
    int passEnd=days[i]+7-1;
    int j=i;
    while(j<days.size() && days[j]<=passEnd){
        j++;
    }
    int cost7=cost[1]+minCostHelper(days,cost,j);

    //30 day pass
    passEnd=days[i]+30-1;
    j=i;
    while(j<days.size() && days[j]<=passEnd){
        j++;
    }
    int cost30=cost[2]+minCostHelper(days,cost,j);
    return min(cost1,min(cost7,cost30));
}
    int mincostTickets(vector<int>& days, vector<int>& costs) {
      
      return minCostHelper(days,costs,0);
    }
};
