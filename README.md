# push_swap

## Description

`push_swap` is a sorting algorithm project from the 42 curriculum. The goal is to sort a stack of integers using a limited set of operations, in as few moves as possible, using two stacks — `a` and `b`.

The program reads a list of integers as arguments, outputs the sequence of operations needed to sort stack `a` in ascending order, then exits. If the input is already sorted, nothing is printed.

## Available operations

| Operation | Effect                                       |
| --------- | -------------------------------------------- |
| sa        | Swap the top 2 elements of stack a           |
| sb        | Swap the top 2 elements of stack b           |
| ss        | sa and sb simultaneously                     |
| pa        | Push the top element of stack b onto stack a |
| pb        | Push the top element of stack a onto stack b |
| ra        | Rotate stack a upward (top becomes bottom)   |
| rb        | Rotate stack b upward                        |
| rr        | ra and rb simultaneously                     |
| rra       | Reverse rotate stack a (bottom becomes top)  |
| rrb       | Reverse rotate stack b                       |
| rrr       | rra and rrb simultaneously                   |

All operations act on the top of the stack.

## Compilation

```bash
make        # build push_swap
make clean  # remove object files
make fclean # remove object files and binary
make re     # full rebuild
```

## Usage

```bash
./push_swap 3 1 2
./push_swap "5 4 3 2 1"
./push_swap 42 -7 0 100 -3
```

## Checker usage

```bash
./push_swap 3 1 2 | ./checker 3 1 2
```

## Optional flags (extensions, not part of the mandatory subject)

```bash
./push_swap --simple   3 1 2
./push_swap --medium   3 1 2
./push_swap --complex  3 1 2
./push_swap --adaptive 3 1 2
./push_swap --bench    3 1 2
```

## Error handling

* If input is invalid (non-numeric values, duplicates, overflow), the program prints:

```bash
Error
```

* Output is written to standard error.

## Algorithms

### Simple sort (O(n²))

Used for small inputs (≤ 5 elements).

### Medium sort (O(n √n))

Chunk-based sorting strategy for medium inputs.

### Complex sort (O(n log n))

Radix sort using binary representation.

### Adaptive sort (default)

Automatically selects the best algorithm based on input size.

## Complexity

* Simple sort: O(n²)
* Medium sort: O(n √n)
* Complex sort: O(n log n)

## Testing

### Basic test

```bash
ARG="5 3 1 4 2"
./push_swap $ARG | ./checker $ARG
```

### Random test (100 elements)

```bash
ARG=$(ruby -e "puts (1..100).to_a.shuffle.join(' ')")
./push_swap $ARG | ./checker $ARG
```

### Operation count

```bash
./push_swap $ARG | wc -l
```

## Contribution

This project was created by:

* agaleksa
* ssaghate

## Learning outcome

This project helped to understand:

* stack data structures
* sorting algorithms
* algorithm optimization
* memory management in C
* working with limited operations

## AI usage

AI tools were used for:

* code review
* debugging assistance
* test case generation

The final implementation was fully understood and verified manually.
