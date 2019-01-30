/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

//閫氳繃zig鏃嬭浆璋冩暣锛屽皢瀛愭爲x鎷変几鎴愭渶鍙充晶閫氳矾
template <typename T> void stretchByZig ( BinNodePosi(T) & x, int h ) {
   /*DSA*/   int c = 0;
   for ( BinNodePosi(T) v = x; v; v = v->rc ) {
      while ( v->lc )
         /*DSA*/{
         v = v->zig();
         /*DSA*/c++;
         /*DSA*/}
      v->height = --h;
   }
   while ( x->parent ) x = x->parent;
   /*DSA*/printf ( "\nh = %d, c = %d\n\n", h, c );
}
