class Container {
    public:
        // A class with a pure virtual function is called an abstract class
        virtual double& operator[](int) = 0; // "= 0" here means that this function is a pure virtual function. Hence any class derived from this class must implement this function
        virtual int size() const = 0; // const member virtaul function. Recall: const here means this function doesn't change value/reference of variables in its body
        virtual ~Container() {} // destructor
};

// An abstract class doesn't have a constructor (it doesn't know what variables to initialise)
// An abstract class DOES have a destructor as such classes tend to be manipulated by references or pointers. Hence a pointer doesn't know what resources are owned to "destroy" them