        int m=matrix.size();
        int n=matrix[0].size();
        vector<bool>rows(m,false);
        vector<bool>cols(n,false);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    rows[i]=true;
                    cols[j]=true;
                }
            }
        }
        for(int i=0;i<m;i++){
            if(rows[i]==true){
                for(int j=0;j<n;j++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int j=0;j<n;j++){
            if(cols[j]==true){
                for(int i=0;i<m;i++){
                    matrix[i][j]=0;
                }
            }
        }
