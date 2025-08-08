# 1337 Piscine 2024 — Learning Journey

This repository documents my progress through the **1337 Piscine** (C00 → C09, and Shell00 → Shell01). Each section explains what the project is about, the *things to learn*, beginner-friendly resources (with links), and small pointers to help you visualise or debug code.

---

## Table of Contents
- Shell projects
  - Shell00
  - Shell01
- C projects
  - C00 → C09 (each project explained)
- Visualization & Debugging Tools
- Final tips

---

# 🖥 Shell Projects

### **Shell00**
**About:**  
Intro to the Unix shell and basic file-system manipulation. Learn how to move around and inspect the system safely — this is the practical foundation for everything that follows.

**Key learnings:**
- Basic Unix commands: `ls`, `cd`, `pwd`, `cat`, `touch`, `mkdir`, `rmdir`, `rm`.
- File permissions: `chmod`, `chown`, `stat` and understanding rwx bits.
- Hidden files and `.dot` files.
- **Symbolic & hard links**: how to create and inspect them (`ln -s`, `ln`, `readlink`, `stat`).
- File metadata and timestamps (`stat`, `ls -l`, `stat -c`).
- Redirects and pipes basics used later in scripting.

**Things to practice / mini-challenges:**
- Create a symbolic link to a file and confirm it points to the same inode or file content.
- Use `readlink -f` to resolve nested symlinks.
- Use `stat` and `ls -i` to compare inodes for hard vs symbolic links.

**Resources (beginners):**
- [ExplainShell — break down shell commands](https://explainshell.com/)
- [GNU Coreutils Manual](https://www.gnu.org/software/coreutils/manual/coreutils.html) — reference for `ls`, `ln`, `stat`, etc.
- [LinuxCommand.org — basic shell tutorial & cheatsheet](https://linuxcommand.org/)

---

### **Shell01**
**About:**  
Intermediate shell usage and simple scripting: learn to chain commands, manipulate streams, and use environment variables.

**Key learnings:**
- Shell scripting basics (`#!/bin/sh`, executable scripts).
- Pipes and redirections (`|`, `>`, `>>`, `<`, `2>`).
- Environment variables and exporting (`export`, `$PATH`).
- Search and filter tools: `grep`, `find`, `awk`, `sed` (basic usage).
- Text tools: `head`, `tail`, `cut`, `sort`, `uniq`, `wc`.

**Mini-challenges:**
- Write a small script that lists files modified in the last 24 hours and saves to a file.
- Use `grep` + `awk` to extract a column from command output.

**Resources:**
- [Bash Guide for Beginners (TLDP)](https://tldp.org/HOWTO/Bash-Prog-Intro-HOWTO.html)
- [ShellCheck — online linter for shell scripts](https://www.shellcheck.net/)
- [GNU `find` manual (reference)](https://www.gnu.org/software/findutils/manual/find.html)

---

# 🖋 C Projects

> **Note:** These descriptions are intentionally concise. Each project focuses on low-level understanding and hands-on practice with C language fundamentals.

### **C00**
**About:**  
C fundamentals and using system calls / write-only style expected at 42 (minimal standard library use).

**Key learnings:**
- `main()` and program structure.
- Compilation with `gcc` and flags (`-Wall -Wextra -Werror`).
- Using `write()` for output and understanding file descriptors.
- Simple functions, prototypes, and control flow.

**Resources:**
- `write()` man page: [man7 — write(2)](https://man7.org/linux/man-pages/man2/write.2.html)
- `gcc` documentation: [GCC online docs](https://gcc.gnu.org/onlinedocs/)

---

### **C01**
**About:**  
Control structures and flow.

**Key learnings:**
- `if`, `else`, `for`, `while`, and loop control.
- Simple integer & char operations.
- Defensive coding and edge-case thinking.

**Resources:**
- [TutorialsPoint — C Programming Tutorial](https://www.tutorialspoint.com/cprogramming/index.htm)
- [Programiz — C Programming](https://www.programiz.com/c-programming)

---

### **C02**
**About:**  
Strings and manual implementations of common helpers.

**Key learnings:**
- C strings (`char[]`) and `'\0'` handling.
- Implement `strlen`, `strcpy`, `strncpy`-like behavior by hand.
- Character classification via ASCII values.

**Resources:**
- [Programiz — C strings](https://www.programiz.com/c-programming/c-strings)
- [ASCII table reference](https://www.asciitable.com/)

---

### **C03**
**About:**  
String operations: comparisons and concatenation.

**Key learnings:**
- Implementing `strcmp`, `strncmp`, `strcat` logic.
- Working with pointers and pointer arithmetic for string traversal.

**Resources:**
- [GeeksforGeeks — Pointers in C](https://www.geeksforgeeks.org/c-pointers/)
- [CProgramming.com — strings & pointers tutorials](https://www.cprogramming.com/tutorial/c/lesson6.html)

---

### **C04**
**About:**  
Number printing and small utilities.

**Key learnings:**
- Implement `putnbr`-like functions.
- Handle integer edge cases (negative numbers, INT_MIN).
- Recursion may appear here for printing digits (but more explicit in C05).

**Resources:**
- [Programiz — Recursion in C](https://www.programiz.com/c-programming/c-recursion)
- Example edge-case explanations: [C Integer Limits — cppreference](https://en.cppreference.com/w/c/types/integer)

---

### **C05**
**About:**  
Algorithms & recursion. This project often focuses on recursive solutions and numerical manipulation.

**Key learnings:**
- **Recursion**: factorials, recursive traversal, recursive print routines.
- Basic algorithms: primality checks, iterative vs recursive thinking.
- **Number bases & conversions**: understanding binary (base-2), decimal (base-10), and converting to/from other bases (e.g., base-11, base-16). Practice implementing base conversion routines (`itoa`-style).
- Small numeric helpers (power functions, integer sqrt approximations).

**Resources:**
- [Programiz — Recursion in C (clear examples)](https://www.programiz.com/c-programming/c-recursion)
- [GeeksforGeeks — Convert number from one base to another](https://www.geeksforgeeks.org/program-convert-base-decimal-number/)
- [Wikipedia — Positional numeral system (background on bases)](https://en.wikipedia.org/wiki/Positional_notation)

---

### **C06**
**About:**  
Working with program arguments and simple sorting / manipulation tasks.

**Key learnings:**
- `argc` and `argv`: parsing command-line arguments and handling edge cases.
- Iterating over `argv[]`, sorting / comparing strings passed as arguments.
- Using arguments to influence program behavior (flags, input values).

**Resources:**
- [GeeksforGeeks — Command-line arguments in C/C++](https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/)
- [GNU `getopt` manual (if you use it later)](https://www.gnu.org/software/libc/manual/html_node/Getopt.html)

---

### **C07**
**About:**  
Dynamic memory & arrays.

**Key learnings:**
- `malloc`, `calloc`, `free` and writing leak-free code.
- Dynamic arrays and pointer management.
- `atoi` / manual number parsing techniques.

**Resources:**
- [TutorialsPoint — Dynamic memory allocation in C](https://www.tutorialspoint.com/cprogramming/c_dynamic_memory_allocation.htm)
- [Valgrind — quick start & docs](https://valgrind.org/docs/manual/quick-start.html)

---

### **C08**
**About:**  
Header files, `struct`s and modular code.

**Key learnings:**
- Creating and using `.h` header files.
- `struct` definitions and typedefs.
- Splitting code across multiple `.c` and `.h` files and avoiding circular includes.

**Resources:**
- [Programiz — Structures in C](https://www.programiz.com/c-programming/c-structures)
- [GeeksforGeeks — Header files in C](https://www.geeksforgeeks.org/header-files-c/)

---

### **C09**
**About:**  
Makefiles and building multi-file programs.

**Key learnings:**
- Writing `Makefile`s (rules, dependencies, phony targets).
- Organizing larger projects with multiple compilation units.
- Linking and compiler flags.

**Resources:**
- [Makefile Tutorial — learn with examples](https://makefiletutorial.com/)
- [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)

---

# 🛠 Visualization & Debugging Tools

These helped me visualise, debug, and understand what the code actually does:
- [Python Tutor (C mode) — step-by-step execution visualiser](https://pythontutor.com/c.html)
- `gdb` — [GDB documentation & manual](https://sourceware.org/gdb/current/onlinedocs/gdb/)
- [OnlineGDB — online compiler & debugger](https://www.onlinegdb.com/)

---

# 📚 Final Tips
- **Practice daily.** Small, consistent progress beats cramming.
- **Read man pages** and understand what a function/system call does.
- **Write small tests** for every function you implement.
