class Vector {
    private:
        double* elem;
        int sz;
        
    public:
        Vector(int s) : elem {new double[s]}, sz{s}
        {
            for(int i = 0; i != s; ++i)
                elem[i] = 0;
        }

        ~Vector() {delete[] elem;} // destructor: release resources. "~" is the complement operator

        double& operator[](int i);
        int size() const;
};

int main()
{
    int n {5};
    Vector v(n);
    {
        Vector v2(2*n);
    } // v2 is destroyed (out of scope)
} // v is destroyed (out of scope)