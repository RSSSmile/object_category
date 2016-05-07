//
//  UIImage+RSS.h
//  Category
//
//  Created by 闰尚松 on 16/5/7.
//  Copyright © 2016年 runshangsong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (RSS)

/** 播放GIF图 */
+ (UIImage *)animatedGIFWithData:(NSData *)data;

/**
 * UIWebView加载GIF图
 * frame:size可以传空
 */
+ (UIWebView *)webViewLoadGifWithFrame:(CGRect)frame imageName:(NSString *)imageName;

/** 压缩图片到指定大小 */
+ (UIImage *)imageCompress:(UIImage *)sourceImage targetSize:(CGSize)size;

@end
