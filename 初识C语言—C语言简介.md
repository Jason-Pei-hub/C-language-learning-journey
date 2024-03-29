# 初识C语言—初识C语言 20240303



---

> #### 前言
>
> C语言全面了解，全貌认识
>
> 细致的学习，细枝末节

---

#### 什么是C语言

> ##### 维基百科
>
> C 语言是一种通用的高级语言，最初是由丹尼斯·里奇在贝尔实验室为开发 UNIX 操作系统而设计的。C 语言最开始是于 1972 年在 DEC PDP-11 计算机上被首次实现。
>
> 在 1978 年，布莱恩·柯林汉（Brian Kernighan）和丹尼斯·里奇（Dennis Ritchie）制作了 C 的第一个公开可用的描述，现在被称为 K&R 标准。
>
> UNIX 操作系统，C编译器，和几乎所有的 UNIX 应用程序都是用 C 语言编写的。由于各种原因，C 语言现在已经成为一种广泛使用的专业语言。
>
> - 易于学习。
> - 结构化语言。
> - 它产生高效率的程序。
> - 它可以处理底层的活动。
> - 它可以在多种计算机平台上编译。

什么是语言呢？

——人和人之间的交流工具

什么是计算机语言呢？

——任何计算机的交流

##### 广泛应用底层软件开发

**什么是底层软件开发？**

电脑硬件如何使用，我们需要操作系统的辅助，一般都很常见了，Windows/Linux系统，那么问题又来了，造作系统如何让硬件进行工作，这个时候就需要驱动的帮助，驱动就是介于操作系统和硬件之间，操作系统之上就是各种各样的应用层（应用软件：QQ/网盘/等），应用层往下就叫底层，C语言广泛应用于底层开发，但是也可以用于上层软件开发，例如wps，但是更加擅长于底层的开发。

![底层软件](images\屏幕截图 2024-03-02 155355.png)

##### C语言国际标准

C89/C90/C99/C11



**计算机语言**

二进制语言 10001010110010100

汇编语言

| 助记符 | 二进制语言 |
| ------ | ---------- |
| ADD    | 00000111   |
| SUB    | 00100010   |

B语言

C语言

早期：不足，各个公司分别开发，格式混乱，所以规定了国际标准

**国际标准**

规定C语言是什么样子的



#### 怎么写代码呢

编译器主要有Clang、**GCC**、WIN-TC、SUBLIME、**MSVC**、Turbo C等。

> 但是这里我说一下，我之前在编写C语言代码是所使用的都是GCC编译器，但是这一遍学习准备尝试一下MSVC这样一个微软的编译器，同时开始尝试使用VS2022来进行开发，之前使用Clion

![VS2022安装](images\屏幕截图 2024-03-02 163149.png)

---

让我们跳过安装的过程，不过这里还是想提一下，VS2022不需要自己去配置编译器，直接集成了MSVC，真的很方便

##### 第一个程序

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	printf("hello world!");
	return 0;
}
```

输出结果

```c
hello world!
```

第一句的作用是避免一些像scanf的函数在VS2022中报错，本次算是把环境配置完成

那么今天就先到这里



---



#### 感谢您的阅读！



