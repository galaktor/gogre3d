# gogre3d

I am working on a game project using golang and intend to use Ogre3d for graphics. As part of this project I will create a simple C adapter to Ogre, which will be wrapped by a the "gogre3d" golang module via cgo.

Ogre3d does not provide a "clean C" interface, which makes this adapter necessary. Given the huge scope of Ogre3d, I do not aim to provide a complete golang/C interface. Instead it will start off very small, and grow with the game project.

If you plan to use Ogre from C or golang, feel free to fork and contribute if the interface you find is missing anything.

# build and run
This repo currently contains the ogre headers (version 1.8.0) in the directory "ogreinclude", since the wrapper uses cgo and needs to include them. I did not include the shared libs however since they are huge and can be platform dependent. I provided a little script "runme.sh" to do the compiling and running of the demo. All you need to do is provide the ogre runtime libs in the "ogrelib" dir (read "COPY_HERE.txt" for a file list).

Once the libs are copied in, run the script like so

```bash
$ bash runme.sh
```
If the (very simple) test works, you will see an ogre head like such:

![ogre](https://raw.github.com/galaktor/gogre3d/master/test_worked.png)

Keep in mind that you need to install Ogre's dependencies as well, but installing ogre is outside the scope of this project.

# notes

The current stage is more an experimental proof-of-concept, for me to understand how golang interops with C/C++ etc. It turned out to be quite straightforward, but I obviously only picked a tiny subset of ogre at this point.

## porting ogre to golang
To make this wrapper more comprehensive, a few questions must be answered:
* how to map inheritance/polymorphism to golangs interfaces and structs
* how to handle constants, enums and the likes
* maybe find a nicer (safer?) way than naked void pointers as handles to ogre objects

## SWIG
SWIG is the recommended way to wrap C++ code for golang, which it supports. I am aware of other attempts to create ogre wrappers using SWIG (i.e. OgreDotNet, older PyOgre), and there seems to have been a number of issues in both cases.

I will play with SWIG at some point, maybe it's a viable option for a large-scale golang wrapper, maybe not.
Nonetheless, I can get going with what I have now until I have more complex demands to the render engine.

*Contact me if you are interested in a golang wrapper for ogre*. Maybe we can move this into a more generic direction if there is more interest behind it.

# License
## gogre3d
The MIT License (MIT)
Copyright (c) 2012 Raphael Estrada (galaktor@gmx.de)

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

## Ogre3D
OGRE (www.ogre3d.org) is made available under the MIT License.

Copyright (c) 2000-2009 Torus Knot Software Ltd

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.