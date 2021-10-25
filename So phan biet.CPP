#include <bits/stdc++.h> 
using namespace std; 
FILE *fi = freopen("BDISTINCT.INP","r",stdin);
FILE *fo = freopen("BDISTINCT.OUT","w",stdout); 
int a[1000001],n,k;
//------------------------------------------ 
int maxDistinctNum() 
{ 
    unordered_map<int, int> um;   
    priority_queue<int> pq; 
    for (int i = 1; i <= n; i++) 
        um[a[i]]++; 

    for (auto it = um.begin(); it != um.end(); it++) 
        pq.push(it->second);  
    while (k--) { 

        int temp = pq.top();  
        pq.pop();  
        temp--;  
        if (temp != 0) 
            pq.push(temp); 
    }  
    int res = 0; 
    while (pq.empty() == false) 
    { 
        int x = pq.top(); 
        pq.pop(); 
        if (x == 1) 
          res++; 
    }       
  
    return res; 
} 
  
//----------------------------------
int main() 
{   
	scanf("%d%d",&n,&k);
    for(int i =1; i<=n; ++i)
    	scanf("%d",&a[i]);
    cout <<maxDistinctNum(); 
    return 0; 
} 