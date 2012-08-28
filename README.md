gogre
=====

I am working on a game project using golang and intend to use Ogre3d for graphics. As part of this project I will create a simple C adapter to Ogre, which will be wrapped by a the "gogre" golang module via cgo.

Ogre3d does not provide a "clean C" interface, which makes this adapter necessary. Given the huge scope of Ogre3d, I do not aim to provide a complete golang/C interface. Instead it will start off very small, and grow with the game project.

If you plan to use Ogre from C or golang, feel free to fork and contribute if the interface you find is missing anything.