struct dsu{
    vector<int> p, sz;
    int size;
    void init(int n){
        size=n;
        p.resize(n+1); sz.resize(n+1);
        for(int i=0; i<n; ++i){
            p[i]=i;
            sz[i]=1;
        }
    }
    int find(int x){
        return x^p[x] ? p[x]=find(p[x]) : x;
    }
    bool join(int x, int y){
        if( (x=find(x)) == (y=find(y)))
            return false;
        if(sz[x]<sz[y]){
            p[x]=y;
            sz[y]+=sz[x];
        }else{
            p[y]=x;
            sz[x]+=sz[y];
        }
        return true;
    }
};

int removeEdges(int n, vector<vector<int>>& edges) {
    sort(begin(edges), end(edges), [](const vector<int>& a, const vector<int>& b){ return a[0] > b[0]; });
    
    dsu A; A.init(n);
    dsu B; B.init(n);
    
    int removed=0, usedA=0, usedB=0;
    
    for(auto& e: edges){
        int type = e[0], u=e[1], v=e[2];
        --u, --v;
        if(type==3){
            bool isvalidA = A.join(u, v);
            bool isvalidB = B.join(u, v);

            if(isvalidA) ++usedA;
            if(isvalidB) ++usedB;

            if(!isvalidA || !isvalidB) ++removed;
        }
        else if(type==1){
            if(A.join(e[1]-1, e[2]-1)) ++usedA;
            else ++removed;
        }
        else{
            if(B.join(e[1]-1, e[2]-1)) ++usedB;
            else ++removed;
        }
    }
    
    if( usedA != n-1 || usedB != n-1) return -1;
    return removed;
}
//fully accepted