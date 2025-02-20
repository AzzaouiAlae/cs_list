# cs_list

## Overview

**cs_list** is a dynamic array implementation for C inspired by the C# List. It simplifies working with collections by automatically resizing the underlying array as needed. This eliminates the hassle of calculating sizes and manually managing memory allocation.

## Features

- **Dynamic Resizing:** Automatically adjusts its capacity as items are added.
- **Simple API:** Provides easy-to-use functions for adding, inserting, deleting, and searching items.
- **Memory Management:** Handles memory internally so you don't need to worry about manual deallocation.

## When to Use cs_list

Use cs_list when you have a collection of data with an unknown or varying size. Instead of pre-calculating the required memory and managing it manually, cs_list takes care of resizing and memory management for you.

## Memory Management

cs_list manages memory internally (using its own garbage collection mechanism) so that you don't have to explicitly free memory. This makes it easier to focus on your application's logic.

## API Reference

### The cs_list Structure

The cs_list is defined as follows:

```c
typedef struct s_cs_list {
    void    *contate;       // Pointer to the container's memory
    int     size_of_type;   // Size of each element
    int     count;          // Number of items currently stored
    int     capacity;       // Total allocated capacity
    int     free_contate;   // Flag or counter for memory management
} t_cs_list;
```

### Creating a New cs_list

Create a new list by specifying the size of the type you intend to store:

```c
t_cs_list *cs_list_new(int size_of_type);

// Example:
t_cs_list *str = cs_list_new(sizeof(char));
```

### Adding Items

- **Add a Single Item**

```c
void cs_list_add(t_cs_list *list, long item);

// Example:
cs_list_add(str, 'H');
```

- **Add Multiple Items**

```c
void cs_list_add_items(t_cs_list *list, int count, ...);

// Example:
cs_list_add_items(str, 4, 'e', 'l', 'l', 'o');
```

- **Add an Array of Items**

```c
void cs_list_add_range(t_cs_list *list, int count, void *arr);

// Example:
cs_list_add_range(str, 6, " world");
```

- **Add Multiple Arrays of Items**

```c
void cs_list_add_ranges_count_arr(t_cs_list *list, int count, ...);

// Example:
t_cs_list *str2 = cs_list_new(sizeof(char));
char *first_name = "alae";
char *last_name = "azzaoui";
cs_list_add_ranges_count_arr(str2, 3, 
    ft_strlen("hello"), "hello", 
    ft_strlen(first_name), first_name, 
    ft_strlen(last_name), last_name);
```

### Deleting Items

- **Delete an Item at a Specific Index**

```c
void cs_list_delete(t_cs_list *list, int index);

// Example:
cs_list_delete(str2, 0);
```

### Inserting Items

- **Insert an Item at a Specific Index**

```c
void cs_list_insert_at(t_cs_list *list, int index, long item);

// Example:
cs_list_insert_at(str2, 0, 'H');
```

### Searching for Items

- **Check if an Item Exists**

```c
int cs_list_contains(t_cs_list *list, long item);

// Example:
if (cs_list_contains(str2, 'a')) {
    // do something
}
```

## Conclusion

cs_list provides a robust and user-friendly solution for managing dynamic arrays in C. Its automatic resizing and internal memory management make it ideal for applications where the number of elements is unpredictable or variable.

---