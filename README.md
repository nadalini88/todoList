# To-Do List (C++ Console Application)

This is a simple C++ console application that implements a basic to-do list manager. It allows users to add, view, edit, and remove tasks through a text-based interface.

## Features

* Add tasks to a dynamic list
* View all current tasks
* Edit the description of an existing task
* Remove tasks by their index
* Graceful program termination

## Getting Started

### Prerequisites

* C++11 or later
* A C++ compiler such as `g++` or `clang++`

### Compilation

To compile the program using `g++`:

```bash
g++ -std=c++11 -o todo main.cpp
```

### Usage

Run the executable:

```bash
./todo
```

Follow the on-screen instructions to manage your to-do list.

## Code Structure

* `main.cpp` — Contains the complete logic for user input handling, task management, and output formatting.

### Menu Options

```
1. Add item
2. Show task
3. Edit item
4. Remove item
5. Exit
```

Each option is interactive and uses standard input/output for simplicity and portability.

## Limitations

* Tasks are stored in memory only (no persistence between runs)
* No input validation for non-integer menu entries
* Minimal error handling (only basic range checking)

## License

This project is provided for educational purposes and is licensed under the MIT License.

---

Let me know if you want to add sections like testing, contribution guidelines, or integration into larger systems.
