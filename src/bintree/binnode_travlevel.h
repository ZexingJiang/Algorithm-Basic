/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

/*DSA*/#include "../queue/queue.h" //寮曞叆闃熷垪
template <typename T> template <typename VST> //鍏冪礌绫诲瀷銆佹搷浣滃櫒
void BinNode<T>::travLevel ( VST& visit ) { //浜屽弶鏍戝眰娆￠亶鍘嗙畻娉?
   Queue<BinNodePosi(T)> Q; //杈呭姪闃熷垪
   Q.enqueue ( this ); //鏍硅妭鐐瑰叆闃?
   while ( !Q.empty() ) { //鍦ㄩ槦鍒楀啀娆″彉绌轰箣鍓嶏紝鍙嶅杩唬
      BinNodePosi(T) x = Q.dequeue(); visit ( x->data ); //鍙栧嚭闃熼鑺傜偣骞惰闂箣
      if ( HasLChild ( *x ) ) Q.enqueue ( x->lc ); //宸﹀瀛愬叆闃?
      if ( HasRChild ( *x ) ) Q.enqueue ( x->rc ); //鍙冲瀛愬叆闃?
   }
}