int main() { 
    int x = 10; 
    int *ptr = &x; 
    *ptr = 20; 
    printf("%d", *ptr); 
    //Corrected code: Removed the free(ptr) call 
    return 0; 
} 