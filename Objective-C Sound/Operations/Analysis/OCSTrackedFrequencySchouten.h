//
//  OCSTrackedFrequencySchouten.h
//  Objective-C Sound
//
//  Created by Adam Boulanger on 9/18/13.
//  Copyright (c) 2013 Adam Boulanger. All rights reserved.
//

#import "OCSParameter+Operation.h"
#import "OCSControl.h"
#import "OCSFSignal.h"

/**
 Track the frequency of a PVS signal as k-rate variables.
 
 The pitch detection algorithm implemented by pvspitch is based upon
 J. F. Schouten's hypothesis of the neural processes of the brain used to
 determine the pitch of a sound after the frequency analysis of the basilar
 membrane. Except for some further considerations, this operation essentially
 seeks out the highest common factor of an incoming sound's spectral peaks
 to find the pitch that may be attributed to it.
 
 */

@interface OCSTrackedFrequencySchouten : OCSControl

/// Initialize the tracked frequency.
/// @param fSignalSource      Input mono F-Signal.
/// @param amplitudeThreshold Amplitude threshold (0-1). Higher values will eliminate low-amplitude spectral components from being included in the analysis.
- (instancetype)initWithFSignalSource:(OCSFSignal *)fSignalSource
                   amplitudeThreshold:(OCSControl *)amplitudeThreshold;

@end