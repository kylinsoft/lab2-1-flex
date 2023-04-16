# SysY2022：基于flex的词法分析(C语言实现)

在文件sysy.l中补充适当的此法规则和动作代码，设计识别`SysY2022`语言单词符号的词法分析器。

你需要补充的内容有：<p>
(1) 标识符ID;<p>
(2) int型字面量INT_LIT;<p>
(3) float型字面量FLOAT_LIT;<p>
(4) 词法错误LEX_ERR<p>

等此法规则的定义,以及对应的动作代码。<p>

目录结构：<p>
.<p>
├── README.md   <p>
├── flex<p>
│   └── sysy.l     #词法规则文件(flex)<p>
└── test_cases     #测试用例<p>
    ├── case_1.c   <p>
    ├── case_2.c<p>
    ├── case_3.c<p>
    ├── case_4.c<p>
    └── case_5.c<p>
    
    
```
.
├── CMakeLists.txt
├── README.md
├── doc/                          #实验文档
│   ├── AST.md                    #语法树说明
│   ├── DeadCodeEli.pdf      
│   ├── Dominance.pdf        
│   ├── SysYFIR.md                #IR接口说明
│   └── SysYF语言定义.pdf
├── grammar/                      #词法和语法文件
│   ├── SysYFParser.yy
│   └── SysYFScanner.ll
├── include/                      #头文件
├── lib/
├── report/                       #实验报告
├── src                           #源代码
│   ├── ASTBuilder/
│   ├── ASTPrinter/
│   ├── Checker/                  #类型检查
│   ├── ErrorReporter/
│   ├── Frontend/
│   ├── Optimize/                 #优化算法
│   ├── SysYFIR/                  #IR构建
│   ├── SysYFIRBuilder/
│   └── main.cpp
└── test                          #测试集
    ├── test.py                   #测试脚本
    ├── test_2020/                #2020编译比赛测试集
    └── test_2021/                #2021编译比赛测试集
        
```
