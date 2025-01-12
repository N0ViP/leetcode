double myPow(double x, int n) {
    
    double res = 1;
    long N = n; 
    
    if (n < 0)
    {
        x = 1 / x;        
        N = -N;   
    }

    while (N > 0)
    {
        if (N % 2 == 1)
            res = res * x;
        x = x * x;
        N /= 2;
    }
    
    return (res);
}
