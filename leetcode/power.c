double myPow(double x, int n)
{
    double y = x, t = 1;
    unsigned int i, nt = (n < 0) ? -n : n;

    while (nt)    {
        for (i = 2; i < nt; i <<= 1)
            y *= y;
        t *= y;  
        y = x;  
        nt -= i >> 1; 
    }

    /* Return while handling 0 and negative powers */
    return (n == 0) ? 1 : ((n > 0) ? t : 1 / t);
}
