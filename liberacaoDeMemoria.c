void desalocar_matriz(int **a, int linhas){
    for (int i = 0; i < linhas; i++) { // anda na linha
        free(a[i]);
    }
    free(a);
}