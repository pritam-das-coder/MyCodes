# 2.Develop a Python program for managing library resources efficiently. Design a class named `LibraryBook`
# with attributes like book name, author, and availability status. Implement methods for borrowing and
# returning books while ensuring proper encapsulation of attributes.
# Tasks:
#  Create the `LibraryBook` class with encapsulated attributes
#  Implement methods for borrowing and returning books
#  Ensure proper encapsulation to protect book details.
#  Test the borrowing and returning functionality with sample data.
class LibraryBook:
    def __init__(self,book_name,author,status):
        self.__book_name=book_name
        self.__author=author
        self.__status=status
    def getBookName(self):
        return self.__book_name
    def getAuthor(self):
        return self.__author
    def getStatus(self):
        return self.__status
    def borrow_Book(self):
        if self.__status :
            self.__status=False
            print(f"You have borrowed {self.__book_name} by {self.__author} successfully")
        else:
            print(f"The book {self.__book_name} by {self.__author} is not available")
    def return_Book(self):
        if self.__status==False:
            self.__status=True
            print(f"You have returned {self.__book_name} by {self.__author} successfully")
        else:
            print(f"The book {self.__book_name} by {self.__author} is already available")

book1=LibraryBook('Gitanjali','Rabindranath Tagore',True)
book1.borrow_Book()
book1.return_Book()
book1.return_Book()