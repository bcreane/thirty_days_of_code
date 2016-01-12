/*
 * If the age of the Person instance is less than 13, then print "You are young."
 * If the age of the Person instance is equal or greater than 13, but less 18,
 * print "You are a teenager." Otherwise, print "You are old."
 */

class Person {
public:
   Person(int initial_Age);
   void amIOld();
   void yearPasses();

private:
    int age_;
};

Person::Person(int initial_Age) : age_(initial_Age)
{
    if (age_ < 0) {
        std::cout << "This person is not valid, setting age to 0." << std::endl;
    }
}

void
 Person::amIOld()
{
    if (age_ < 13)
        std::cout << "You are young." << std::endl;
    else if (age_ < 18)
        std::cout << "You are a teenager." << std::endl;
    else
        std::cout << "You are old." << std::endl;
}
    

void
Person::yearPasses()
{
    ++age_;
}

