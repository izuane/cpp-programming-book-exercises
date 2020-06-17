#include <iostream>
using namespace std;

struct Vector {
    int sz; // Number of elements
    double* elem; // Pointer to the elements
};

void vector_init(Vector& v, int s) // Vector& makes v a reference. Hence this function can change v's properties.
{
    v.elem = new double[s]; // Allocate an array of s doubles (Memory allocated from heap)
    v.sz = s;
}

double read_and_sum(int s)
{
    Vector v;
    vector_init(v, s);

    for(int i = 0; i != s; ++i)
        cin >> v.elem[i];

    double sum = 0;
    for(int i = 0; i != s; ++i)
        sum += v.elem[i];

    return sum;
}

int main()
{
    
}