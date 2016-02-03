//
//  AmazonItem.h
//  Lecture 3 - Object Orientation
//
//  Created by Rosario Tarabocchia on 2/3/16.
//  Copyright © 2016 RLDT. All rights reserved.
//

//class is a blueprint for stuff

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h> // CGFloat is part of this import... not foundation.

//Classes are the mold... in this case AmazonItem

@interface AmazonItem : NSObject //Superclass

// this is wear you establish the property of the class

@property (nonatomic, strong) NSString *name;

// nonatomic and strong we will learn later... but for now this makes a property

@property (assign, nonatomic) NSUInteger price;

//strong does not apply to primitives... assign is the default

-(void) applyDiscountToPrice:(CGFloat)percentage;

// - mean instances of this class can do this method

@end
