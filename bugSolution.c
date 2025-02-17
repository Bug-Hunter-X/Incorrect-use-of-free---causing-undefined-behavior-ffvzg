int main() {
    int x = 10;
    int *ptr = &x;
    *ptr = 20; 
    printf("%d", *ptr);
    //free(ptr); //This line is incorrect and has been removed
    return 0;
}