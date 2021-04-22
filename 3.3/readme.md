# Subject: Simple Drawing Program
## Description:
Please design a simple drawing program (fill the background with *), allow users to draw square, Isosceles right triangle and lines on the console (for figure, fill with Upper X)

## Input:
At the beginning, allow users to enter the size of the drawing board(m*n).After that, enter the corresponding drawing code. S indicates square, T indicates Isosceles right triangle, L indicates lines. According to different figures, there follows various input information:
S: input integer width(the width of the square). And coord x,y, drawing will start from x,y(calculates from the left-up corner of the square).
T: input integer width(the side-length of the triangle). And coord x,y and the side the triangle faces. Which are respectively LU(Left Up),LD(Left Down),RU(Right Up),RD(Right Down).While drawing, the x,y indicates the position of right angle.
L: input two pairs of coord x1,y1 & x2,y2.Drawing from x1,y1 to x2,y2 (Except straight line, it would possible be tilted lines with +-45 Angle).
Enter EXIT,end the program.

※Please notice the coordinate, the left-up corner is 0,0 while right-down corner is m-1,n-1.
※If the following figure violates the border of drawing board,please output
“Out of range.”.And there no need to modify the board.
※Notice that for any figure,if the given width is 1 you’ll need to draw a point.
※You need to output a result every draw,separates each with a line of space.
※Expect the test data testing border violation, we ensure all input data is drawable.
※Any operation about string,please implements with std::string,or not points will be given.




## Output:
After drawing a figure or an error message,output a newline.

| Sample Input	 | Sample Output |
| -------- | -------- |
|    5 6<br>S<br>2<br>0 0<br>S<br>2<br>100 100<br>L<br>0 4 4 4<br>T<br>2<br>1 3<br>LU<br>EXIT|  XX***<br>XX***<br>***** <br>\*\*\*\*\*<br>\*\*\*\*\*<br>\*\*\*\*\*<br><br>Out of range.<br><br>XX***<br>XX***<br>\*\*\*\*\*<br>\*\*\*\*\*<br>XXXXX<br>\*\*\*\*\*<br><br>XX***<br>XX***<br>\*X\*\*\*<br>XX\*\*\*<br>XXXXX<br>*****|


- [ ]  Eazy,Only basic programming syntax and structure are required.
- [x]  Medium,Multiple programming grammars and structures are required.
- [ ] Hard,Need to use multiple program structures or complex data types.