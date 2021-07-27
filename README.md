# 中央财经大学CUFE901

## 考研加油


``` lua
MasterofSoftEngineering
├── exerciseAfterClass -- 张书云老师书后题
├── exercises --《内部习题集》
├── real --真题
├── sort --排序算法
├── TanHaoQiang -- 谭浩强书后题
├── LinkedList.c --链表函数
└── Strategy --《全解攻略》
```
#### 注意
1. ***程序填空题和程序改错题：找对应变量是否都用到，同时看头文件(同时看程序内是否有库函数)***  
2. ***读程序题标出每一个printf***  
3. ***改错题注意函数类型，数组大小，if等程序块的花括号(尤其是写在同一行)***
4. ***程序阅读题看清变量类型（全局变量or局部变量）***
5. ***判断表达式等价，画真值表***
6. ***各数据类型存储长度:***  
![数据类型](/image/lengthOfDataType.jpg)  
7. ***运算符优先级:***  
![优先级](/image/priority.jpg)
8. ***转义字符表:***  
![转义字符](/image/ESC.jpg)
9. ***ASCii码表:***  
![](/image/ASCii.png)  
10. IO大题记得fclose();
11. 链表删除节点时定义的前节点必须先分配空间
12. 程序填空，改错注意变量类型是否匹配
13. int类型取值范围：16位：-32768\~32767,32位：-65536\~65535
14. ***IO访问模式:*** 
![](/image/Viewmode.jpg)  
15. 读程序题注意循环后是否有分号和输出语句的格式控制符
16. _**制表符长度：**_  
![](/image/Tab.png)
17. 创建链表记得最后要加空结点
18. 找数对的编程题限制大小关系  避免重复(拆分素数等)
19. 编程题检查变量的定义、输入是否都进行了
20. 程序填空题注意递归调用






#### 错题 
1. 字符数组赋值需要strcpy(2006.1.3)  
2. `int a[3][4] = {0},*p = a;`   
    `*(&a[0]+7)=*(a+7);`(表示第七行地址，`&a[0]=a`)  
    `*a+7`表示第一个元素地址+7(2006.1.5)  
3. 注意结构体内指针的指向(2007.2.3)  
4. 单链表创建(2007.3.2) 单链表合并(2013.2.2) 节点删除()  
5. 数据库是以记录为界线来区分，C语言没有记录说法(2009.1.19)  
6. \#define 宏 替换体  宏定义中替换体的类型为字符串(2009.1.26)  
7. ++或--的操作数只能是变量，不能是常量或表达式(2009.1.28)  
8. 函数不可以返回一个共用体变量(2009.1.24)  
~~9. 声明函数时不必明确参数类型(2010.2.2)~~  
10. 最大公约数求法：   
    1.辗转相减法(更相减损术)：两个数相减，判断差是否为0，若不为0，用小数和差组成新的数对再相减，直至差为0，最后相等的两个数即为最大公约数  
    2.辗转相除法：用除数除以余数，反复直至余数为0
11. 不可以给指针变量赋一个整数，类型不符
12. 形参缺省存储类型为auto
13. C语言的结束可能会在程序中间结束：exit();
14. 强制转换的数据不是常量  强制转换可能会改变值
15. C语言源程序中表示整型常数不使用二进制
16. 实型整形数据指数形式E/e后必须跟有数（整数）  
17. C语言格式控制符会四舍五入  
18. C语句分为  （都需要带分号   复合语句不需要分号  
    1. 表达式语句
        1. 赋值语句（b++;）
        2. 函数调用语句
        3. 空语句
    2. 控制语句
    3. 复合语句
19. `switch(整形表达式){  case 常量: xxxxx  }`且case内常量不能相同，整形表达式不能为空
20. 调用函数，且该函数没有return语句则返回一个不确定的值
21. 变量作实参时，它和对应形参之间的数据传递方式是单向值传递
22. 在函数内的复合语句中定义的变量在本复合语句内有效
23. 浮点常量默认double
24. 函数值类型的定义可以缺省，此时函数值的隐含类型是int
25. 不同类型赋值时，高精度赋给低精度会导致结果不准确，低精度赋给高精度不会有此情况
26. 创建字符数组后，令指针指向后给指针赋值，并不会保存到数组中
27. `char str[][8] = {"first","second"},*p = str[0][0];printf("%s\n",p+8);`  
    输出内容为second，每个字符串占8个char
28. C语言中，构造类型共四种：数组、结构体、共用体、枚举
29. 基本数据类型：单精度，双精度，整形，字符型，枚举
30. 简单数据类型：实型，整形，字符型
31. 字符串中转义字符以十六进制表示时，前面不能加0(全解3.36)
32. fabs()求实型绝对值，abs()求整形绝对值  
33. pow函数返回值为double类型   
34. 格式转换符 -表示左对齐  无说明右对齐 格式转换符中，如果有-或者指定精度则忽略0标记(2014.3.4)  
35. 读入字符时％c    回车也会作为字符读入
36. scanf中的格式转换符不能带小数点
37. 实型小数点后默认六个零  
38. 读取字符数据指定宽度时，系统读取第一个字符(题库3.48)  
~~39. 制表符为七个空格~~  
40. 枚举常量与数组相同，从0开始；枚举定义：enum a{one,two,three}  
41. 静态数组、变量初始化后，值全部为0
42. 字符数组的内容不一定是字符串（没有\0的不是字符串
43. 数组定义：类型说明 数组名 常量表达式
44. 第一维省略的情况下，用数组内元素个数除以第二维大小。若有余数，则商+1就是第一维的大小，没有余数商就是第一维的大小。
45. 排序算法：
    1. 插入排序  
        假设前n个都是已经排好的，新进来的与每个比较，找到适当位置。  
    算法:  
        ```
        for (i = 1; i < 10; ++i) {
            t = a[i];
            for (j = i - 1; j >= 0 && (a[j] > t); --j) {
                a[j + 1] = a[j];
            }
            a[j + 1] = t;
        }
        ```   
    2. 冒泡排序  
    ```
		    for (i=0; i<len-1; i++) / 外循环为排序趟数，len个数进行len-1趟 */
	            for (j=0; j<len-1-i; j++) { /* 内循环为每趟比较的次数，第i趟比较len-i次 */
	                if (arr[j] > arr[j+1]) { /* 相邻元素比较，若逆序则交换（升序为左大于右，降序反之） */
	                    temp = arr[j];
	                    arr[j] = arr[j+1];
	                    arr[j+1] = temp;
	                }
	            }
    ```
    3. 二分排序  
    ```
	    for (i = 1; i < len; ++i) {
	        temp = a[i];
	        low = 0;
	        high = i - 1;
	        while (low <= high) {
	            mid = (low + high) / 2;
	            if (a[mid] > temp) {
	                high = mid - 1;
	            } else {
	                low = mid + 1;
	            }
	        }
	        for (j = i - 1; j >= low; --j) {
	            a[j + 1] = a[j];
	        }
	        a[high + 1] = temp;
        }
    ```  
46. 二维数组在内存中的存放顺序是按行主顺序存放
47. 用户可以重新定义标准库函数，且该函数失去原有意义
48. 形参不能为表达式
49. 如果函数类型与返回值类型不一致，以函数类型为准
50. 如果形参和实参的类型不一致，以形参为准
51. 函数调用不可以作为函数形参，因为形参存储在寄存器中，没有地址
52. C程序在编译前对预处理命令行进行处理;C程序一行只能有一个有效的预处理命令
53. 使用带参的宏，参数类型不需要一致，因为宏处理仅是替换
54. \#include“”，寻找文件的方式为先在原文件所在目录搜索，然后再按照系统设定的标准模式搜索;#include<>，直接按系统设定的标准模式搜索
55. 动态域宽控制，printf("%\*d",5,x);  需要两个参数，第一个为*，参数控制宽度，第二个为数据
56. gets()函数遇回车停止 scanf()遇空白符停止(如果第一个字符为空白符则忽略
57. 在定义地址变量时可以这样写：int a=20,*q = &a;
58. 可以把一个数组名作为一个同名的指针来使用，或者把顺序的指针作为同名的数组名来使用
59. 插值查找：`mid = first+(target-num[first])*(last-first)/(num[last]+num[first]);`  
是根据要查找的关键字key与查找表中最大最小记录的关键字比较后的查找方法  
![](https://img-blog.csdnimg.cn/20190708101102747.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3hpYW9kb25nZG9uZ2xodA==,size_16,color_FFFFFF,t_70)
60. 补码 = 反码+1  （负数除符号位全部取反，然后+1）
61. 函数 ftell() 用于得到文件位置指针当前位置相对于文件首的偏移字节数
62. 地址运算符&只能引用，不能作为左值赋值
63. printf函数参数执行顺序从右往左
64. 第一个主要采用C语言编写的操作系统是UNIX系统
65. 从计算机所用资源角度分析，宏与函数的主要区别为宏的使用节省了存储空间，函数节省了时间
66. int fprintf(FILE *stream, const char *format, ...)   
    - stream -- 这是指向 FILE 对象的指针，该 FILE 对象标识了流。  
    - format -- 这是 C 字符串，包含了要被写入到流 stream 中的文本。它可以包含嵌入的 format 标签，format 标签可被随后的附加参数中指定的值替换
67. int fscanf(FILE *stream, const char *format, ...)  
    - stream -- 这是指向 FILE 对象的指针，该 FILE 对象标识了流。  
    - format -- 这是 C 字符串，包含了以下各项中的一个或多个：空格字符、非空格字符 和 format 说明符。
68. char *fgets(char *str, int n, FILE *stream) 读到换行符或n-1个字符后结束  
    - str -- 这是指向一个字符数组的指针，该数组存储了要读取的字符串。  
    - n -- 这是要读取的最大字符数（包括最后的空字符）。通常是使用以 str 传递的数组长度。
69. int fputs(const char *str, FILE *stream)  
    - str -- 这是一个数组，包含了要写入的以空字符终止的字符序列。
    - stream -- 这是指向 FILE 对象的指针，该 FILE 对象标识了要被写入字符串的流。
70. size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
    - ptr -- 这是指向要被写入的元素数组的指针。
    - size -- 这是要被写入的每个元素的大小，以字节为单位。
    - nmemb -- 这是元素的个数，每个元素的大小为 size 字节。
    - stream -- 这是指向 FILE 对象的指针，该 FILE 对象指定了一个输出流。
71. size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)  
    - ptr -- 这是指向带有最小尺寸 size*nmemb 字节的内存块的指针。
    - size -- 这是要读取的每个元素的大小，以字节为单位。
    - nmemb -- 这是元素的个数，每个元素的大小为 size 字节。
    - stream -- 这是指向 FILE 对象的指针，该 FILE 对象指定了一个输入流。
72. 如果在一个程序中使用完一个文件后没有执行文件关闭操作时，后果将是丢失部分数据
73. int *p[N] 指针数组 N个指针; int (*p)[N] 指向N个整形元素的一个指针
74. 解决fread读出时，用feof判断重复读出：`while (fread(&goods1, sizeof(struct goods), 1, fp1))`  
75. putchar函数可以向终端输出一个字符或字符型变量值
76. ASCii文件（文本文件）按每个字符8bit（一字节）存储，二进制模式以二进制值存储
77. 数据库是以记录为界线来区分，C语言没有记录说法
78. 共用体变量的地址和它各成员的地址都是同一地址
79. 编译预处理以回车结尾
80. 魔方阵：从1开始，依次放置各自然数，Dole Rob算法可以确定插入的每一个元素的下标：(2009.5.3)    
    1） 第一个位置在第一行的正中。  
    2） 若最近一个插入元素为N的整数倍，则选下一行同列上的位置为新位置。  
    3） 新位置处于最近一个插入位置的右上方。  
    4） 若超出方阵上边界，则选该列的在最后一行的位置，若超过右边界，则选择该行的在最左一列的位置。  
    5） 右上角的值的下一个必在右上角值的下方  
81. for循环continue后 增量表达式仍然执行
82. 函数可以返回一个值，也可以什么值也不返回
83. C语言的所有函数都是外部函数
84. C语言编译时要检查其语法是否合法
85. C语言的子程序由函数组成
86. 只有在使用时才能为该类型变量分配内存的存储类型说明是`auto`和`register`；`static`和`extern`在定义时立即分配内存
87. 读到文件末尾时，feof()返回值为非零值
88. C语言中，函数的隐含存储类型为extern
89. 闰年算法：`y%4==0&&y%100!=0||y%400 ==0` 能整除四且不能整除100或者能整除400
90. Scanf的转换说明中数字代表最大输入宽度
91. 间接递归是在A函数中调用B函数，然后在B函数中调用A函数，实现递归(2012.1.22)
92. scanf中输入双精度用%lf
93. struct结构体定义花括号结尾要有“;”(2013.1.17)
94. malloc函数从系统堆区分配相应内存(2014.1.30)
95. 将负数变为无符号数：根据系统位数，用2^n（系统位数）+负数即为结果
96. 位运算效率最高，直接操纵二进制
97. \#define 缺陷：无法进行类型检查 无法进行单步调试 会导致代码膨胀(2014.1.25)
98. char *strstr(const char *haystack, const char *needle)  
    - haystack -- 要被检索的 C 字符串。  
    - needle -- 在 haystack 字符串内要搜索的小字符串返回第一次出现的位置  
99. 当字符串中出现\0时先往后找可不可以组成八进制，如果不可以再断为\0，八进制不一定是三位也可能是两位：\01、\11(2001.2.3)  
100. int *(p[4]) 四个元素都为指针类型——指针数组
101. 随机文件以二进制代码储存文件；二进制文件访问速度比文本文件快
102. C语言求余结果负号由被除数负号决定（%左边的）
103. C语言现在仍然是结构化程序设计语言
104. 带参宏替换，不替换字符串中引号内的：`#define PRINT(V) printf("V=%d\t",V)`
105. 声明空字符串用字符数组
106. 常量可以是任何的基本数据类型，比如整数常量、浮点常量、字符常量，或字符串字面值，也有枚举常量。
107. 初始化即为赋值
108. 声明函数时可以省略参数
109. printf为标准库函数，define为预处理指令，都不属于C语句
110. printf()返回值为打印字符个数(例:`printf("123\n");`值为4
111. `char *s = "str";`s指向常量字符串“str”,所以不可以用s[1]等对字符串进行更改
112. fopen函数建一个*新的*二进制文件，既能读也能写，则以wb+打开；(2018.1.29)
113. 两数乘积除以最大公约数等于最小公倍数
114. 牛顿迭代法：过某点做曲线切线，再过与x轴的交点做x轴垂线，与此重复，直至两次迭代之间的结果相差极小
115. 在C语言中，除了字符数组，一个数组不能通过数组名对数组进行整体输入或输出 即只有`char s[10];scanf("%s",s);`其余类似`double a[] int a[]`均不能整体赋值
116. 从计算机内存中将数据写入文件中，成为输出
117. 结构体按先声明先存放的顺序从右往左存储（2014.3.4）
118. 若指针p为空指针，则p的值为0（2018.1.18）
119. 双向冒泡排序，根据奇偶性找规律，需注意数组特性即最大为n-1
120. '0'的asc码为48 
121. int fputc(int char, FILE *stream)  
     - char -- 这是要被写入的字符。该字符以其对应的 int 值进行传递。  
     - stream -- 这是指向 FILE 对象的指针，该 FILE 对象标识了要被写入字符的流。  