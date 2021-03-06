//
//  IPSetPagingViewController.h
//  ipad-portfolio
//
//  Created by Brian Dewey on 4/27/11.
//  Copyright 2011 Brian Dewey. 
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>
#import "IPEditableTitleViewController.h"

@class IPSet;
@interface IPSetPagingViewController : IPEditableTitleViewController<
  UICollectionViewDataSource,
  UICollectionViewDelegate,
  UITextFieldDelegate
> {
  
}

//
//  The set we are viewing.
//

@property (nonatomic, strong) IPSet *currentSet;

//
//  Our current page in the set.
//

@property (nonatomic, assign) NSUInteger currentPageIndex;
- (void)setCurrentPageIndex:(NSUInteger)currentPageIndex animated:(BOOL)animated;

//
//  The string to use for the back navigation button.
//  

@property (nonatomic, copy) NSString *backButtonText;

//
//  Interface builder outlets.
//

@property (nonatomic, strong) UICollectionView *pagingView;

@end
