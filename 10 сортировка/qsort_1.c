int cmp_int(const void * p1, const void * p2) {
    int x = *(int*)p1;
    int y = *(int*)p2;
    if (x < y) 
         return -1;
    else if (x > y)
         return 1;
    else 
         return 0;
}


//или ???
int cmpFloat(const void* pa, const void * pb)
{
    float a = *((float*)pa);
    float b = *((float*)pb);
    return (a > b) - (a < b);
}