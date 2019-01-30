/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> int BinTree<T>::updateHeight ( BinNodePosi(T) x ) //鏇存柊鑺傜偣x楂樺害
{ return x->height = 1 + max ( stature ( x->lc ), stature ( x->rc ) ); } //鍏蜂綋瑙勫垯锛屽洜鏍戣€屽紓

template <typename T> void BinTree<T>::updateHeightAbove ( BinNodePosi(T) x ) //鏇存柊楂樺害
{ while ( x ) { updateHeight ( x ); x = x->parent; } } //浠巟鍑哄彂锛岃鐩栧巻浠ｇ鍏堛€傚彲浼樺寲
