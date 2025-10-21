int ricercaSequenziale(int vet[], int t, int key){
    int i;
    for(i=0;i<t;i++){
        if(vet[i]==key) {
            return i;
        }
    }
    return -1;
}