# get_next_line

# 👀 Project overview
The "Get Next Line" project is a C programming task focused on developing a function to read content from a file descriptor line by line. This project emphasizes the use of static variables and offers a deep dive into file handling in C.

# How It Works
The primary goal is to create a function get_next_line which takes a file descriptor as an input and returns the next line from the file or stream. The function continues to return a new line upon each call until the end of the file is reached.

Function Prototype:
```
char *get_next_line(int fd);
```

# 💡 Key Features
- ***Line-by-Line Reading***: Efficiently reads and returns one line at a time from the file.
- ***Memory Management***: Dynamically allocates and frees memory to store each line read from the file.
- ***Static Variables***: Utilizes static variables to maintain the state between function calls.
- ***Multiple File Descriptors***: Capable of handling multiple file descriptors simultaneously without losing track of their read positions.

# 🧱 Implementation Challenges
- ***Buffer Management***: Implementing an optimal buffer size for reading, which is defined at compile time with -D BUFFER_SIZE=n.
- ***Static Variable Usage***: Learning to correctly use static variables to maintain the state of reading between multiple function calls.
- ***Error Handling***: Robust error handling to account for various edge cases, such as empty lines or unexpected file changes.

# 🛠 Compilation and Usage
Compile the program using the following command (example with a buffer size of 42):

```
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c
```
To use `get_next_line` in your C program:

- Include the header file: ``` #include "get_next_line.h" ```.
- Call the function with a valid file descriptor.

# 📚 Key Learnings
- ***File Descriptor Management***: Gained insights into handling file I/O in C.
- ***Static Variables***: Understood the usage and scope of static variables in C.
- ***Dynamic Memory Allocation***: Enhanced skills in dynamic memory allocation and deallocation.
