# c-projects

-----------table.c-------------
compile: gcc -Wall -Werror -O -o table table.c
usage: ./table.c [0-9]+ [0-9]+ [M|A]
                 num1   num2   choice

table.c creates a neat multiplication or addition table that evenly spaces out the numbers ensuring that the table is easy to read. The table is (num1 + 1) columns wide (includes 0) and (num2 + 1) deep. "M" signifies multiplication, "A" signifies addition.

For example:
> ./table 5 5 M
 x |  0  1  2  3  4  5
-----------------------
 0 |  0  0  0  0  0  0 
 1 |  0  1  2  3  4  5 
 2 |  0  2  4  6  8 10 
 3 |  0  3  6  9 12 15 
 4 |  0  4  8 12 16 20 
 5 |  0  5 10 15 20 25 

> ./table 15 11 M
  x |   0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15
----------------------------------------------------------------------
  0 |   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0 
  1 |   0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15 
  2 |   0   2   4   6   8  10  12  14  16  18  20  22  24  26  28  30 
  3 |   0   3   6   9  12  15  18  21  24  27  30  33  36  39  42  45 
  4 |   0   4   8  12  16  20  24  28  32  36  40  44  48  52  56  60 
  5 |   0   5  10  15  20  25  30  35  40  45  50  55  60  65  70  75 
  6 |   0   6  12  18  24  30  36  42  48  54  60  66  72  78  84  90 
  7 |   0   7  14  21  28  35  42  49  56  63  70  77  84  91  98 105 
  8 |   0   8  16  24  32  40  48  56  64  72  80  88  96 104 112 120 
  9 |   0   9  18  27  36  45  54  63  72  81  90  99 108 117 126 135 
 10 |   0  10  20  30  40  50  60  70  80  90 100 110 120 130 140 150 
 11 |   0  11  22  33  44  55  66  77  88  99 110 121 132 143 154 165 

 As can be seen, the amount of white space between each number in the table differs depending on the size of the number.