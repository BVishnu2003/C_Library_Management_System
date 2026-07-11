📚 Library Management System (C)

📌 Project Overview

A console-based **Library Management System** developed using **C Programming**.  
This project uses **structures, arrays, file handling, and modular programming** to manage books, users, issuing, returning, and fine calculation.

The system provides a menu-driven interface for easy management of library operations.

---

✨ Features

- 📖 Add New Book
- 👀 View All Books
- ✏️ Update Book Details
- ❌ Remove Book
- 🔍 Search Book
- 📤 Issue Book
- 📥 Return Book
- 📋 List Issued Books
- 💾 Save Records
- 🚪 Exit with Save / Without Save

---

📚 Book Management

The system stores:

- Book ID
- Book Name
- Author Name
- Quantity

Operations:

- Add books
- Modify book details
- Delete books
- Search books

---

👤 Issue Management

When a book is issued, the system records:

- 📘 Book ID
- 📘 Book Title
- 👨 User ID
- 👤 User Name
- 📅 Issue Date (Automatic)
- 📅 Due Date (7 Days)
- 🔄 Return Date
- 💰 Fine Amount

---

 💰 Fine Calculation

Fine rule:


Fine Amount = Late Days × ₹5


Example:


Late Days = 3

Fine = 3 × 5

Fine Amount = ₹15


---

🔄 Return Process

- Find issue record using Book ID and User ID
- Generate return date automatically
- Compare return date with due date
- Calculate fine if late
- Increase book quantity
- Update return details

---

💾 File Handling

The project saves data using CSV files:


books.csv
issued_books.csv


CSV files can be opened using:

- Microsoft Excel
- LibreOffice Calc
- Google Sheets

---

🛠️ Technologies Used

- C Programming Language
- Structures
- Arrays
- File Handling
- Functions
- Modular Programming
- GCC Compiler
- Linux Ubuntu

---

📂 Project Structure


Library-Management-System
│
├── library.h
├── main.c
├── book_add.c
├── book_show.c
├── book_update.c
├── book_delete.c
├── book_search.c
├── book_issue.c
├── book_return.c
├── issued_list.c
├── book_save.c
├── book_exit.c
├── Makefile
│
├── books.csv
└── issued_books.csv


---

 ▶️ Compilation

Using GCC:

```bash

gcc main.c book_add.c book_show.c book_update.c book_delete.c book_search.c book_issue.c book_return.c issued_list.c book_save.c book_exit.c -o library

🚀 Run Project
./library

📋 Menu
******** LIBRARY MANAGEMENT MENU ********

1. Add New Book
2. Update Book Details
3. Remove Book
4. Search Book
5. View All Books
6. Issue Book
7. Return Book
8. List Issued Books
9. Save
10. Exit

🎯 Concepts Implemented
✅ Structures
✅ Arrays
✅ Functions
✅ File Handling
✅ String Handling
✅ Date and Time Functions
✅ Menu Driven Programming
✅ Modular Programming

📈 Learning Outcomes
Learned how to design a real-world application using C.
Implemented CRUD operations.
Practiced file handling for data storage.
Implemented automatic date generation.
Implemented fine calculation logic.
Improved modular programming skills.


👨‍💻 Author

B. Vishnu
