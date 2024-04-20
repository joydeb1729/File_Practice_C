
# **file practise question in C**

@author_Durjay1729
Github: https://github.com/durjay1729/



## 1. Write a C program to read numbers from a file and write even, odd and prime numbers to three separate file.

input->
```
73771782	81296771	79982326	75332246	10128193
81643413	76259734	94432076	50063976	91748657
42311916	-1920042	90747362	53851612	43498487
73193311	96685173	39019033	8630045		59322952
```


Output->

even.txt
```
73771782
79982326
75332246
76259734
94432076
50063976
42311916
-1920042
90747362
53851612
59322952
59322952
```

odd.txt
```
81296771
81643413
91748657
43498487
96685173
8630045
```

prime.txt
```
10128193
73193311
39019033
```

---

## 2. Write a C program to compare two files.

input ->
File1.txt
```
Learn C programming at KU.
Working with files and directories.
```
File2.txt ->
```
Learn C programming at KU.
Working with chatgpt and copilot.
```

Output->
```
Files are not equal.
Line: 2, column: 14
```

---

## 3. Write a C program to copy contents from one file to another file.

---

## 4. Write a C program to count characters, words and lines in a text file.

input->
```
I love   programming.
Working   with files in C programming is fun.
I am learning  C  programming   at KU.
```

Output->
```
Total characters = 106
Total words      = 18
Total lines      = 3
```

---

## 5. Write a C program to remove a word from text file.

file.txt
```
I love programming.
Programming with MM Sir is fun.
Learning C programming at KU is simple and easy.
```

Take input from user.

---

## 6. Write a C program to remove specific line from a text file.

file.txt
```
I love programming.
Programming with MM Sir fun.
Learning C programming at KU is simple and easy.
```

take input from User

---

## 7. Write a C program to remove empty lines from a text file.

file.txt
```
I love programming.



Programming with files  fun.

Learning C programming at Codeforwin  simple and easy.
```

---

## 8. Write a C program to find and replace a word in a text file.

file.txt
```
I love programming.
Programming with files is fun.
Learning C programming at KU is simple and easy.
```

replace "file" with "chatgpt"

---

## 9. Write a C program to count occurrences of all words in a text file.

file.txt
```
I love programming.
Programming with files is so fun.
Learning C programming at KU is so simple and easy.
```

take input from User

---

## 10. Write a C program to convert uppercase to lowercase character and vice versa in a text file.

file.txt
```
I love programming.
---------PROGRAMMING IN C---------
Learning C programming at KU is simple and easy.
```

output->
```
i LOVE PROGRAMMING.
---------programming in c---------
lEARNING c PROGRAMMING AT ku IS SIMPLE AND EASY.
```

---

NOTE: the following four questions are previous lab test questions set by Dr Manishankar Mondal Sir on Strings. We have modified them to add file handling concepts.

## 11. Write a program that takes a file containing string with spaces from the user. Your program will then determine the following and save them in txt files.
1. Find the individual words and store them in a two-dimensional array. Save the words.
2. Count the number of vowels in each word. Save the counts for all words in a file.
3. Print the appearance counts of the distinct words? Draw a histogram considering the appearance counts and save them in another file.


Sample Input file `input.txt`:

```
I know the man. the man is a good human being. the man has good characteristics. man man man man  the the the the good good
```


First Output file:

```
I, vowel count = 1
know, vowel count = 1
the, vowel count = 1
man, vowel count = 1
the, vowel count = 1
man, vowel count = 1
is, vowel count = 1
a, vowel count = 1
good, vowel count = 2
human, vowel count = 2
being, vowel count = 2
the, vowel count = 1
man, vowel count = 1
has, vowel count = 1
good, vowel count = 2
characteristics, vowel count = 5
man, vowel count = 1
man, vowel count = 1
man, vowel count = 1
man, vowel count = 1
the, vowel count = 1
the, vowel count = 1
the, vowel count = 1
the, vowel count = 1
good, vowel count = 2
good, vowel count = 2
```

Second output file `distinct_words_appearance_counts.txt`:

```
I: *
know: *
the: ***
man: ***
is: *
a: *
good: ****
human: *
being: *
has: *
characteristics: *
```

---

## 12. Assume that you have an array of 20 positive integers in a file. Write a program to RECURSIVELY determine the SUMMATION of all prime integers in the array. You SHOULD write the prime testing function recursively. The array will be taken as input from file and append the answer to the input file at last.

input.txt
```
4
345
45
78
324
5
45
453
435
37
78
423
453
34
578
31
374
19
11
111
```

output:
```
4
345
45
78
324
5
45
453
435
37
78
423
453
34
578
31
374
19
11
111
sum:103
```

---

## 13. Write a program to take a string with spaces from a file. Your program will save the string to `output.txt` after trimming it. Let us assume that the input string is "        I live in a beautiful        village.           ". Your program will remove the spaces from the front and back of the string and then save it. Thus, the output will be "I live in a beautiful        village." For trimming (i.e., for removing spaces from the front and back) you need to create a user-defined function called "trimstring" that takes a string as a parameter.

---

## 14. "LTrim", "RTrim", and "MTrim", and "CountOccurrence"

Write a program that will take a string with spaces from file as input. Write four functions named "LTrim", "RTrim", and "MTrim", and "CountOccurrence". Each of these functions will take a string as a parameter.

"LTrim" will delete all the spaces from the left hand side of the parameter string and will return the string that will be obtained after deleting the left side spaces.

"RTrim" will delete all the spaces from the right hand side of the parameter string and will return the string that will be obtained after deleting the right side spaces.

"MTrim" will keep only one space between every two consecutive words. There can be multiple spaces between two words in a string. Only one space will be kept and other spaces will be deleted.

And, "CountOccurrence" will recursively count the occurrences of "abc" in a parameter string and will return the count. This function might also take other parameters as you wish to accomplish the task.

---

THE END
