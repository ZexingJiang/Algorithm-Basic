/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> //鍒犻櫎浜屽弶鏍戜腑浣嶇疆x澶勭殑鑺傜偣鍙婂叾鍚庝唬锛岃繑鍥炶鍒犻櫎鑺傜偣鐨勬暟鍊?
int BinTree<T>::remove ( BinNodePosi(T) x ) { //assert: x涓轰簩鍙夋爲涓殑鍚堟硶浣嶇疆
   FromParentTo ( *x ) = NULL; //鍒囨柇鏉ヨ嚜鐖惰妭鐐圭殑鎸囬拡
   updateHeightAbove ( x->parent ); //鏇存柊绁栧厛楂樺害
   int n = removeAt ( x ); _size -= n; return n; //鍒犻櫎瀛愭爲x锛屾洿鏂拌妯★紝杩斿洖鍒犻櫎鑺傜偣鎬绘暟
}
template <typename T> //鍒犻櫎浜屽弶鏍戜腑浣嶇疆x澶勭殑鑺傜偣鍙婂叾鍚庝唬锛岃繑鍥炶鍒犻櫎鑺傜偣鐨勬暟鍊?
static int removeAt ( BinNodePosi(T) x ) { //assert: x涓轰簩鍙夋爲涓殑鍚堟硶浣嶇疆
   if ( !x ) return 0; //閫掑綊鍩猴細绌烘爲
   int n = 1 + removeAt ( x->lc ) + removeAt ( x->rc ); //閫掑綊閲婃斁宸︺€佸彸瀛愭爲
   release ( x->data ); release ( x ); return n; //閲婃斁琚憳闄よ妭鐐癸紝骞惰繑鍥炲垹闄よ妭鐐规€绘暟
}