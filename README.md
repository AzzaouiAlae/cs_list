# cs_list

## C Sharp list in C
This project cs_list is a clone of the c sharp list
bcause in c there is no easy daynamic array i create this project to simplify the working with collection

## what is cs_list
cs_list is array that daynamicly resize it selfe as needed

## when to use cs_list
cs_list is used when you have a set of data and you don't know it size istad of calculate the size and use allocate memorie you can use cs_list and it will manage the memorie for you

## memorie managment
cs_list is use the garbage collector to manage memorie so you don't need to worry about free

## how to use
first cs_list is a struct

```
typedef struct s_cs_list
{
	void	*contate;
	int		size_of_type;
	int		count;
	int		capacity;
	int		free_contate;
}			t_cs_list;
```





