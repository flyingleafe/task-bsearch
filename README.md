# task-bsearch
## VK first application task.

### Description
Simple binary search function `binsearch(const int *arr, int len, int x)`
`arr` - pointer to beginning of array
`len` - array length
`x`   - element to search upper bound for.
Searches for maximum element in `arr` larger than `x`, and returns its index. If there's no such elements, returns `-1`

### Testing
`test.cpp` contains a simple C++ program, which compares answer, given by `binsearch` with answer given by `std::upper_bound`.
