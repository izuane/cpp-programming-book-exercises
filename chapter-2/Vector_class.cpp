#include <iostream>
using namespace std;

class Vector {
    private:
        double* elem;
        int sz;

    public:
        // Define constructor for Vector.
        // Initialise elem property with an double array
        // Initialise sz property with the value of s
        Vector(int s): elem{new double[s]}, sz{s} {}

        // Define the user of the [] (index) operator for Vector to return elem[i]
        double& operator[](int i) {return elem[i];}

        int size() {return sz;}  

    
};



int main()
{
    // Define a Vector with 6 elements.
    Vector v(6);
}