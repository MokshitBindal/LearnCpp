// Because the compiler compiles each code file individually (and then forgets what it has seen),
// each code file that uses std::cout or std::cin needs to #include <iostream>.

int add(int x, int y)
{
    return x + y;
}