/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> //鍦ㄤ互S鏍堥《鑺傜偣涓烘牴鐨勫瓙鏍戜腑锛屾壘鍒版渶楂樺乏渚у彲瑙佸彾鑺傜偣
static void gotoHLVFL ( Stack<BinNodePosi(T)>& S ) { //娌块€旀墍閬囪妭鐐逛緷娆″叆鏍?
   while ( BinNodePosi(T) x = S.top() ) //鑷《鑰屼笅锛屽弽澶嶆鏌ュ綋鍓嶈妭鐐癸紙鍗虫爤椤讹級
      if ( HasLChild ( *x ) ) { //灏藉彲鑳藉悜宸?
         if ( HasRChild ( *x ) ) S.push ( x->rc ); //鑻ユ湁鍙冲瀛愶紝浼樺厛鍏ユ爤
         S.push ( x->lc ); //鐒跺悗鎵嶈浆鑷冲乏瀛╁瓙
      } else //瀹炰笉寰楀凡
         S.push ( x->rc ); //鎵嶅悜鍙?
   S.pop(); //杩斿洖涔嬪墠锛屽脊鍑烘爤椤剁殑绌鸿妭鐐?
}

template <typename T, typename VST>
void travPost_I ( BinNodePosi(T) x, VST& visit ) { //浜屽弶鏍戠殑鍚庡簭閬嶅巻锛堣凯浠ｇ増锛?
   Stack<BinNodePosi(T)> S; //杈呭姪鏍?
   if ( x ) S.push ( x ); //鏍硅妭鐐瑰叆鏍?
   while ( !S.empty() ) {
      if ( S.top() != x->parent ) //鑻ユ爤椤堕潪褰撳墠鑺傜偣涔嬬埗锛堝垯蹇呬负鍏跺彸鍏勶級锛屾鏃堕渶
         gotoHLVFL ( S ); //鍦ㄤ互鍏跺彸鍏勪负鏍逛箣瀛愭爲涓紝鎵惧埌HLVFL锛堢浉褰撲簬閫掑綊娣卞叆鍏朵腑锛?
      x = S.pop(); visit ( x->data ); //寮瑰嚭鏍堥《锛堝嵆鍓嶄竴鑺傜偣涔嬪悗缁э級锛屽苟璁块棶涔?
   }
}