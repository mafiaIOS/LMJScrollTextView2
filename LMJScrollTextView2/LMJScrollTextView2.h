//
//  LMJScrollTextView2.h
//  LMJScrollText
//
//  Created by MajorLi on 15/5/4.
//  Copyright (c) 2015年 iOS开发者公会. All rights reserved.
//
//  iOS开发者公会-技术1群 QQ群号：87440292
//  iOS开发者公会-技术2群 QQ群号：232702419
//  iOS开发者公会-议事区  QQ群号：413102158
//

#import <UIKit/UIKit.h>
@class LMJScrollTextView2;

@protocol LMJScrollTextView2Delegate <NSObject>

@optional
- (void)scrollTextView2:(LMJScrollTextView2 *)scrollTextView currentTextIndex:(NSInteger)index;
- (void)scrollTextView2:(LMJScrollTextView2 *)scrollTextView clickIndex:(NSInteger)index content:(NSString *)content;

@end

@interface LMJScrollTextView2 : UIView

@property (nonatomic,assign) id <LMJScrollTextView2Delegate>delegate;

@property (nonatomic,copy)   NSArray * textDataArr;
/* 当textDataArr和attributedTextDataArr中同时有数据的时候，默认选择加载attributedTextDataArr中的数据 */ 

@property (nonatomic,copy)   UIFont  * textFont;
@property (nonatomic,copy)   UIColor * textColor;
@property (nonatomic)        NSTextAlignment textAlignment;

@property (nonatomic,assign) BOOL touchEnable; // defualt is YES

- (void)startScrollBottomToTopWithSpace;
- (void)startScrollTopToBottomWithSpace;

- (void)startScrollBottomToTopWithNoSpace;
- (void)startScrollTopToBottomWithNoSpace;

- (void)stop;
- (void)stopToEmpty;

@end
