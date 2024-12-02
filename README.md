# get_next_line: File Reading Utility

This **get_next_line** project is my third project at Codam. `get_next_line()` is a function that returns lines from an open file descriptor one function call at a time. It teaches proper memory management and interaction with files.

## Project Highlights

- **Introduction to Static Variables**: `get_next_line` introduces the use of a static `char *` variable, which maintains state between function calls.
- **File Interaction**: The project teaches how to interact with files using `open()`, `close()`, and understanding how file descriptors work.

## The Project

The **get_next_line** project is organized to facilitate easy integration and use in future projects. It includes:

- **Core Functionality**: The main `get_next_line()` function reads one line at a time from a given file descriptor, handling different buffer sizes ranging from 1 to 5000 characters.
  
- **Memory Management**: Emphasis is placed on efficient memory management, particularly in protecting `malloc()` calls to prevent memory leaks.

### Challenges

Developing **get_next_line** came with several challenges:
- Implementing proper memory management to handle dynamic allocations.
- Ensuring the function returns exactly one line at a time, regardless of buffer size.
- Adhering to the 42 format constraints, which limit the function to 25 lines and 10 functions total for this project.

## Conclusion

**get_next_line** is a project that enhanced my understanding of file I/O in C and improved my memory management skills. It was a good way to learn new concepts of file interactions and will be useful in future Codam projects. For ease of use, I have added this project to my **ft_libft** library.

Feel free to explore the code and use it as a reference or inspiration for your own projects.