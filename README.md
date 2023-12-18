# playingCard

A playing card consists of a suit (“Heart”, “Diamond”, “Club” or “Spade”) and a number value (1 to 13). For
simplicity, let’s use characters ‘H’, ‘D’, ‘C’ and ‘S’ to represent suits “Heart”, “Diamond”, “Club” and “Spade”
respectively. So, a playing card is represented by one character combined with a number such as “H2”, “C6” and
“D12”. Two cards are said to be a pair when they have the same number value. Please write a C++ program to
read an integer N and then N playing cards afterwards. The program then outputs 1) the number of pairs among
the N playing cards, and 2) the sum of the values of the N playing cards.
For example, the sets {“H3”, “D3”} and {“H3”, “D3”, “C3”} contain 1 pair each and their sum of values are 6
and 9 respectively. The sets {“H3”, “D3”, “C3”, “S3”} and {“H3”, “D3”, “C6”, “S6”} contain 2 pairs each and
their sum of values are 12 and 18 respectively. You can assume that the input playing cards are always valid and
the N playing cards are distinct (which means N must be smaller than or equal to 52).
