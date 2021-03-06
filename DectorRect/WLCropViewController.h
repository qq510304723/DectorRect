//
//  WLCropViewController.h
//  MMCamScanner
//
//  Created by mac on 09/06/15.
//  Copyright (c) 2015 ailink. All rights reserved.
//  图片裁剪+矫正


#import <UIKit/UIKit.h>
#import "UIImageView+ContentFrame.h"
#import "WLCGTransfromHelper.h"


@class WLCropViewController;
@protocol MMCropDelegate <NSObject>

-(void)didFinishCropping:(UIImage *)finalCropImage from:(WLCropViewController *)cropObj;

@end

@interface WLCropViewController : UIViewController{
    CGFloat _rotateSlider;
    CGRect _initialRect,final_Rect;
}

@property (weak,   nonatomic) id<MMCropDelegate> cropdelegate;
@property (strong, nonatomic) UIImageView *sourceImageView;
@property (strong, nonatomic) UIImage *adjustedImage,*cropgrayImage,*cropImage;

@property (assign, nonatomic) TransformCIFeatureRect detectFeature;

@property (assign, nonatomic) CGSize orgSize;

//Detect Edges
- (void) closeWithCompletion:(void (^)(void))completion;
@end
