
int gcd(int a,int q){
    int b = 1;

    while(b*q < a)
        b++;

    if(b*q > a)
        b--;

    int r = a - b * q;

    if(r == 0)
        return q;

    return gcd(q, r);
}
