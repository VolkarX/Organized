# Organized

**⚠️ Disclaimer: This is an Epitech Project ⚠️**
*This repository contains a project built for Epitech. Any reuse, copying, or replication for your own projects is strictly forbidden and may result in penalties for plagiarism (cheat/Cheating).*

## Description

**Organized** is a C program that acts as a small shell loop to manage a hardware inventory or a workshop list. It works hand-in-hand with an internal shell mechanism (`libshell`) to gather user input and dispatch commands.

Items are stored in memory as a linked list, each possessing:
- An **ID** (automatically assigned unique identifier)
- A **Type** (e.g., ACTUATOR, DEVICE, SENSOR, etc.)
- A **Name**

## Requirements

- UNIX-like environment
- `clang` or `gcc` compiler
- `make`

## Compilation

A `Makefile` is provided to compile the project. You can build the project using:

```bash
make
```

Available Make rules:
- `make` or `make all`: Compiles the executable `organized`.
- `make clean`: Removes all temporary files, objects (`.o`), and emacs backups (`*~`).
- `make fclean`: Does the same as `clean` and also removes the binary.
- `make re`: Runs `fclean` then `all` to force a complete recompilation.

## Usage

Simply run the binary:

```bash
./organized
```

Once inside the interactive shell, you can use the supported commands to manage your workshop items.

## Commands

Here are the commands you can use within the `organized` shell:

*   **`add [type] [name]`** : Adds a new material to the workshop inventory. You can chain multiple elements on the same line (e.g., `add SENSOR "Temperature" ACTUATOR "Motor"`).
*   **`del [id]`** : Deletes one or multiple materials from the inventory based on their IDs (e.g., `del 0 1 2`).
*   **`disp`** : Displays the current list of materials stored in the workshop inventory in an organized format.
*   **`sort [criteria] [REV]`** : Sorts the inventory based on one or more criteria (such as `TYPE`, `NAME`, `ID`). You can optionally add `-r` (Reverse) to sort in descending order.

## Exiting

To exit the shell, use the standard `EOF` signal (`Ctrl-D`). Memory allocated during the shell session will be properly freed.
