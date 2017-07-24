void clear_buffer(void)
{
    int c;
    while((c=getchar()) != EOF && c != '\n');
}
