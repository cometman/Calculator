//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Clayton Selby on 6/24/12.
//  Copyright (c) 2012 ACU. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

-(void)pushOperand:(double)operand;
-(double)performOperation:(NSString *)operation;

@end
