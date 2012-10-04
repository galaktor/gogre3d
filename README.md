# gogre3d
I am working on a game project using golang and intend to use Ogre3d for graphics. For this purpose I created a slim Go wrapper for ogre3d: enter "gogre3d".

Ogre3d has a huge codebase, and I do not aim to provide a generic, complete interface to it all. Instead it will start off very small, based on my own actual requirements, and grow with the game project.

# quickstart
## install dependencies
make sure they are in the library load path (e.g. windows: on the PATH; linux: /usr/lib or similar)
* install Ogre (http://www.ogre3d.org/ https://bitbucket.org/cabalistic/ogredeps)
* install llcoi (https://bitbucket.org/galaktor/llcoi)

## gogre3d
* fetch using 'go get'
```
$ go get github.com/galaktor/gogre3d
```

## test it
you can verify that it works by running the sample included in the gogre3d sources
```
$ cd $GOPATH/src/github.com/galaktor/gogre3d/sample
$ go run sample.go
```

you should see the following ogre. Arrow keys rotate the head, Escape exits the demo.
![sample render](https://raw.github.com/galaktor/gogre3d/master/sample/demo.gif)


# dependencies explained
## llcoi
gogre3d is /not/ a port of ogre to golang. It's a wrapper, and in fact it's really just a really slim wrapper on top of the already slim C wrapper llcoi (https://bitbucket.org/galaktor/llcoi). gogre3d compiles and links only to llcoi. llcoi, however, obviously depends on Ogre (and OIS).

The functionality of gogre3d is directly dependant on llcoi exposing the required functionality. Especially during the early stages, gogre3d will only expose a small subset of llcoi, which in turn only exposes basic ogre functionality.

Exposing additional features to both llcoi and gogre3d is fairly trivial. I encourage you to contribute whatever you add back to the projects - it's not an official part of Ogre, and needs the community in order to expand.

## runtime dependencies
As far as gogre3d is concerned, llcoi is the only requirement. However, your application might not run if other runtime deps are missing. Obviously Ogre itself has many other dependencies. Depending on how you built llcoi, OIS, Ogre and their dependencies must be available in order to use gogre3d. Installing Ogre is way outside of this scope.

### direct dependencies
* llcoi
 * ogre_interface.h
 * ois_interface.h
 * libllcoi.so


### indirect dependencies (through llcoi)
* OIS
 * libOIS.so
* Ogre
 * libOgreMain.so
 * (.. other run-time and compile-time dependencies ...)


## dependency-related errors
### llcoi not found
```bash
/usr/bin/ld: cannot find -lllcoi
collect2: ld returned 1 exit status

```
fix: make sure llcoi library is on the library load path

### ogre not found
```bash
libllcoi.so: undefined reference to `Ogre::Root::... etc.
```
fix: make sure i.e. OgreMain is on the library load path


## custom dependency locations
gogre3d uses #cgo (which effectively uses gcc) to include and link to C header and libraries. If you want to point to custom locations of llcoi/ogre dependencies, you can use #cgo directives to do so. Refer to the golang cgo documentation for details: http://golang.org/cmd/cgo/


# TODOs
* better Mouse input
* move input into "gois" package
 * subpackages for mouse/keyboard, useful for constants (gogre3d.KC_UP isn't nice, something like key.UP would be better)
* expose more of llcoi's functionality, particularly scene/node/entity/light/camera basics
* idiomatic Go API
* maybe simplifiy installation including llcoi somehow? maybe provide prebuilt binaries including ogre for 'plug-n-play' effect?

# License
gogre3d is licensed under the MIT license. You can find a copy in the LICENSE file, or online at http://opensource.org/licenses/mit-license.php
Copyright (c) 2012 Raphael Estrada (http://www.galaktor.net)
