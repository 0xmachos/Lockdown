//
//  Utilities.h
//  Lockdown
//
//  Created by Patrick Wardle on 2/14/16 and is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
//

#ifndef Utilities_h
#define Utilities_h

/* FUNCTIONS */

//check if app is pristine
// ->that is to say, nobody modified on-disk image/resources
OSStatus verifySelf(void);

//display alert about app being unverifable
void showUnverifiedAlert(OSStatus signingError);

//spawn self as root
BOOL spawnAsRoot(char* path, char** argv);

//get OS version
NSDictionary* getOSVersion(void);

//is current OS version supported?
// ->for now, just macOS 10.13.* (High Sierra)
BOOL isSupportedOS(void);

#endif /* Utilities_h */
