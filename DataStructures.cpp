#include <iostream>
// #include <cstring>

using namespace std;

struct Book
{
   char title[50];
   string subject;
   char author[50];
   int book_id;
   void print_book()
   {
      cout << "title : " << title << ", author : " << author << endl;
   }
};

struct Books
{
   struct Book BookList[5];
   string category;
   void print_booklist()
   {
      // for (int i = 0; i < strlen(*BookList); i++)
      cout << "* BookList " << endl;
      for (int i = 0; i < 5; i++)
      {
         cout << i << ". " << BookList[i].title << endl;
      }
   };
};

enum categories
{
   COMPUTERS,
   ARTS,
   BUSINES,
};

void printBook( struct Book*);
int main()
{
   struct Book Book1; // Declare Book1 of type Book
   struct Book Book2; // Declare Book2 of type Book

   // book 1 specification
   strcpy(Book1.title, "Learn C++ Programming");
   Book1.subject = "C++ Programming";
   strcpy(Book1.author, "Chand Miyan");
   Book1.book_id = 6495407;

   cout << "Book 1 title : " << Book1.title << endl;
   cout << "Book 1 author : " << Book1.author << endl;
   cout << "Book 1 subject : " << Book1.subject << endl;
   cout << "Book 1 id : " << Book1.book_id << endl;
   // Book 1 title : Learn C++ Programming
   // Book 1 author : Chand Miyan
   // Book 1 subject : C++ Programming
   // Book 1 id : 6495407
 
   // book 2 specification
   strcpy(Book2.title, "Telecom Billing");
   strcpy(Book2.author, "Yakit Singha");
   Book2.subject = "Telecom";
   Book2.book_id = 6495700;

   printBook( &Book1 );
   printBook( &Book2 );

   // Print Book2 info
   cout << "Book 2 title : " << Book2.title << endl;
   cout << "Book 2 author : " << Book2.author << endl;
   cout << "Book 2 subject : " << Book2.subject << endl;
   cout << "Book 2 id : " << Book2.book_id << endl;
   // Book 2 title : Telecom Billing
   // Book 2 author : Yakit Singha
   // Book 2 subject : Telecom
   // Book 2 id : 6495700

   struct Books BestSell; // Declare Books of type Book
   // book 1 specification
   BestSell.category = categories::COMPUTERS;

   strcpy(BestSell.BookList[0].title, "Learn C++ Programming");
   BestSell.BookList[0].subject = "C++ Programming";
   strcpy(BestSell.BookList[0].author, "Chand Miyan");
   BestSell.BookList[0].book_id = 6495407;
   BestSell.BookList[0].print_book();
   // title : Learn C++ Programming, author : Chand Miyan
 
   strcpy(BestSell.BookList[1].title, "Telecom Billing");
   strcpy(BestSell.BookList[1].author, "Yakit Singha");
   BestSell.BookList[1].subject = "Telecom";
   BestSell.BookList[1].book_id = 6495700;
   BestSell.BookList[1].print_book();
   // title : Telecom Billing, author : Yakit Singha
 
   BestSell.BookList[2] = Book1;
   BestSell.BookList[4] = Book2;
   BestSell.print_booklist();
  // BookList - 
   // Learn C++ Programming
   // Telecom Billing
   
   return 0;
}
// This function accept pointer to structure as parameter.
void printBook( struct Book *book ) {
   cout << "printBook title : " << book->title <<endl;
   cout << "printBook author : " << book->author <<endl;
   cout << "printBook subject : " << book->subject <<endl;
   cout << "printBook id : " << book->book_id <<endl;
   book->subject = "Change subject in function";
}