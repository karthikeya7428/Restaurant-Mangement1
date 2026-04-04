# Restaurant-Mangement1

# Restaurant Management System (Menu Category Tree - CRUD)

## Project Overview

This project implements a **Restaurant Menu Management System** using the C programming language. It uses a **tree data structure (First Child–Next Sibling)** to represent hierarchical menu categories. The system supports basic **CRUD operations** through a menu-driven interface.



##  Team Members

* V Karthikeya
* S Harsha Vardhan



##  Problem Statement

Managing restaurant menu categories manually is difficult when there are multiple levels (e.g., Food → Drinks → Juice). This project solves the problem by organizing categories using a **tree structure**.



##  Real-world Application

- Restaurant and hotel menu systems
- Food delivery platforms
- Online ordering systems



##  Data Structure Used

Tree (First Child – Next Sibling Representation)


## Algorithm Explanation
Add Category
If tree is empty, create root
Otherwise, find parent and insert as child/sibling
Delete Category
Search for the node
Remove it and free memory
Update Category
Search node and modify its name
Display Menu
Traverse tree recursively and print hierarchy
Search Category
Use recursive traversal to find node


## Compilation Instructions
Follow these steps to compile and run the program:
Open terminal / command prompt
Navigate to the source folder
cd src
Compile the program
gcc 1.c 
Run the program
./a.out



##  Features (CRUD Operations)

 - Add Category (Create)
 - Display Menu (Read)
 - Update Category (Update)
 - Delete Category (Delete)
 - Search Category



##  Technology Used

- Language: C
- Concepts: Structures, Pointers, Trees
- Memory: Dynamic Allocation (`malloc`, `free`)

## How to run 
```bash
gcc 1.c
./a.out
```




## Sample Output

```
- Food
  - Starters
  - Drinks
    - Juice
```


##  Conclusion

This project demonstrates how tree data structures can be used to efficiently manage hierarchical data in real-world applications

## Screenshots

<img width="279" height="97" alt="Screenshot 2026-04-05 at 12 32 29 AM" src="https://github.com/user-attachments/assets/8426f3b1-93f6-47ff-8992-d7cf7a973c2b" />



<img width="266" height="39" alt="Screenshot 2026-04-05 at 12 34 38 AM" src="https://github.com/user-attachments/assets/2ca69281-2436-4fde-a976-6441a0aa9f71" />

<img width="274" height="135" alt="Screenshot 2026-04-05 at 12 34 47 AM" src="https://github.com/user-attachments/assets/7e4e72a7-df4e-4080-94df-257bc0e9aa27" />

<img width="292" height="129" alt="Screenshot 2026-04-05 at 12 34 58 AM" src="https://github.com/user-attachments/assets/6a5f1a89-ecdf-4188-b670-3fd0ee936b77" />

<img width="328" height="155" alt="Screenshot 2026-04-05 at 12 35 16 AM" src="https://github.com/user-attachments/assets/9c5aea6d-5336-45a0-acc1-29c519d11dbb" />

<img width="287" height="197" alt="Screenshot 2026-04-05 at 12 35 31 AM" src="https://github.com/user-attachments/assets/b10b6058-b5bc-4472-a21f-fe5adfa413ec" />

<img width="414" height="132" alt="Screenshot 2026-04-05 at 12 35 45 AM" src="https://github.com/user-attachments/assets/d61d1930-bb99-4e79-8abd-61b5ba5b479c" />

