/*******************************************************************************
*
* Copyright (C) 2019 Mazurok Oleg - 735
*
* File              : main.cpp
* Compiler          : IAR Embedded Workbench for ARM
* Version           : 6.30.1.3142
* Created File      : 11.03.2019
* Last modified     : 11.03.2019
*
* Support mail      : lgmzrk@gmail.com
*
* Target MCU        : MCU: Milandr 1986BE9x
* Description       : Реализация конкатенации строк
*                   : без использования сторонней библиотеки
*
********************************************************************************/
#include <stdlib.h>
#include <stdio.h>

int main()
{
  char str[] = "Hello";
  char str2[] = " World!";
  
  int sizestr = sizeof(str)/sizeof(char) + sizeof(str2)/sizeof(char);
  
  char *str3 = new char[sizestr];
  
  for (int i = 0; i < (sizeof(str) / sizeof(char)-1); ++i)
  {
    str3[i] = str[i];
  }

  for (int i = 0; i < (sizeof(str2) / sizeof(char)); ++i)
  {
    str3[i + (sizeof(str) / sizeof(char))-1] = str2[i];
  }
  
  printf("%s", str3);
  
  return 0;
}

