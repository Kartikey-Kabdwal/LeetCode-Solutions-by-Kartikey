class Solution {
    int[] parent;
    int[] rank;
    int find(int x){
        while(parent[x]!=x){
            x = parent[parent[x]];
        }
        return x;
    }
    void makeUnion(int x, int y){
        int xPar = find(x);
        int yPar = find(y);
        if(xPar == yPar){
            return;
        }
        else if(rank[xPar]<rank[yPar]){
            parent[xPar] = yPar;
        }
        else if(rank[xPar]>rank[yPar]){
            parent[yPar] = xPar;
        }
        else{
            parent[yPar] = xPar;
            rank[xPar]++;
        }
        return;
    }
    public long countPairs(int n, int[][] edges) {
        parent = new int[n];
        rank = new int[n];
        for(int i=0; i<n; i++){
            parent[i] = i;
        }
        for(int[] edge:edges){
            makeUnion(edge[0], edge[1]);
        }
        long[] componentMembers = new long[n];
        for(int i=0; i<n; i++){
            int par = find(i);
            componentMembers[par]++;
        }
        long pairs = 0;
        long remainingMemebers = n;
        for(int i=0; i<n; i++){
            if(componentMembers[i]==0){
                continue;
            }
            long currentComponents = componentMembers[i];
            remainingMemebers -= currentComponents;
            long currentPairs = currentComponents * remainingMemebers;
            pairs+=currentPairs;
        }
        return pairs;
    }
}
