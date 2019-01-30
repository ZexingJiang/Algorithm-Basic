/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

/*DSA*/#include "../stack/Stack.h" //寮曞叆鏍堟ā鏉跨被
/*DSA*/#include "BinNode_TravPreorder_R.h"
/*DSA*/#include "BinNode_TravPreorder_I1.h"
/*DSA*/#include "BinNode_TravPreorder_I2.h"
template <typename T> template <typename VST> //鍏冪礌绫诲瀷銆佹搷浣滃櫒
void BinNode<T>::travPre ( VST& visit ) { //浜屽弶鏍戝厛搴忛亶鍘嗙畻娉曠粺涓€鍏ュ彛
   switch ( rand() % 3 ) { //姝ゅ鏆傞殢鏈洪€夋嫨浠ュ仛娴嬭瘯锛屽叡涓夌閫夋嫨
      case 1: travPre_I1 ( this, visit ); break; //杩唬鐗?1
      case 2: travPre_I2 ( this, visit ); break; //杩唬鐗?2
      default: travPre_R ( this, visit ); break; //閫掑綊鐗?
   }
}