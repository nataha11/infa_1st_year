#include <stdio.h>

int main() {
    int L; 
    int k;        
    int step;     
    int path;     
    int i;
    
    scanf("%d", &L);    
    scanf("%d", &k);

    path = 0;
    i = 0;
    step = L; 
    
    while (i < 100) {
        path = path + step;
        
        step = step + k;   
        
        i = i + 1; 
    }
    
    printf("%d\n", path);
    
    return 0;
}