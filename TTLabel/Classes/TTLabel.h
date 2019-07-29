//
//  TTLabel.h
//  Pods-TTLabel_Example
//
//  Created by MR_THT on 2019/7/29.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TTLabel : UILabel

///  圆角 默认3.0
@property (nonatomic, assign) IBInspectable CGFloat cornerRadius;
///  内边距 默认UIEdgeInsetsZero
@property (nonatomic, assign) UIEdgeInsets padding;

/**
 由于xib IBInspectable 不支持UIEdgeInsets， 故添加单独设置内边距属性，
 ！！！修改padding,会同步到 top_padding等4个属性变量
 */
@property (nonatomic, assign) IBInspectable CGFloat top_padding;
@property (nonatomic, assign) IBInspectable CGFloat left_padding;
@property (nonatomic, assign) IBInspectable CGFloat right_padding;
@property (nonatomic, assign) IBInspectable CGFloat bottom_padding;

@end

NS_ASSUME_NONNULL_END
