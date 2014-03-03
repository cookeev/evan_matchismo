//
//  Card.h
//  Matchismo
//
//  Created by Evan Cooke on 3/2/14.
//  Copyright (c) 2014 Evan Cooke. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject


@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end

