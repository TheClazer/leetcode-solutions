void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int a,b;
    for(int i = 0;i<(matrixSize+1)/2;i++){
        for(int j=i;j<matrixSize-1-i;j++){
            int temp=matrix[i][j];
            a=i,b=j;
            for(int k =0;k<4;k++){
                int tem=a;
                a=b;
                b=matrixSize-1-tem;
                
                int t = matrix[a][b];
                matrix[a][b] = temp;
                temp = t;

                
            }
        }
    }
}