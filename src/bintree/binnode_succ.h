/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> BinNodePosi(T) BinNode<T>::succ() { //瀹氫綅鑺傜偣v鐨勭洿鎺ュ悗缁?
   BinNodePosi(T) s = this; //璁板綍鍚庣户鐨勪复鏃跺彉閲?
   if ( rc ) { //鑻ユ湁鍙冲瀛愶紝鍒欑洿鎺ュ悗缁у繀鍦ㄥ彸瀛愭爲涓紝鍏蜂綋鍦板氨鏄?
      s = rc; //鍙冲瓙鏍戜腑
      while ( HasLChild ( *s ) ) s = s->lc; //鏈€闈犲乏锛堟渶灏忥級鐨勮妭鐐?
   } else { //鍚﹀垯锛岀洿鎺ュ悗缁у簲鏄€滃皢褰撳墠鑺傜偣鍖呭惈浜庡叾宸﹀瓙鏍戜腑鐨勬渶浣庣鍏堚€濓紝鍏蜂綋鍦板氨鏄?
      while ( IsRChild ( *s ) ) s = s->parent; //閫嗗悜鍦版部鍙冲悜鍒嗘敮锛屼笉鏂湞宸︿笂鏂圭Щ鍔?
      s = s->parent; //鏈€鍚庡啀鏈濆彸涓婃柟绉诲姩涓€姝ワ紝鍗虫姷杈剧洿鎺ュ悗缁э紙濡傛灉瀛樺湪锛?
   }
   return s;
}