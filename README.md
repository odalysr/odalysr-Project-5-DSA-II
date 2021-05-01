# odalysr-Project-5-DSA-II

# Background

 

As discussed in class, the longest common subsequence (LCS) problem is a common problem that arises (e.g.) in computational biology. Given two sequences of numbers, letters, genes, etc., x[1..m] and y[1..n], find a longest subsequence that is common to both of them. Usually no single, unique answer, but rather several possible answers exist. As we know, the brute force algorithm is O(n*2m) whereas the dynamic programming version is O(m*n). However, as we also know, the basic dynamic programming solution requires O(2*n*m) space.
 
# Program Descriptions

Assume that we are implementing a program to help us study similarity among organisms based upon comparison of gene sequences. In order to do this, we will implement the dynamic programming version of the LCS algorithm in two different ways in one program.

 

Part 1:

The first part will read a file containing a pair of character strings corresponding to the gene sequences, compute the LCS and display the original strings and the longest subsequence of characters. This version of the problem will utilize the entire "c" array, but NO "b" array. You must reconstruct the sequence itself from the "c" array for full credit. Strings could be up to 1000 characters in length.The file name you should use is twoStrings.txt. Obviously, you will not be able to hand-check for LCS in strings of such length, so you should run tests with shorter strings to confirm correctness of your program.
 

Part 2:

The second part will not make any attempt to recount the actual subsequence. It will calculate measures of similarity (which I made up) among an arbitrary number of character strings in a file. This second program will utilize an approach of keeping only the 2xM entries needed to compute the LCS value.

 

It will produce as output, a table that will look like this:

 

   01 02 03 04 05 06 07

01  -  H  M  D  M  L  D

02  -  -  H  H  D  D  H

03  -  -  -  L  M  D  M

04  -  -  -  -  M  L  M

05  -  -  -  -  -  M  L

06  -  -  -  -  -  -  M

07  -  -  -  -  -  -  -

 

Obviously, the 01, 02, 03, ... are labels for the strings, and the upper triangle holds a measure of similarity between pairs of strings {01,02}, {01,03}, {01,04}...

 

The possible entries in the table are:

H = high similarity between the strings

M = medium similarity between the strings

L = low similarity between the strings

D = the two strings are dissimilar

Determining similarity:

High similarity exists if the length of the shorter string is within 10% of the length of the longer string and the longest common subsequence is at least 90% of the length of the shorter string.

Medium similarity exists if the criteria for High similarity is not met but the length of the shorter string is within 20% of the longer string and the longest common subsequence is 80% of the length of the shorter string.

Low similarity exists if the criteria for Medium similarity is not met but the length of the shorter string is within 40% of the longer string and the longest common subsequence is 50% of the length of the shorter string.

Dissimilar strings are any that meet none of the above criteria.

The file of strings will first contain an integer that indicates how many strings are in the file, followed by that number of character strings. Strings will be terminated in the file by newlines. Recognize that you can end up with memory problems in a real-world version of this problem and you should not try to read all the strings into RAM at once. This is an obvious place to use a direct access file. We are already economizing on the amount of ram by not using the O(2*m*n) space. The reason for this is that these will be long strings and in a real-world solution, there might be a lot of them. For our purposes, you can assume there will be 20 strings or fewer. The file name you should use is multiStrings.txt

 

# Deliverables

You will submit the following for this project:
1. A User's manual for your program
2. Your source code in C++.
3. Your versions of twoStrings.txt and multiStrings.txt.

4. a Makefile

 

# Submission: 

1. Compile and run your program one last time before submitting it. Your program must run with gcc in the Linux lab.
2. Place every file in your submission in a SINGLE DIRECTORY named <last name><first initial>. For instance, I would create directory:  coffeyj.
3. zip that FOLDER into a .zip file with the SAME NAME. This means that inside your zip file, you will have exactly one folder (from the example: coffeyj) showing at the top level. Inside that folder will be ALL the files in your project.
4. DO NOT make separate folders for documentation and source files (or anything else) inside the main folder. Having such a setup simply necessitates more navigation time to get where we need to go to grade.
5. Any needed input files should be in the top-level folder along with the source code.
6. MacOS users - remove the _MacOS_ utility folder before you zip up the file. If you cannot, delete it from the archive once the archive is created. It just takes up space and is not needed for anything we do with your submissions.
7. Login to Canvas. Select our course.
9. Go to Assignments and select the appropriate project. Click the Submit button.
10. Upload your zip file. Check to insure that the file was uploaded. ALWAYS give yourself enough time. If you are trying to submit at 11:57pm on your machine, the clock might be off and the dropbox might already be closed.

Please review the policy on ACADEMIC MISCONDUCT. This is an individual assignment.