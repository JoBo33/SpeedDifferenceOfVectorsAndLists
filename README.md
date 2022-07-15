OptimizedArrays

![output](https://github.com/JoBo33/SpeedDiffferenceOfVectorsAndLists/blob/master/SpeedDiifference.png "Output")

After testing multiple times I got the following average results (based on my laptop speed):
1. Stack is faster than heap
2. Vectors are faster than lists
3. If one know how many entries the vector neeeds, reserve the memory. It is faster because there are no copies necessary. 
4. No difference between push_back and emplace_back (at least with int as datatype)
