//
//  UIControl+Attribute.h
//  MasonryXibToCode
//
//  Created by 马洪亮 on 2019/7/25.
//  Copyright © 2019 马洪亮. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <objc/runtime.h>

@interface UIView (Attribute)
@property (nonatomic,copy) IBInspectable NSString * objectName;

@end

