//
//  PlayingCard.h
//  Matchismo
//
//  Created by Evan Cooke on 3/2/14.
//  Copyright (c) 2014 Evan Cooke. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
