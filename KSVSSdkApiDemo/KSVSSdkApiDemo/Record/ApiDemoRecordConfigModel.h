//
//  ApiDemoRecordConfigModel.h
//  KSVSSdkApiDemo
//
//  Created by devcdl on 2017/12/26.
//  Copyright © 2017年 Kingsoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, KSYRecordPreset){
    //    KSYRecordPreset360P = 0,
    //    KSYRecordPreset480P = 1,
    KSYRecordPreset540P = 0,
    KSYRecordPreset720P = 1,
    KSYRecordPreset1080P = 2,
    KSYRecordPresetDefault = 3
};

typedef NS_ENUM(NSInteger, KSYOrientation){
    KSYOrientationVertical = 0,
    KSYOrientationHorizontal = 1
};


@interface ApiDemoRecordConfigModel : NSObject
@property (nonatomic, assign) KSYRecordPreset resolution;     //分辨率
@property (nonatomic, assign) NSUInteger fps; //帧率
@property (nonatomic, assign) CGFloat videoKbps; //视频码率
@property (nonatomic, assign) CGFloat audioKbps; //音频码率
@property (nonatomic, assign) KSYOrientation orientation;//横竖屏

- (CGSize)getResolutionFromPreset;

@end
