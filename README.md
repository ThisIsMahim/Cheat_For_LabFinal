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
<div align="left">



  <b>Q3 </b>
Search Algorithm for a Linked List

  Input:

A pointer to the head node of the linked list (head)
The value to search for (value)

  Output:
A pointer to the node containing the value if found, otherwise NULL

  ###Algorithm:


1.Initialize:
    Set a pointer current to the head of the linked list (head).
  
2.Traverse the Linked List:
  
  i.Repeat while current is not NULL:

    If the value of current is equal to the target value:
    Return current.
  
    Move current to the next node (current = current->next).

3.End of List:
    
    If the loop terminates without finding the value, return NULL to indicate the value is not present in the linked list.


Pseudocode:
  
      function searchLinkedList(head, value):
    current ← head

    while current ≠ NULL do:
        if current.value == value then:
            return current
        current ← current.next

    return NULL

</div>
<div align="left">


  Q4



  
###Algorithm to Create a Circular Linked List




1.Input:

    -An array of values arr
    
    -The size of the array n
Output:

    -A pointer to the head node of the newly created circular linked list

####Algorithm:


1.Check for Empty Input:

      -If n is 0, return NULL.
2.Create the Head Node:

      -Create a new node with the value arr[0].
      -Set head to point to this new node.
      -Set current to head.
3.Create Remaining Nodes:

    For each value from arr[1] to arr[n-1]:
      Create a new node with the current value.
      Set current->next to point to this new node.
      Move current to this new node.
4.Make the List Circular:

      Set current->next to head to link the last node back to the head.
5.Return the Head:

      Return head.
Pseudocode:

    function createCircularLinkedList(arr, n):
      if n == 0 then
        return NULL

      head ← new Node(arr[0])
      current ← head

      for i ← 1 to n-1 do:
        newNode ← new Node(arr[i])
        current.next ← newNode
        current ← newNode

      current.next ← head
      return head
</div>

</div>
</div>
