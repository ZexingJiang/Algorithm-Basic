/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

/******************************************************************************************
 * BinNode鐘舵€佷笌鎬ц川鐨勫垽鏂?
 ******************************************************************************************/
#define IsRoot(x) ( ! ( (x).parent ) )
#define IsLChild(x) ( ! IsRoot(x) && ( & (x) == (x).parent->lc ) )
#define IsRChild(x) ( ! IsRoot(x) && ( & (x) == (x).parent->rc ) )
#define HasParent(x) ( ! IsRoot(x) )
#define HasLChild(x) ( (x).lc )
#define HasRChild(x) ( (x).rc )
#define HasChild(x) ( HasLChild(x) || HasRChild(x) ) //鑷冲皯鎷ユ湁涓€涓瀛?
#define HasBothChild(x) ( HasLChild(x) && HasRChild(x) ) //鍚屾椂鎷ユ湁涓や釜瀛╁瓙
#define IsLeaf(x) ( ! HasChild(x) )

/******************************************************************************************
 * 涓嶣inNode鍏锋湁鐗瑰畾鍏崇郴鐨勮妭鐐瑰強鎸囬拡
 ******************************************************************************************/
#define sibling(p) /*鍏勫紵*/ \
   ( IsLChild( * (p) ) ? (p)->parent->rc : (p)->parent->lc )

#define uncle(x) /*鍙斿彅*/ \
   ( IsLChild( * ( (x)->parent ) ) ? (x)->parent->parent->rc : (x)->parent->parent->lc )

#define FromParentTo(x) /*鏉ヨ嚜鐖朵翰鐨勫紩鐢?/ \
   ( IsRoot(x) ? _root : ( IsLChild(x) ? (x).parent->lc : (x).parent->rc ) )
