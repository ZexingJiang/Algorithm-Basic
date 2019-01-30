/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

//浠庡綋鍓嶈妭鐐瑰嚭鍙戯紝娌垮乏鍒嗘敮涓嶆柇娣卞叆锛岀洿鑷虫病鏈夊乏鍒嗘敮鐨勮妭鐐癸紱娌块€旇妭鐐归亣鍒板悗绔嬪嵆璁块棶
template <typename T, typename VST> //鍏冪礌绫诲瀷銆佹搷浣滃櫒
static void visitAlongLeftBranch ( BinNodePosi(T) x, VST& visit, Stack<BinNodePosi(T)>& S ) {
   while ( x ) {
      visit ( x->data ); //璁块棶褰撳墠鑺傜偣
      S.push ( x->rc ); //鍙冲瀛愬叆鏍堟殏瀛橈紙鍙紭鍖栵細閫氳繃鍒ゆ柇锛岄伩鍏嶇┖鐨勫彸瀛╁瓙鍏ユ爤锛?
      x = x->lc;  //娌垮乏鍒嗘敮娣卞叆涓€灞?
   }
}

template <typename T, typename VST> //鍏冪礌绫诲瀷銆佹搷浣滃櫒
void travPre_I2 ( BinNodePosi(T) x, VST& visit ) { //浜屽弶鏍戝厛搴忛亶鍘嗙畻娉曪紙杩唬鐗?2锛?
   Stack<BinNodePosi(T)> S; //杈呭姪鏍?
   while ( true ) {
      visitAlongLeftBranch ( x, visit, S ); //浠庡綋鍓嶈妭鐐瑰嚭鍙戯紝閫愭壒璁块棶
      if ( S.empty() ) break; //鐩村埌鏍堢┖
      x = S.pop(); //寮瑰嚭涓嬩竴鎵圭殑璧风偣
   }
}