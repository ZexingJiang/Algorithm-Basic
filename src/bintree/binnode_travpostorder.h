/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

/*DSA*/#include "../stack/Stack.h" //寮曞叆鏍堟ā鏉跨被
/*DSA*/#include "BinNode_TravPostorder_R.h"
/*DSA*/#include "BinNode_TravPostorder_I.h"
template <typename T> template <typename VST> //鍏冪礌绫诲瀷銆佹搷浣滃櫒
void BinNode<T>::travPost ( VST& visit ) { //浜屽弶鏍戝悗搴忛亶鍘嗙畻娉曠粺涓€鍏ュ彛
   switch ( rand() % 2 ) { //姝ゅ鏆傞殢鏈洪€夋嫨浠ュ仛娴嬭瘯锛屽叡涓ょ閫夋嫨
      case 1: travPost_I ( this, visit ); break; //杩唬鐗?
      default: travPost_R ( this, visit ); break; //閫掑綊鐗?
   }
}