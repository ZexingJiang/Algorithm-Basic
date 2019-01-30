/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T, typename VST> //鍏冪礌绫诲瀷銆佹搷浣滃櫒
void travPre_R ( BinNodePosi(T) x, VST& visit ) { //浜屽弶鏍戝厛搴忛亶鍘嗙畻娉曪紙閫掑綊鐗堬級
   if ( !x ) return;
   visit ( x->data );
   travPre_R ( x->lc, visit );
   travPre_R ( x->rc, visit );
}
