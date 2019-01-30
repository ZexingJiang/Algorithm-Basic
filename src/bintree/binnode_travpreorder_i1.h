/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T, typename VST> //鍏冪礌绫诲瀷銆佹搷浣滃櫒
void travPre_I1 ( BinNodePosi(T) x, VST& visit ) { //浜屽弶鏍戝厛搴忛亶鍘嗙畻娉曪紙杩唬鐗?1锛?
   Stack<BinNodePosi(T)> S; //杈呭姪鏍?
   if ( x ) S.push ( x ); //鏍硅妭鐐瑰叆鏍?
   while ( !S.empty() ) { //鍦ㄦ爤鍙樼┖涔嬪墠鍙嶅寰幆
      x = S.pop(); visit ( x->data ); //寮瑰嚭骞惰闂綋鍓嶈妭鐐癸紝鍏堕潪绌哄瀛愮殑鍏ユ爤娆″簭涓哄厛鍙冲悗宸?
      if ( HasRChild ( *x ) ) S.push ( x->rc ); if ( HasLChild ( *x ) ) S.push ( x->lc );
   }
}