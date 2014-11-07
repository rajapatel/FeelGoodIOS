//
//  ParseHeader.h
//  FeelGood
//
//  Created by Hannah Gibson on 11/6/14.
//  Copyright (c) 2014 Hannah Gibson. All rights reserved.
//

#ifndef FeelGood_ParseHeader_h
#import <Parse/Parse.h>

-(void)setParse{
    [Parse setApplicationId:@"hYyS2k9ZCYZAzXWcPuhswCqHI2q4x6OVlALUKpxM"
                  clientKey:@"HU26OAydkqxlkdIH82OsbcCwKiZZkyYrs2WqtZsB"];
}

-(void)parseAnalytics{
    [PFAnalytics trackAppOpenedWithLaunchOptions:launchOptions];
}

-(void)parseTest{
    PFObject *testObject = [PFObject objectWithClassName:@"TestObject"];
    testObject[@"foo"] = @"bar";
    [testObject saveInBackground];
}

#endif
