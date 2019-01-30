/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> //浜屽弶鏍戝瓙鏍戞帴鍏ョ畻娉曪細灏哠褰撲綔鑺傜偣x鐨勫乏瀛愭爲鎺ュ叆锛孲鏈韩缃┖
BinNodePosi(T) BinTree<T>::attachAsLC ( BinNodePosi(T) x, BinTree<T>* &S ) { //x->lc == NULL
   if ( x->lc = S->_root ) x->lc->parent = x; //鎺ュ叆
   _size += S->_size; updateHeightAbove ( x ); //鏇存柊鍏ㄦ爲瑙勬ā涓巟鎵€鏈夌鍏堢殑楂樺害
   S->_root = NULL; S->_size = 0; release ( S ); S = NULL; return x; //閲婃斁鍘熸爲锛岃繑鍥炴帴鍏ヤ綅缃?
}

template <typename T> //浜屽弶鏍戝瓙鏍戞帴鍏ョ畻娉曪細灏哠褰撲綔鑺傜偣x鐨勫彸瀛愭爲鎺ュ叆锛孲鏈韩缃┖
BinNodePosi(T) BinTree<T>::attachAsRC ( BinNodePosi(T) x, BinTree<T>* &S ) { //x->rc == NULL
   if ( x->rc = S->_root ) x->rc->parent = x; //鎺ュ叆
   _size += S->_size; updateHeightAbove ( x ); //鏇存柊鍏ㄦ爲瑙勬ā涓巟鎵€鏈夌鍏堢殑楂樺害
   S->_root = NULL; S->_size = 0; release ( S ); S = NULL; return x; //閲婃斁鍘熸爲锛岃繑鍥炴帴鍏ヤ綅缃?
}