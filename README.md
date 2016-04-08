using "g++ -o farmer farmer.cpp"
or "make" to compile the program of question A

In question B
size=1000
sort():0seconds
v1/v2 are different.
insert_sort():0.02seconds
v1/v2 are the same.

size=10000

sort():0seconds
v1/v2 are different.
insert_sort():1.29seconds
v1/v2 are the same.

size=100000

sort():0.05seconds
v1/v2 are different.
insert_sort():128.11seconds
v1/v2 are the same.

size=1000000

sort():0.53seconds
v1/v2 are different.
....
too long....

sort():O(n log n)
insert_sort():O(n^2)
