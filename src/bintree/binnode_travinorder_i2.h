/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T, typename VST> //鍏冪礌绫诲瀷銆佹搷浣滃櫒
void travIn_I2 ( BinNodePosi(T) x, VST& visit ) { //浜屽弶鏍戜腑搴忛亶鍘嗙畻娉曪紙杩唬鐗?2锛?
   Stack<BinNodePosi(T)> S; //杈呭姪鏍?
   while ( true )
      if ( x ) {
         S.push ( x ); //鏍硅妭鐐硅繘鏍?
         x = x->lc; //娣卞叆閬嶅巻宸﹀瓙鏍?
      } else if ( !S.empty() ) {
         x = S.pop(); //灏氭湭璁块棶鐨勬渶浣庣鍏堣妭鐐归€€鏍?
         visit ( x->data ); //璁块棶璇ョ鍏堣妭鐐?
         x = x->rc; //閬嶅巻绁栧厛鐨勫彸瀛愭爲
      } else
         break; //閬嶅巻瀹屾垚
}