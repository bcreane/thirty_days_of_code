//Write MyBook class

class MyBook : public Book {
    public:
    MyBook(std::string title, string author, int price)
        : Book(title, author), price_(price)
    {
            
    }
    void display()
    {
        std::cout << "Title: " << title << std::endl;    
        std::cout << "Author: " << author << std::endl;    
        std::cout << "Price: " << price_ << std::endl;    
    }

private:
    int price_;
};

