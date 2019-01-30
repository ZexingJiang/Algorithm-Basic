/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T, typename VST> //鍏冪礌绫诲瀷銆佹搷浣滃櫒
void travIn_I4 ( BinNodePosi(T) x, VST& visit ) { //浜屽弶鏍戜腑搴忛亶鍘嗭紙杩唬鐗?4锛屾棤闇€鏍堟垨鏍囧織浣嶏級
   while ( true )
      if ( HasLChild ( *x ) ) //鑻ユ湁宸﹀瓙鏍戯紝鍒?
         x = x->lc; //娣卞叆閬嶅巻宸﹀瓙鏍?
      else { //鍚﹀垯
         visit ( x->data ); //璁块棶褰撳墠鑺傜偣锛屽苟
         while ( !HasRChild ( *x ) ) //涓嶆柇鍦板湪鏃犲彸鍒嗘敮澶?
            if ( ! ( x = x->succ() ) ) return; //鍥炴函鑷崇洿鎺ュ悗缁э紙鍦ㄦ病鏈夊悗缁х殑鏈妭鐐瑰锛岀洿鎺ラ€€鍑猴級
            else visit ( x->data ); //璁块棶鏂扮殑褰撳墠鑺傜偣
         x = x->rc; //锛堢洿鑷虫湁鍙冲垎鏀锛夎浆鍚戦潪绌虹殑鍙冲瓙鏍?
      }
}