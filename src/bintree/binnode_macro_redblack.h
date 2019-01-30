/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

#define IsBlack(p) ( ! (p) || ( RB_BLACK == (p)->color ) ) //澶栭儴鑺傜偣涔熻浣滈粦鑺傜偣
#define IsRed(p) ( ! IsBlack(p) ) //闈為粦鍗崇孩
#define BlackHeightUpdated(x) ( /*RedBlack楂樺害鏇存柊鏉′欢*/ \
   ( stature( (x).lc ) == stature( (x).rc ) ) && \
   ( (x).height == ( IsRed(& x) ? stature( (x).lc ) : stature( (x).lc ) + 1 ) ) \
)