#include "File.hpp"
#include "Folder.hpp"
#include "InvalidFormatException.hpp"
#include <iostream>

int main() {
   // File Class

   // Testing Default/Parameterized Constructor
   // try {
   //    File a; // Works
   //    File b("Homework"); // Works
   //    std::cout << a << '\n' << b << '\n';

   //    File c("Homework."); // Doesn't work
   //    // Forgot to decrement iterator, now works.
   //    std::cout << c << '\n';

   //    File d("Homework.."); // Fails as expected.
   //    std::cout << d << '\n';
   // } catch (const InvalidFormatException& e) {
   //    std::cerr << e.what() << std::endl;
   // }

   // // Testing getSize()
   // File a;
   // File b("Homework.txt", "Four");

   // std::cout << a.getSize() << '\t' << b.getSize() << '\n';

   // Testing Copy Constructor
   // File a("Homework.txt", "Content yay");
   // File b(a);
   // std::cout << a << "\n\n" << b << '\n';

   // // Testing Copy Assignment Operator
   // File a;
   // File b("Homework.txt", "Content yay");
   // a = b;
   // std::cout << a << "\n\n" << b << '\n';

   // // Testing Move Constructor
   // File a("Homework.txt", "Content yay");
   // File b(std::move(a));
   // std::cout << a << "\n\n" << b << "\n";

   // // Testing Move Assignment Operator
   // File a("Homework.txt", "Content yay");
   // File b = std::move(a);
   // std::cout << a << "\n\n" << b << "\n";

   // // Testing Destructor
   // {   
   //    int* p = new int[256];
   //    File a("Homework", "Content yay", p);
   // }

}
// DONE: Default/Parameterized Constructor
// DONE: getSize()
// DONE: Copy Constructor
// DONE: Copy Assignment Operator
// DONE: Move Constructor
// DONE: Move Assignement Operator
// DONE: Destructor
// Tested 7/7 File Member Functions

// TODO: getSize();
// TODO: addFile();
// TODO: removeFile();
// TODO: moveFileTo();
// TODO: copyFileTo();
// Tested 0/5 Folder Functions
