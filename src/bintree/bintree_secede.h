/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> //浜屽弶鏍戝瓙鏍戝垎绂荤畻娉曪細灏嗗瓙鏍憍浠庡綋鍓嶆爲涓憳闄わ紝灏嗗叾灏佽涓轰竴妫电嫭绔嬪瓙鏍戣繑鍥?
BinTree<T>* BinTree<T>::secede ( BinNodePosi(T) x ) { //assert: x涓轰簩鍙夋爲涓殑鍚堟硶浣嶇疆
   FromParentTo ( *x ) = NULL; //鍒囨柇鏉ヨ嚜鐖惰妭鐐圭殑鎸囬拡
   updateHeightAbove ( x->parent ); //鏇存柊鍘熸爲涓墍鏈夌鍏堢殑楂樺害
   BinTree<T>* S = new BinTree<T>; S->_root = x; x->parent = NULL; //鏂版爲浠涓烘牴
   S->_size = x->size(); _size -= S->_size; return S; //鏇存柊瑙勬ā锛岃繑鍥炲垎绂诲嚭鏉ョ殑瀛愭爲
}