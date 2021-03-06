//
//  Person.h
//  DesignPatterns
//
//  Created by RenPeng on 16/8/31.
//  Copyright © 2016年 leichunfeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Action;
@protocol VisitorPerson <NSObject>

- (void)accept:(id<Action>)visitor;

@end
