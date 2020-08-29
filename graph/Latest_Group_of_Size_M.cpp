class Solution {
public:
    vector<int>uf;
    vector<int>size;
    vector<int>mp;
    
    void UF(int n){
        uf.resize(n+1, -1);
        size.resize(n+1, 0);
        mp.resize(n+1, 0);
    }
    
    int find(int x){
        return uf[x]==x? x:uf[x]=find(uf[x]);
    }
    
    void merge(int x, int y){
        x=find(x);
        y=find(y);
        if(x==y) return;
        
        mp[size[x]]--;
        mp[size[y]]--;
        
        if(size[x]<size[y]) swap(x,y);
        uf[y]=x;
        size[x]+=size[y];
        size[y]=0;
        mp[size[x]]++;
    }
    
    int findLatestStep(vector<int>& arr, int m) {
        int n=arr.size();
        UF(arr.size());
        
        
        int step=-1;
        for(int i=0; i<n; i++){
            
            uf[arr[i]]=arr[i];
            size[arr[i]]=1;
            mp[size[arr[i]]]++;

            if(arr[i]>1 && uf[arr[i]-1]!=-1){
                merge(arr[i], arr[i]-1);
            }

            if(arr[i]<n && uf[arr[i]+1]!=-1){
                merge(arr[i], arr[i]+1);
            }
            
            if(mp[m]>0){
                    step=i+1;
            }
            

        }
        
        
        return step;
    }
};
