//
//  UIView+Ext.h
//  PingAnWifi
//
//  Created by zhouli on 15/8/12.
//  Copyright (c) 2015年 Ping An Insurance(Group) Company of China, Ltd. All rights reserved.
//
//  简化UIView的属性值存取方法
//

#import <UIKit/UIKit.h>

@interface UIView (Ext)
/**
 * @brief Shortcut for frame.origin.x.
 *        Sets frame.origin.x = originX
 */
@property (nonatomic) CGFloat originX;

/**
 * @brief Shortcut for frame.origin.y
 *        Sets frame.origin.y = originY
 */
@property (nonatomic) CGFloat originY;

/**
 * @brief Shortcut for frame.origin.x + frame.size.width
 *       Sets frame.origin.x = rightX - frame.size.width
 */
@property (nonatomic) CGFloat rightX;

/**
 * @brief Shortcut for frame.origin.y + frame.size.height
 *        Sets frame.origin.y = bottomY - frame.size.height
 */
@property (nonatomic) CGFloat bottomY;

/**
 * @brief Shortcut for frame.size.width
 *        Sets frame.size.width = width
 */
@property (nonatomic) CGFloat width;

/**
 * @brief Shortcut for frame.size.height
 *        Sets frame.size.height = height
 */
@property (nonatomic) CGFloat height;

/**
 * @brief Shortcut for center.x
 * Sets center.x = centerX
 */
@property (nonatomic) CGFloat centerX;

/**
 * @brief Shortcut for center.y
 *        Sets center.y = centerY
 */
@property (nonatomic) CGFloat centerY;

/**
 * @brief Shortcut for frame.origin
 */
@property (nonatomic) CGPoint origin;

/**
 * @brief Shortcut for frame.size
 */
@property (nonatomic) CGSize size;

///< 移除此view上的所有子视图
- (void)removeAllSubviews;

@end
