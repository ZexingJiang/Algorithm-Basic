/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

/*DSA*/#include "../stack/Stack.h" //寮曞叆鏍堟ā鏉跨被
/*DSA*/#include "BinNode_TravInorder_R.h"
/*DSA*/#include "BinNode_TravInorder_I1.h"
/*DSA*/#include "BinNode_TravInorder_I2.h"
/*DSA*/#include "BinNode_TravInorder_I3.h"
/*DSA*/#include "BinNode_TravInorder_I4.h"
template <typename T> template <typename VST> //鍏冪礌绫诲瀷銆佹搷浣滃櫒
void BinNode<T>::travIn ( VST& visit ) { //浜屽弶鏍戜腑搴忛亶鍘嗙畻娉曠粺涓€鍏ュ彛
   switch ( rand() % 5 ) { //姝ゅ鏆傞殢鏈洪€夋嫨浠ュ仛娴嬭瘯锛屽叡浜旂閫夋嫨
      case 1: travIn_I1 ( this, visit ); break; //杩唬鐗?1
      case 2: travIn_I2 ( this, visit ); break; //杩唬鐗?2
      case 3: travIn_I3 ( this, visit ); break; //杩唬鐗?3
      case 4: travIn_I4 ( this, visit ); break; //杩唬鐗?4
      default: travIn_R ( this, visit ); break; //閫掑綊鐗?
   }
}