long choose(int num, int chosen){
    long product = 1;
    for(int i = 0; i < chosen; i++){
        product = product * num;
        product = product /(i+1);
        num--;
    }
    return product;
}