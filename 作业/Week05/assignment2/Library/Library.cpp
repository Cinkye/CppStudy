#include "Library.h"
#include <string>
#include <iostream>

    Catalogue::Catalogue(int num)
    {
        totalNum = num;
    }

    void Catalogue::displayBooks()
    {
        cout << "The number of books is " << totalNum << "." << endl;
        for(int i = 0;i < totalNum;++i)
            bookRecord[i].displayBooks();
    }

    Library::Library(int bookNum):catalogue(bookNum)
    {
        cin >> borrowerNum;
    }

    Library::~Library()
    {
        //dtor
    }

    void Library::displayBooks(Catalogue ba)
    {
        cout << "The number of books on loan is " << loanNum << "." << endl;
        ba.displayBooks();
    }

    void Library::displayBorrower()
    {
        cout << "The number of borrowers is " << borrowerNum << "." << endl;
        for(int i = 0;i < borrowerNum;++i)
            Borrower[i].displayBorrowers();
    }

    bookRecord::bookRecord()
    {
//        cin.get(bookID,4,';');
//        cin.ignore(1);
//        cin.get(bookTitle,100,';');
//        cin.ignore(1);
//        cin.get(first,100,' ');
//        cin.ignore(1);
//        cin.get(last,100,';');
//        cin.ignore(1);
//        cin.get(publication,4,';');
//        cin.ignore(1);
//        cin >> copyNum;
           setBookRecord();
    }

    bookRecord::~bookRecord()
    {
        //dtor
    }

    void bookRecord::setBookRecord()
    {
        cin.get(bookID,4,';');
        cin.ignore(1);
        cin.get(bookTitle,100,';');
        cin.ignore(1);
        cin.get(first,100,' ');
        cin.ignore(1);
        cin.get(last,100,';');
        cin.ignore(1);
        cin.get(publication,4,';');
        cin.ignore(1);
        cin >> copyNum;
    }
    string bookRecord::getBookID(string a)
    {
        return a;
    }

    void bookRecord::displayBooks()
    {
        cout << this;
    }

    ostream& operator<<(ostream& output,bookRecord record)
    {
        output << record.bookID << ";" << record.bookTitle << ";" << record.first << " " << record.last << ";" << record.publication << ";" << record.copyNum;
        return output;
    }

    Borrower::Borrower()
    {
        cin.get(borrowerID,5,';');
        cin.ignore(1);
        cin.get(first,1000000000,' ');
        cin.ignore(1);
        cin.get(last,1000000000,';');
        cin.ignore(1);
        cin >> loanNum;
        cin.ignore(1);
//        string bookID[loanNum];
        for(int i = 0;i<loanNum-1;++i)
        {
            cin.get(bookID[i],4,';');
            cin.ignore(1);
        }
        cin.get(bookID[loanNum-1],4,'\n');
    }

    void Borrower::displayBorrowers()
    {
        cout << borrowerID << ";" << first << " " << last << ";" << loanNum << ";";
        for(int i = 0;i < loanNum-1;++i)
        {
            cout << this->bookID[i] << ";";
        }
        cout << this->bookID[loanNum-1] << endl;
    }

