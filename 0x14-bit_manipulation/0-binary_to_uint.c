unsigned int binary_to_uint(const char *b)
{
    unsigned int i = 0;
    while (*b)
    {
        i = (i << 1) + (*b == '1');
        b++;
    }
    return i;
}
