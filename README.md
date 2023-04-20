# SysY2022：基于flex的词法分析(C语言实现)

目录结构：
```
.
├── README.md   
├── flex
│   └── sysy.l     #词法规则文件(flex)
└── test_cases     #测试用例
    ├── case_1.c   
    ├── case_2.c
    ├── case_3.c
    ├── case_4.c
    └── case_5.c
``` 

# 实验任务
        
在文件sysy.l中补充适当的词法规则和动作代码，设计识别`SysY2022`语言单词符号的词法分析器。

你需要补充的内容有：
        
(1) 标识符ID;
        
(2) int型字面量INT_LIT;
        
(3) float型字面量FLOAT_LIT;
        
(4) 词法错误LEX_ERR

等词法规则的定义,以及对应的动作代码。

# 要求

1. 对于识别出的合法的单词，直接输出：

识别出的单词 : 种别名称  (“:”号前后各留一空格，一个单词占一行）

2. 对于所有的词法错误，应该报告词法错误，例如: '9ab'，'2f'等，应该报告错误，报告格式为：

Lexical error - 行号 : 识别出来的串  (如'9ab', “-”和“:”号前后各留一空格，每报告一个词法错误之后换行)

3. 对于whitespace和注释，直接忽略；

对于以下程序
```
int main(){
    float a, b;
    int c = 085;
    a = 020e-04f;
    b = getfloat();
    putfloat(a + b);
    putch(10);
    return 0;
}
```
词法分析的输出为
```
int : INT
main : ID
( : LP
) : RP
{ : LC
float : FLOAT
a : ID
, : COMMA
b : ID
; : SEMICOLON
int : INT
c : ID
= : ASSIGN
Lexical error - line 3 : 085
; : SEMICOLON
a : ID
= : ASSIGN
020e-04f : FLOAT_LIT
; : SEMICOLON
b : ID
= : ASSIGN
getfloat : ID
( : LP
) : RP
; : SEMICOLON
putfloat : ID
( : LP
a : ID
+ : ADD
b : ID
) : RP
; : SEMICOLON
putch : ID
( : LP
10 : INT_LIT
) : RP
; : SEMICOLON
return : RETURN
0 : INT_LIT
; : SEMICOLON
} : RC
```

# flex使用手册

https://www.cs.princeton.edu/~appel/modern/c/software/flex/flex_toc.html

# SysY语言的定义

 https://gitlab.eduxiji.net/nscscc/compiler2022/-/blob/master/SysY2022%E8%AF%AD%E8%A8%80%E5%AE%9A%E4%B9%89-V1.pdf
 
# 编译环境

(1) Ubuntu 18.04 LTS 及以上

(2) flex 2.6及以上

(3) GNU Build-essential (gcc,g++,...)，gcc 7.5及以上

# 评测

```
cd flex
flex sysy.l
gcc -o scanner lex.yy.c
./scanner ../test_cases/case_1.c
./scanner ../test_cases/case_2.c
./scanner ../test_cases/case_3.c
./scanner ../test_cases/case_4.c
./scanner ../test_cases/case_5.c
```


