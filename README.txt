EECS 349 HW2 Part 3 Drew Heald

1:
Initia setup stuff
Call main
Initialize array, three values [0,5,3]
3 * 5 = 15
edx = 15
eax = 3
ecx = 3
ecx = 0
eax = 3 + 0 = 3
eax = 3/2 = 1
edx = 15 - 1 = 14
eax = 14
[3,5,14]

Code multiplies two numbers, (5 and 3), subtracts one from the result (15-1 = 14) and prints the result (14)

2:
Startup stuff
Call main
[12, 15, 221, 3, 432, 54, 16, 67, 0, 0]
Jump to later segment (loc_40157F)
Compare last part of array to 7 (is less than), jumps to (loc_401560)
eax = 12
12 > 0
eax = 0
eax = 12
[esp+3Ch] = 12
[esp+38h] = 1

Finds the greatest value, puts it in second to last array position, prints it

3:
[esp +1Ch] = 100
Jmp => loc_4015D6
100 < 999
Jmp loc_40151B
ecx = 100
edx = 1374389535
eax = 100
eax = 137438953500	=(1374389535 * i) (edx = 00000000000000000000000000100000 eax = 00000000000000000000000000011100)
edx = 1 (1374389535 *i) / 32
eax = 100 (eax = i)
eax = 0 
edx = 1 - 0 = 1  ((1374389535 *i) / 32))
eax = 1
[esp +18h] = 1 [esp +18h] = ((1374389535 *i) / 32))
edx = -100 * ((1374389535 *i) / 32))
eax = 100
ecx = 0	= (-100 * ((1374389535 *i) / 32))) + (i)			(lea ecx,[edx+eax])
edx = 1717986919
eax = 0 = (-100 * ((1374389535 *i) / 32))) + (i)
eax = 0 * edx = 0	(-100 * ((1374389535 *i) / 32))) + (i) * 1717986919
edx = 0  1100110011001100110011001100111 -> 1111001100110011001100110011001 = 2040109465
eax = 0
eax = 0

Loop from 100-999, [Does MATH], checks a condition (cmp eax, [esp+1Ch])
eax = ([esp+18h]^3) + ([esp+14h]^3) + ([esp+10h]^3)


4:
Initial setup
Initialize three values [100,7,0]
0 < 100
jump loc_4015FC
eax = 0
edx = 1
eax = 0
[esp +14h] = 1
[esp+1ACh] = 1

Make a size 102 array, start with the last three values filled (100, 7, 0), increment the last value at the start of every loop, fill array[i] = i