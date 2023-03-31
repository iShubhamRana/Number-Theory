    int query(int i1,int j1 , int i2 , int j2){
        return prefixSum[i2+1][j2+1] - prefixSum[i2+1][j1] - prefixSum[i1][j2+1] + prefixSum[i1][j1];
    }


    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                prefixSum[i+1][j+1] = prefixSum[i][j+1] + prefixSum[i+1][j] - prefixSum[i][j] + (pizza[i][j]=='A');
           }
    }
