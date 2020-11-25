//
//  tztAutoScrollLabel.h
//  tztMobileApp_zxsc2.0
//
//  Created by 刘沛源 on 2020/10/13.
//  Copyright © 2020 ZZTZT. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, tztScrollLabelAlignment) {
    zzScrollLabelAlignmentLeft = 0,
    zzScrollLabelAlignmentCenter,
    zzScrollLabelAlignmentRight
};
@interface tztAutoScrollLabel : UIView

@property (nonatomic, strong) UIFont *font;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, assign) CGFloat scrollDuration;
@property (nonatomic, assign) CGFloat scrollVelocity;
@property (nonatomic, assign) CGFloat paddingBetweenLabels;
@property (nonatomic, assign) tztScrollLabelAlignment labelAlignment;
@property (nonatomic, assign) CGFloat delayInterval;
@property (nonatomic, assign) CGFloat pauseInterval;
@property (nonatomic, assign) BOOL autoBeginScroll;
@property (nonatomic, assign, getter=isScrolling) BOOL scrolling;       //是否在滚动
@property (nonatomic, assign) NSInteger speed;

- (void)startScrollAnimation;
- (void)stopScrollAnimation;

- (void)rejustlabels;
@end
