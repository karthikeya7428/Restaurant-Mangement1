# Restaurant Management System (Menu Category Tree - CRUD)
gg
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

<img width="279" height="97" alt="Screenshot 2026-04-05 at 12 32 29 AM" src="https://github.com/user-attachments/assets/c3e2665f-b442-437d-965a-d2271d644ac4" />


<img width="266" height="39" alt="Screenshot 2026-04-05 at 12 34 38 AM" src="https://github.com/user-attachments/assets/5bb3730a-f8f6-42bc-9b58-d1b38d0a8055" />


<img width="274" height="135" alt="Screenshot 2026-04-05 at 12 34 47 AM" src="https://github.com/user-attachments/assets/abca4412-077f-4508-80d4-9bdd94b360a9" />


<img width="292" height="129" alt="Screenshot 2026-04-05 at 12 34 58 AM" src="https://github.com/user-attachments/assets/595d3d89-f866-4de9-9689-0059583a5116" />


<img width="328" height="155" alt="Screenshot 2026-04-05 at 12 35 16 AM" src="https://github.com/user-attachments/assets/bb1d6c88-a2fd-4b7f-88e8-fdfebd54d3eb" />


<img width="287" height="197" alt="Screenshot 2026-04-05 at 12 35 31 AM" src="https://github.com/user-attachments/assets/2688a1ae-d798-483f-bd26-586bec43cfc5" />


<img width="414" height="132" alt="Screenshot 2026-04-05 at 12 35 45 AM" src="https://github.com/user-attachments/assets/41563bc3-394b-4e5f-9deb-96ea5f12631d" />
