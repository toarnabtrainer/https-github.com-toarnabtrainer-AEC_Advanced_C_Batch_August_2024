# AEC_Advanced_C_Batch2_August_2024

* **GitHub Link:** https://github.com/toarnabtrainer/AEC_Advanced_C_Batch2_August_2024 or https://tinyurl.com/5e4zhvyf
* **MS-Teams Link:** https://tinyurl.com/2s3yxjnr

<br>

* **C Tutorials / MCQ / Sample Program List:** https://www.includehelp.com/c-programming-examples-solved-c-programs.aspx
* **C++ Tutorials / MCQ / Sample Program List:** https://www.includehelp.com/cpp-tutorial/
* **C++ Tutorials In Hindi (CodeWithHarry):** https://www.youtube.com/playlist?list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL

<hr>

## Class Assignment:

<pre>
  
LeetCode Problem Number - 136. Single Number
Solution - 1 (1086 ms)
int singleNumber(int* nums, int numsSize) {
    int count, i, j;
    for (i = 0; i < numsSize; i++) {
        count = 0;
        for (j = 0; j < numsSize; j++) {
            if (nums[i] == nums[j]) count++;
        }
        if (count == 1) return nums[i];
    }
    return 0;
}

Solution - 2 (11 ms)
int singleNumber(int* nums, int numsSize) {
    int output = 0, i, j;
    for (i = 0; i < numsSize; i++) {
        output ^= nums[i];
    }
    return output;
}

258. Add Digits (0 ms)
int addDigits(int num) {
    int digit, total = 0;
    while (num != 0) {
        digit = num % 10;
        total += digit;
        num /= 10;
        if (num == 0 && total > 9) {
            num = total;
            total = 0;
        }
    }
    return total;
}
</pre>

<hr>

![image](https://github.com/user-attachments/assets/ba006c60-e0b3-44b4-ae4b-f2e63f0a5881)

<hr>

## Towards Growth and Towards Success

![image](https://github.com/user-attachments/assets/078e5be0-8bfb-457b-8864-4c9fc4fcedf9)


<hr>
