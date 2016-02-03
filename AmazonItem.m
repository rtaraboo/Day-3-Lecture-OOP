//
//  AmazonItem.m
//  Lecture 3 - Object Orientation
//
//  Created by Rosario Tarabocchia on 2/3/16.
//  Copyright © 2016 RLDT. All rights reserved.
//

#import "AmazonItem.h"

@implementation AmazonItem

-(void)applyDiscountToPrice:(CGFloat)percentage  {
    
    
    self.price *= (1.0 - percentage);
    
    
}

@end
