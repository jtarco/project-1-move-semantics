#include "File.hpp"
#include "Folder.hpp"
#include "InvalidFormatException.hpp"
#include <iostream>
#include <cassert>
#include <string>

int main() {
   // File Class

   // Testing Default/Parameterized Constructor
   // try {
   //    // File a; // Works
   //    // File b("Homework"); // Works
   //    // std::cout << a << '\n' << b << '\n';

   //    // File c("Homework."); // Doesn't work
   //    // // Forgot to decrement iterator, now works.
   //    // std::cout << c << '\n';

   //    // File d("Homework.."); // Fails as expected.
   //    // std::cout << d << '\n';

   //    File e(""); // Failed to account for ""
   //    std::cout << e << '\n';
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

   // // Testing Deep Copy Of Copy Constructor and Assignment
   // int* p = new int[256];
   // for (int i = 0; i < 256; i++) {
   //    p[i] = i + 1;
   //    std::cout << p[i] << "\n";
   // }
   // File a("a", "content", p);
   // File b(a);
   // File c = a;
   // int* d = b.getIcon();
   // int* e = c.getIcon();
   // for (int i = 0; i < 256; i++) {
   //    std::cout << d[i] << "\t" << e[i] << "\n"; 
   // }

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

   // Folder
   
   // Testing getSize() and addfile() Works as expected
   // File a("Hi.txt", "Four");
   // File b("Hola.txt", "Four");
   // Folder c;
   // assert(c.addFile(a) == true);
   // assert(c.addFile(b) == true);
   // assert(c.addFile(b) == false);
   // assert(c.getSize() == 8);
   // c.display();

   // Testing removeFile()
   // File a("Que.txt", "Four");
   // // std::cout << a.getName() << std::endl;
   // File b("No.txt");
   // Folder c;
   // c.addFile(a);
   // // c.display();
   // // std::cout << a.getName() << "\t" << b.getName() << "\n";
   // assert(c.removeFile("Que.txt") == true);
   // assert(c.removeFile("No.txt") == false);

   // Testing moveFileTo();
   // Folder source("s");
   // Folder destinatio("d");
   // File a("One");
   // File b("Two");
   // source.addFile(a);
   // source.addFile(b);
   // destinatio.addFile(b);
   // // assert(source.moveFileTo("One", source) == true);
   // // assert(source.moveFileTo("One", destination) == true);
   // assert(source.moveFileTo("Two", destinatio) == false);
   // // assert(source.moveFileTo("Two", destination) == false);
   // source.display();
   // destinatio.display();

   // // Testing copyFileTo()
   // Folder source("source");
   // Folder destination("destination");
   // File one("1.bf");
   // File two("2.bf");
   // File three("3.bf");
   // File four("4.bf");
   // source.addFile(one);
   // source.addFile(two);
   // source.addFile(three);
   // destination.addFile(four);
   // // source.display();
   // // std::cout << "\n";
   // // source.copyFileTo("1.bf", destination);
   // // source.copyFileTo("2.bf", destination);
   // // source.copyFileTo("3.bf", destination);
   // assert(source.copyFileTo("4.bf", destination) == false);
   // assert(destination.copyFileTo("4.bf", source) == true);
   // source.display();
   // std::cout << "\n";
   // destination.display();

}
// DONE: Default/Parameterized Constructor
// DONE: getSize()
// DONE: Copy Constructor
// DONE: Copy Assignment Operator
// DONE: Move Constructor
// DONE: Move Assignement Operator
// DONE: Destructor
// Tested 7/7 File Member Functions

// DONE: getSize();
// DONE: addFile();
// DONE: removeFile();
// DONE: moveFileTo();
// DONE: copyFileTo();
// Tested 5/5 Folder Functions
