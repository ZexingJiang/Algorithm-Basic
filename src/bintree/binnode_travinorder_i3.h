/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T, typename VST> //鍏冪礌绫诲瀷銆佹搷浣滃櫒
void travIn_I3 ( BinNodePosi(T) x, VST& visit ) { //浜屽弶鏍戜腑搴忛亶鍘嗙畻娉曪紙杩唬鐗?3锛屾棤闇€杈呭姪鏍堬級
   bool backtrack = false; //鍓嶄竴姝ユ槸鍚﹀垰浠庡彸瀛愭爲鍥炴函鈥斺€旂渷鍘绘爤锛屼粎O(1)杈呭姪绌洪棿
   while ( true )
      if ( !backtrack && HasLChild ( *x ) ) //鑻ユ湁宸﹀瓙鏍戜笖涓嶆槸鍒氬垰鍥炴函锛屽垯
         x = x->lc; //娣卞叆閬嶅巻宸﹀瓙鏍?
      else { //鍚﹀垯鈥斺€旀棤宸﹀瓙鏍戞垨鍒氬垰鍥炴函锛堢浉褰撲簬鏃犲乏瀛愭爲锛?
         visit ( x->data ); //璁块棶璇ヨ妭鐐?
         if ( HasRChild ( *x ) ) { //鑻ュ叾鍙冲瓙鏍戦潪绌猴紝鍒?
            x = x->rc; //娣卞叆鍙冲瓙鏍戠户缁亶鍘?
            backtrack = false; //骞跺叧闂洖婧爣蹇?
         } else { //鑻ュ彸瀛愭爲绌猴紝鍒?
            if ( ! ( x = x->succ() ) ) break; //鍥炴函锛堝惈鎶佃揪鏈妭鐐规椂鐨勯€€鍑鸿繑鍥烇級
            backtrack = true; //骞惰缃洖婧爣蹇?
         }
      }
}