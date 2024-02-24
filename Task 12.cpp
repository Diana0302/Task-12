#include <iostream>
#include <string>
class Book {
private: std::string title;
	   std::string author;
	   int ISBN;
public: 
	void setTitle(std::string newTitle) {
		  title = newTitle;
	  }

	void setAuthor(std::string newAuthor) {
		author = newAuthor;
	}

	void setISBN(int newISBN) {
		ISBN = newISBN;
	}
	
	std::string getTitle() {
		return title;
	}
	std::string getAuthor() {
		return author;
	}
	int getISBN() {
		return ISBN;
	}
};

int main()
{
	Book ob;

	ob.setTitle("Samvel");
	ob.setAuthor("Raffi");
	ob.setISBN(777);
	std::cout << "Title: " << ob.getTitle() << std::endl;
	std::cout << "Author: " << ob.getAuthor() << std::endl;
	std::cout << "ISBN: " << ob.getISBN() << std::endl;
	
	
	return 0;
}

