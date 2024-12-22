int main() { 
    int x = 10; 
    int *ptr = &x; 
    *ptr = 20; 
    printf("%d", *ptr); 
    free(ptr); //Error: free()ing a pointer that is not dynamically allocated
    return 0; 
}