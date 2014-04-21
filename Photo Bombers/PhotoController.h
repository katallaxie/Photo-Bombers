//
//  PhotoController.h
//  Photo Bombers
//
//  Created by Sebastian Döll on 21/04/14.
//  Copyright (c) 2014 Pixelmilk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PhotoController : NSObject

+ (void)imageForPhoto:(NSDictionary *)photo size:(NSString *)size completion:(void(^) (UIImage *image))completion;

@end
