Unreal people database for testing the separate chained 
hash table with AVLTree chain. In the tests 
<b><i>86.195.895</i></b> people is generated in <i>people</i> file by
<i> database_generator.py</i>. <br>
All <b>ids</b> and <b>phone numbers</b> are unique.
An <b>id</b> is chosen by chance and tried to find in both linear
separate chaining and AVLTree separate chaining. <br>
<b>AVL Tree: 0.000025 seconds in average</b> <br>
<b>Linear: 0.066093 seconds in average</b>
<br>
It work better than <i>O(logn)</i> where n is number of items. After getting the index with hash function, m items will be in this index where m is less than or equal to n. (It is usually much smaller, but never more). <i>O(1)</i> for hashing and <i>O(logm)</i> for searching in AVLTree. This is faster than binary search for sorted data.<br>
AVL Tree Result: <br>
![avl result]
(https://github.com/boranyldrm/HashTable/blob/master/AVLresults.png?raw=true)
