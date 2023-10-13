# CJourney Notes

## Chapter 1: Introduction to C Programming

**Summary:**
Chapter 1 introduces the fundamental concepts of C programming. It covers the basics of programming, types of programming languages, and specifically dives into the characteristics and significance of the C programming language. The chapter guides you through setting up a development environment, writing your first C program, and compiling/running it. By the end, you'll have a foundational understanding of C and the ability to execute your own programs.

**Key Concepts to Highlight:**
1. **Programming Basics:**
   - Definition of programming.
   - The role of humans in instructing computers.
   - Introduction to the concept of a program.

2. **C Language Characteristics:**
   - C as a general-purpose and procedural language.
   - The procedural approach in C programming.
   - Significance of C in systems programming and Unix development.

3. **Setting Up a Development Environment:**
   - Requirements for writing C programs.
   - Importance of a C compiler and Visual Studio Code as an IDE.

4. **Writing Your First C Program:**
   - Overview of the main components of a simple C program.
   - Explanation of the `#include` directive for header files.
   - Introduction to the `main()` function.
   - Use of comments in C for code documentation.
   - Explanation of the `printf()` function for output.
   - Introduction to escape sequences in C.

5. **Compiling and Running Your First C Program:**
   - Overview of the compilation process (preprocessing, compilation, assembling, linking).
   - Commands for compiling and running a C program using GCC.
   - Explanation of the default executable file (`a.out`) and customization using the `-o` option.

**Folder Name for Reference:**
    `chapter_1`.

**Writing Your First C Program: A Student's Guide 🚀**

So, you've embarked on the exciting journey of learning C programming, and Chapter 1 has unveiled the magic of crafting your very first C program. Let's break it down like a friend sharing their newfound wisdom:

1. **Setting the Stage:**
   - Your C adventure starts with creating a folder (let's call it `c-practice` or `chapter_1`) to house your coding escapades. Think of it as your programming playground.

2. **The Star of the Show: `main.c`:**
   - Inside this folder, you've created a file named `main.c`. This is where the magic happens, your code canvas, if you will.

3. **Hello, World! - The Icebreaker:**
   - Open `main.c` in Visual Studio Code (our coding sanctuary) and pour in this piece of brilliance:
     ```c
     #include <stdio.h>

     int main(void) {
       // output 'Hello, world!' to the console
       printf("Hello, world!\n");
     }
     ```
   - What's happening here? You're saying "Hey computer, include some cool stuff (like `stdio.h` for printing magic), and when you run, shout out 'Hello, world!' to the console!"

4. **Comments: Whispering to Your Future Self:**
   - Imagine leaving little notes to yourself. In C, we use `//` for short notes and `/* */` for more elaborate ones. Like:
     ```c
     // I'm a single-line comment

     /*
        I am a multi-line comment
        spanning multiple lines,
        just like my dreams.
     */
     ```
   - These comments are your secret messages. Helpful for you and any curious coder who might peek at your masterpiece.

5. **Compile & Run Ritual:**
   - With your code ready, it's showtime! In the terminal, type:
     ```bash
     gcc main.c
     ```
   - This summons the compiler (`gcc`) to transform your human-readable code into computer-friendly instructions. Then, behold:
     ```bash
     ./a.out
     ```
   - Your computer shouts back, "Hello, world!" (or whatever you told it to shout).

6. **Fancy Custom Names (Optional):**
   - Want to name your program something other than the default `a.out`? You can! It's like giving your program a superhero alias. For instance:
     ```bash
     gcc -o helloWorld main.c
     ```
     Then run it with:
     ```bash
     ./helloWorld
     ```
   - Your computer complies, and your customized hero takes the stage.

**In Conclusion:**
Your `main.c` is the script, your code comments are the stage directions, and the compiler is the backstage wizard making it all happen. Compile, run, marvel at the result - you've just birthed your first C program! 🌟

Feel free to revisit this guide whenever you want to relive the magic. Happy coding, intrepid learner! 🚀✨

**Code Snippets for Comments:**
```c
// This is a single-line comment in C

/*
   This is
   a multi-line
   comment
*/
```

**Screenshots:**
![C/C++ extension](https://github.com/Adebowale-Morakinyo/CJourney/blob/main/chapter_1/Highlights/setup_extension.png)
*Caption: A screenshot of a c/c++ extension installed in VScode.*

![Terminal Shot](https://github.com/Adebowale-Morakinyo/CJourney/blob/main/chapter_1/Highlights/terminal_output.png)
*Caption: Terminal commands and outputs for compiling and running the C program.*

### Chapter 1 Highlights

| Low-level Language | High-level language | Middle-levl Language | C Language | Requirements | Comments: Whispering to My Future Self |
| ------------------ | -------------------- | ------------------------------ | ---------------------------------------- | -------------------- | ----------------------------- |
| ![Low-level Language](https://github.com/Adebowale-Morakinyo/CJourney/blob/main/chapter_1/Highlight/c1_h1.png) | ![High-level language](https://github.com/Adebowale-Morakinyo/CJourney/blob/main/chapter_1/Highlight/c1_h2.png) | ![Middle-levl Language](https://github.com/Adebowale-Morakinyo/CJourney/blob/main/chapter_1/Highlight/c1_h3.png) | ![C Language](https://github.com/Adebowale-Morakinyo/CJourney/blob/main/chapter_1/Highlight/c1_h4.png) | ![Requirements](https://github.com/Adebowale-Morakinyo/CJourney/blob/main/chapter_1/Highlight/c1_h5.png) | - |

## Chapter 2: Variables and Data Types in C

### Key Concepts
- **Data Types:** Overview of different data types in C.
- **Variable Declaration:** Understanding how to declare variables.

### Code Snippets
```c
// Your code snippets and examples here
```

### Screenshots
![Variable Declaration](link_to_screenshot.png)
*Caption: A screenshot of a code snippet demonstrating variable declaration.*

---

## Chapter 3: Operators in C

### Key Concepts
- **Arithmetic Operators:** Summary of arithmetic operations in C.
- **Logical Operators:** Explanation of logical operations.

### Code Snippets
```c
// Your code snippets and examples here
```

### Text Notes
- Quick textual notes or insights.

---

<!-- Repeat the above structure for each chapter -->

```
