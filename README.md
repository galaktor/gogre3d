# gogre3d
I am working on a game project using golang and intend to use Ogre3d for graphics. For this purpose I created a slim Go wrapper for ogre3d: enter "gogre3d".

Ogre3d has a huge codebase, and I do not aim to provide a generic, complete interface to it all. Instead it will start off very small, based on my own actual requirements, and grow with the game project.

## llcoi
gogre3d links to Ogre3d via the llcoi project (https://bitbucket.org/galaktor/llcoi). llcoi is a minimalist ANSI C interface to Ogre. The capabilities of gogre3d are directly dependant on llcoi exposing the required functionality. Keep that in mind if you need to change gogre3d - you might need to add a function or two to llcoi, first. I encourage you to contribute whatever you add to llcoi back to the project - it's not an official part of Ogre, and needs the community in order to expand.

# using it
gogre3d is still in a /very/ early stage - as a result, the build/deployment is not very user-friendly (yet!). Until I make that better, some minor manual configuration is required.

## dependencies
gogre3d is /not/ a port of ogre to golang. It's a wrapper, and in fact it's really just a really slim wrapper on top of the already slim C wrapper llcoi. gogre3d compiles and links only to llcoi. llcoi, however, obviously depends on Ogre (and OIS).

### gogre3d depends /directly/ on
* llcoi
 * ogre_interface.h
 * ois_interface.h
 * libllcoi.so


### as a result, gogre3d also depends /indirectly/ (through llcoi) on
* OIS
 * libOIS.so
* Ogre
 * libOgreMain.so
 * (.. other run-time and compile-time dependencies ...)


As far as build and compiling is concerned, llcoi is all that's needed. However, your application might not run if other runtime deps are missing. Obviously Ogre itself has many other dependencies. Depending on how you built llcoi, OIS, Ogre and their dependencies must be available in order to use gogre3d. Installing Ogre is way outside of this scope.

### configuring llcoi paths
gogre3d uses #cgo (which effectively uses gcc) to include and link header and library files. It needs to know where to find the llcoi headers and dyamic library, otherwise gogre3d won't compile. So open gogre3d.go and right at the top you need to match the paths to your environment:

```go
 #cgo LDFLAGS: -L/path/to/llcoi/library  // <- set this to where llcoi lib is
 #cgo LDFLAGS: -lllcoi                   // <- only change if lib name differs

 #cgo CFLAGS:  -I/path/to/llcoi/headers  // <- set this to where the below headers are
 #include "ogre_interface.h"             // <- leave this; llcoi ogre header
 #include "ois_interface.h"              // <- leave this; llcoi ois header
```

## importing gogre3d
All of the exposed functionality is currently in a single package, 'gogre3d'. Refer to the ./sample/sample.go file for an example use of gogre3d. It can be run if the runtime dependencies are available (see above).

# License
gogre3d is licensed under the MIT license. You can find a copy in the LICENSE file, or online at http://opensource.org/licenses/mit-license.php
Copyright (c) 2012 Raphael Estrada (http://www.galaktor.net)