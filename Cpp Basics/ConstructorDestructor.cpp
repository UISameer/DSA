#include<iostream>
using namespace std;

class Dog
{
private:
    int license;
public:
    Dog();
    Dog(int licenseIn);
    void setLicense(int licenseIn);
    int getLicense();
    ~Dog();
};

Dog::Dog()
{
    license = 0;
}

Dog::~Dog()
{
    cout << "\nDeleting the dog";
}

Dog::Dog(int licenseIn)
{
    license = licenseIn;
}

void Dog::setLicense(int licenseIn)
{
    license = licenseIn;
}

int Dog::getLicense()
{
    return license;
}

int main()
{
    Dog d2(666666);
    cout << d2.getLicense();
    return 0;
}