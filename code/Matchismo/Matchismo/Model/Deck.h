//
//  Deck.h
//  Matchismo
//
//  Created by Evan Cooke on 3/2/14.
//  Copyright (c) 2014 Evan Cooke. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
