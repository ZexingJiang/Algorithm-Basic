/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

//閫氳繃zag鏃嬭浆璋冩暣锛屽皢瀛愭爲x鎷変几鎴愭渶宸︿晶閫氳矾
template <typename T> void stretchByZag ( BinNodePosi(T) & x ) {
   /*DSA*/   int c = 0; //璁板綍鏃嬭浆娆℃暟
   int h = 0;
   BinNodePosi(T) p = x; while ( p->rc ) p = p->rc; //鏈€澶ц妭鐐癸紝蹇呮槸瀛愭爲鏈€缁堢殑鏍?
   while ( x->lc ) x = x->lc; x->height = h++; //杞嚦鍒濆鏈€宸︿晶閫氳矾鐨勬湯绔?
   for ( ; x != p; x = x->parent, x->height = h++ ) { //鑻鍙冲瓙鏍戝凡绌猴紝鍒欎笂鍗囦竴灞?
      while ( x->rc ) //鍚﹀垯锛屽弽澶嶅湴
         /*DSA*/{
         x->zag(); //浠涓鸿酱鍋歾ag鏃嬭浆
         /*DSA*/c++;
         /*DSA*/}
   } //鐩村埌鎶佃揪瀛愭爲鐨勬牴
   /*DSA*/printf ( "\nh = %d, c = %d\n\n", h, c );
}
