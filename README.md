# Cpp-Subarrays-and-Kadane

3 C++ programs on subarrays: printing every subarray, finding the maximum subarray sum by brute force, and solving the same problem with Kadane's algorithm. I wrote all of them myself after the arrays lectures of the Apna College DSA course.

## What these programs practice

- What a subarray is: a continuous part of an array
- Nested loops with a start and an end index
- Solving the same problem in a slower way (brute force) and a faster way (Kadane's algorithm)
- Comparing time complexity: three loops, two loops and one loop

## The programs

| File | What it does | Time complexity |
|---|---|---|
| `array_6_subarray.cpp` | Prints every subarray of an array | O(n³) |
| `array_7_maxsum_bruteforce.cpp` | Maximum subarray sum, trying every start and end and keeping a running sum | O(n²) |
| `array_7_maxsum_kadanesAlgo.cpp` | Maximum subarray sum in one pass, dropping the running sum when it goes below 0 | O(n) |

**Sample: all subarrays of `{1, 2, 3, 4, 5}`** (first few lines)
```
1
1   2
1   2   3
1   2   3   4
1   2   3   4   5
```
The program prints 15 subarrays in total (`n(n+1)/2` for `n = 5`), grouped by starting index.

**Sample: maximum subarray sum of `{3, -4, 5, 4, -1, 7, -8}`** (both versions)
```
Max Subarray sum :- 15
```
The best subarray is `5, 4, -1, 7`.

## How it works

**Brute force:** for every start index, move the end index forward and keep adding to a running sum (`csum`). After each step, remember the largest sum seen. Carrying `csum` forward means no third loop is needed.

**Kadane's algorithm:** walk through the array once, adding each element to `csum`. Update the best sum. If `csum` becomes negative, it can only make later sums smaller, so reset it to 0 and start fresh.

## Run any program

```bash
g++ array_7_maxsum_kadanesAlgo.cpp -o kadane
./kadane
```

On Windows, run `kadane.exe` instead of `./kadane`.

## Known limitations

- **The best sum starts at 0.** If every number is negative (for example `{-3, -1, -2}`), the programs print 0, but the real answer for a non-empty subarray is `-1`. The starting value needs to change before this can be used for LeetCode's Maximum Subarray problem.
- **Hard-coded arrays.** The data is written in the code, and there is no user input or input checking.
- An unused `#include<vector>` in every file, and typos in the printed text ("Approch", "Algorithem").

## What I learned

- Counting the loops tells you how fast a solution will be: three loops is O(n³), two is O(n²), one is O(n).
- Keeping a running value (`csum`) instead of recalculating from scratch makes a solution faster.
- Testing with all-negative numbers can break a program that works on normal inputs.

---

Part of my learning journey: [github.com/HINDOL-2007](https://github.com/HINDOL-2007)
