int **alocar_matriz(int linhas, int colunas){
    int **a;
    a = (int **) calloc(linhas, sizeof(int *));
    for (int i = 0; i < linhas; i++) { // anda na linha
        a[i] = (int *)calloc(colunas, sizeof(int));
    }
    return a;
    }