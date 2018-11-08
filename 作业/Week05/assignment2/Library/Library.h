#ifndef LIBRARY_H
#define LIBRARY_H
#include<string>
#include<iostream>
using namespace std;

class bookRecord
{
    public:
        bookRecord();
        ~bookRecord();
        string getBookID(string);
        void displayBooks();
        friend ostream& operator<<(ostream&,bookRecord);
        void setBookRecord();

    private:
        char bookID[4];
        char bookTitle[100];
        char first[20];
        char last[20];
        char publication[4];
        int copyNum;
        int copyAvailable;
};

class Catalogue
{
    public:
        Catalogue(int);
        void displayBooks();
    private:
        int totalNum;
        bookRecord bookRecord[1000];
};

class Borrower
{
    public:
        Borrower();
        void displayBorrowers();

    private:
        char borrowerID[5];
        char first[100];
        char last[100];
        int loanNum;
        char bookID[100][4];
};

class Library
{
    public:
        Library(int);
        virtual ~Library();
        void displayBooks(Catalogue);
        void displayBorrower();
    private:
        int loanNum;
        int borrowerNum;
        Catalogue catalogue;
        Borrower Borrower[100];
};

#endif // LIBRARY_H
