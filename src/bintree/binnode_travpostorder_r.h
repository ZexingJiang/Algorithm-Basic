/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T, typename VST> //鍏冪礌绫诲瀷銆佹搷浣滃櫒
void travPost_R ( BinNodePosi(T) x, VST& visit ) { //浜屽弶鏍戝悗搴忛亶鍘嗙畻娉曪紙閫掑綊鐗堬級
   if ( !x ) return;
   travPost_R ( x->lc, visit );
   travPost_R ( x->rc, visit );
   visit ( x->data );
}
