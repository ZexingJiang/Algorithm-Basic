/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> //浠庡綋鍓嶈妭鐐瑰嚭鍙戯紝娌垮乏鍒嗘敮涓嶆柇娣卞叆锛岀洿鑷虫病鏈夊乏鍒嗘敮鐨勮妭鐐?
static void goAlongLeftBranch ( BinNodePosi(T) x, Stack<BinNodePosi(T)>& S ) {
   while ( x ) { S.push ( x ); x = x->lc; } //褰撳墠鑺傜偣鍏ユ爤鍚庨殢鍗冲悜宸︿晶鍒嗘敮娣卞叆锛岃凯浠ｇ洿鍒版棤宸﹀瀛?
}

template <typename T, typename VST> //鍏冪礌绫诲瀷銆佹搷浣滃櫒
void travIn_I1 ( BinNodePosi(T) x, VST& visit ) { //浜屽弶鏍戜腑搴忛亶鍘嗙畻娉曪紙杩唬鐗?1锛?
   Stack<BinNodePosi(T)> S; //杈呭姪鏍?
   while ( true ) {
      goAlongLeftBranch ( x, S ); //浠庡綋鍓嶈妭鐐瑰嚭鍙戯紝閫愭壒鍏ユ爤
      if ( S.empty() ) break; //鐩磋嚦鎵€鏈夎妭鐐瑰鐞嗗畬姣?
      x = S.pop(); visit ( x->data ); //寮瑰嚭鏍堥《鑺傜偣骞惰闂箣
      x = x->rc; //杞悜鍙冲瓙鏍?
   }
}
