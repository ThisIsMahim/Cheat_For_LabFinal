<div align="center">
  <div align="left">
    <b>Q NUMBER 1</b>
    
### Radix Sort Steps

Radix sort processes each digit of the numbers starting from the least significant digit (LSD) to the most significant digit (MSD). Here are the steps:

1. **Input List**: 170, 45, 76, 90, 802, 24, 2, 66

2. **Initialize**: Start with the least significant digit (units place).

 Sorting by Units Place (1's place):

1. **Buckets**: Create 10 buckets for each digit (0 to 9).

2. **Distribute**: Place each number in the corresponding bucket based on the units place digit.
   - 170 -> bucket 0
   - 45 -> bucket 5
   - 76 -> bucket 6
   - 90 -> bucket 0
   - 802 -> bucket 2
   - 24 -> bucket 4
   - 2 -> bucket 2
   - 66 -> bucket 6

3. **Collect**: Collect numbers from the buckets in order.
   - Buckets: [170, 90], [802, 2], [24], [45], [76, 66]
   - Sorted order after units place: 170, 90, 802, 2, 24, 45, 76, 66

 Sorting by Tens Place (10's place):

1. **Buckets**: Create 10 buckets for each digit (0 to 9).

2. **Distribute**: Place each number in the corresponding bucket based on the tens place digit.
   - 170 -> bucket 7
   - 90 -> bucket 9
   - 802 -> bucket 0
   - 2 -> bucket 0
   - 24 -> bucket 2
   - 45 -> bucket 4
   - 76 -> bucket 7
   - 66 -> bucket 6

3. **Collect**: Collect numbers from the buckets in order.
   - Buckets: [802, 2], [24], [45], [66], [170, 76], [90]
   - Sorted order after tens place: 802, 2, 24, 45, 66, 170, 76, 90

#### Sorting by Hundreds Place (100's place):

1. **Buckets**: Create 10 buckets for each digit (0 to 9).

2. **Distribute**: Place each number in the corresponding bucket based on the hundreds place digit.
   - 802 -> bucket 8
   - 2 -> bucket 0
   - 24 -> bucket 0
   - 45 -> bucket 0
   - 66 -> bucket 0
   - 170 -> bucket 1
   - 76 -> bucket 0
   - 90 -> bucket 0

3. **Collect**: Collect numbers from the buckets in order.
   - Buckets: [2, 24, 45, 66, 76, 90], [170], [802]
   - Sorted order after hundreds place: 2, 24, 45, 66, 76, 90, 170, 802

Final Sorted List:
2, 24, 45, 66, 76, 90, 170, 802

### Summary

Radix sort works by sorting the numbers digit by digit starting from the least significant digit to the most significant digit. At each step, the numbers are distributed into buckets based on the current digit, and then collected in order to form a new list, which is then processed in the next step. The process continues until all digits are processed, resulting in a fully sorted list.


</div>




<div align="left">
  <b>Q NUMBER 2</b>
  
  ###Binary Search Algorithm

Input:
  
A sorted array arr of n elements
The target value x to search for
Output:

The index of x in arr if present, otherwise -1

###Algorithm:


Initialize:

low ← 0

high ← n - 1

Repeat while low ≤ high:

Calculate the middle index: mid ← (low + high) / 2 (use integer division)

If arr[mid] == x:
  Return mid

Else if arr[mid] < x:
  low ← mid + 1

Else:
  high ← mid - 1

End loop:

If low > high, return -1


##Pseudocode:

    function binarySearch(arr, n, x):
      low ← 0
      high ← n - 1

    while low ≤ high do:
        mid ← (low + high) // 2
        if arr[mid] == x then:
            return mid
        else if arr[mid] < x then:
            low ← mid + 1
        else:
            high ← mid - 1

    return -1

</div>
</div>
</div>
