The program is designed to analyse complexity of sorting algorithms by counting operations needed to sort given set. The user chooses sorting algorithms, input format and size.

# Usage
After ther program is run the following output is presented:

    Chose sorting algorithms. Type:
    <1> for bubble sort
    <2> for quick sort
    <3> for insertion sort
    <4> for merge sort
    <5> for counting sort
    <6> for heap sort
    <7> for shell sort

For example to choose quick sort and insertion sort the user should type *23* and press *return*.

Next input formating is chosen analogically:

    Chose input types. Type:
    <1> for sorted
    <2> for random
    <3> for backward sorted
    <4> for sorted with random first value
    <5> for sorted backward with random last value
    
Next the user is asked to enter input size, step and number of iterations.
The program will prepare input of given size, sort it, increment input size by value defined as step and repeat the process for given number of iterations.

The data is stored in *.csv files separate for each sorting algorithm chosen.
Data format is as follows:
| BubbleSort | Sorted | Random | BackwardSorted
| ---------- | ------ | ------ | ------------- |
| 100 | 298 | 29356	 | 39700 |
200 | 598 | 127796 | 159400 |
300 | 898 | 291710 | 359100
400 | 1198 | 545292 | 638800
500 | 1498 | 837452 | 998500
600	 | 1798 | 1233336 | 1438200
700 | 2098 | 1654758 | 1957900
800 | 2398 | 2206788 | 2557600
900 | 2698 | 2744034 | 3237300
1000 | 2998 | 3346612 | 3997000
1100 | 3298 | 4145160 | 4836700
Where the first column contains input size and the ramaining ones number of operations for given input format.
