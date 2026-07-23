# NOTES

## Effective C++ 

### 2. Constructors, Destructors, Assignment Operators

If they don't exist in your code, compilers will declare their own version of:
- default constructor `MyClass() {...}` (only if no constructor exists),
- copy constructor `MyClass(const MyClass& rhs) {...}`
- destructor `~MyClass() {...}`
- copy assignment operator `MyClass& operator=(const MyClass& rhs) {...}`