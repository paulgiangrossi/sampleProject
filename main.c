#define USE_THIS 1

int main(int argc, char *argv[])
{
    int foo=1;

    printf("Hello world\n");
#ifdef USE_THIS
    printf("Using this\n");
#endif
}

