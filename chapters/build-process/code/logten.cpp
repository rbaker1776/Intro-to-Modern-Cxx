int log10(int n)
{
    int log { -1 };
    for (int i = 1; i <= n; ++log)
    { 
        i *= 10;
        //i = (i << 3) + (i << 1);
    }
    return log;
}
