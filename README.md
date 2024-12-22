# Freeing a Non-Dynamically Allocated Pointer in C

This repository demonstrates a common error in C programming: attempting to free a pointer that was not allocated using `malloc`, `calloc`, or similar dynamic memory allocation functions. This can lead to undefined behavior and program crashes.  The `bug.c` file contains the erroneous code, while `bugSolution.c` provides the corrected version.

**Problem:**
The `main` function in `bug.c` assigns the address of a local variable `x` to a pointer `ptr`.  Then it attempts to free this pointer using `free()`, which is incorrect.  Local variables are allocated on the stack and do not need to be explicitly freed. Attempting to free stack memory leads to undefined behavior.