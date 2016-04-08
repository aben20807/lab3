using "g++ -o farmer farmer.cpp"<br>
or "make" to compile the program of question A<br>
<br>
In question B:<br>
<br>
size=1000<br>
sort():0seconds<br>
v1/v2 are different.<br>
insert_sort():0.02seconds<br>
v1/v2 are the same.<br>
<br>
size=10000<br>
<br>
sort():0seconds<br>
v1/v2 are different.<br>
insert_sort():1.29seconds<br>
v1/v2 are the same.<br>
<br>
size=100000<br>
<br>
sort():0.05seconds<br>
v1/v2 are different.<br>
insert_sort():128.11seconds<br>
v1/v2 are the same.<br>
<br>
size=1000000<br>
<br>
sort():0.53seconds<br>
v1/v2 are different.<br>
....<br>
too long....<br>
<br>
sort():O(n log n)<br>
insert_sort():O(n^2)<br>
