# ChaiLove :heart:
[![Travis](https://travis-ci.org/libretro/libretro-chailove.svg?branch=master)](https://travis-ci.org/libretro/libretro-chailove)
[![Appveyor](https://ci.appveyor.com/api/projects/status/es2wh45kcu76n6a9/branch/master?svg=true)](https://ci.appveyor.com/project/RobLoach/libretro-chailove/branch/master)
[![platform libretro](https://img.shields.io/badge/platform-libretro-brightgreen.svg)](http://buildbot.fiveforty.net/admin/buildbot/build/?name=chailove)
[![Documentation](https://img.shields.io/badge/docs-doxygen-blue.svg)](https://rawgit.com/libretro/libretro-chailove/docs/)

ChaiLove is an awesome framework you can use to make 2D games in [ChaiScript](http://chaiscript.com/). It's free, open-source, and works on Windows, Mac OS X, Linux, Android, and ARM through [libretro](https://www.libretro.com)/[RetroArch](http://retroarch.com).

[![Floppy Bird Gameplay](docs/screenshot.png)](https://www.youtube.com/watch?v=RLVwTh6qDFI&hd=1)

## Gallery

- [Floppy Bird](https://github.com/RobLoach/ChaiLove-FloppyBird)
- [Nyan Cat](https://github.com/RobLoach/ChaiLove-NyanCat)
- [Snake](examples/snake/Snake.chai)
- [Game of Life](https://github.com/RobLoach/ChaiLove-GameOfLife)
- [... and more](https://github.com/topics/chailove)

## Usage

ChaiLove is a [libretro](https://www.libretro.com/) core, which can be run through [RetroArch](http://retroarch.com/). [Floppy Bird](https://github.com/RobLoach/ChaiLove-FloppyBird) is a [free game you can download and play](https://www.youtube.com/watch?v=RLVwTh6qDFI)...

1. Run [RetroArch](http://retroarch.com/)
2. *Online Updater* → *Core Updator* → *ChaiLove*
3. *Online Updater* → *Content Downloader* → *ChaiLove* → *Floppy Bird*
4. *Load Content* → *Downloads* → *Floppy Bird.chailove*

Alternatively, you can run the ChaiLove core through RetroArch via the command line:

```
wget https://buildbot.libretro.com/assets/cores/ChaiLove/Floppy%20Bird.chailove
retroarch -L chailove_libretro.so Floppy\ Bird.chailove
```

## API

The [ChaiLove API](https://rawgit.com/libretro/libretro-chailove/docs/) is roughly inspired by the [LÖVE API](https://love2d.org/wiki/Main_Page). The following `main.chai` is a [simple Hello World example](examples/simple/main.chai):

``` lua
global logo
global x = 10.0f

def load() {
	logo = love.graphics.newImage("logo.png")
}

def draw() {
	love.graphics.print("Hello World!", 400, 300)
	love.graphics.draw(logo, x, 100)
}

def update(dt) {
	x = x + 20.0f * dt
}
```

To run it, execute the following:

```
retroarch -L chailove_libretro.so main.chai
```

## Development

Behind ChaiLove, there's the documentation, compiling it, along with testing.

### Compiling

Use the following command to compile the core, with at least `g++ >=5.2`:

```
make
```

### Testing

Run the automated tests by executing:

```
make test
```

Run the usability tests with:

```
retroarch -L chailove_libretro.so test/main.chai
```

### Documentation

Visit the [ChaiLove API documentation](https://rawgit.com/libretro/libretro-chailove/docs/). Build it through [Doxygen](http://www.stack.nl/~dimitri/doxygen/) by using:

```
make docs
```

### Workflow

ChaiLove uses [Gitflow](https://www.atlassian.com/git/tutorials/comparing-workflows/gitflow-workflow) where new features are merged to `dev`, and then a periodic release is made to the `master` branch. Releases use [Semantic Versioning](https://semver.org) to ensure version compatibility.

## Authors

The following individuals contributed to ChaiLove:

- [@RobLoach](http://github.com/robloach)
- [sdl-libretro](https://github.com/r-type/sdl-libretro) by [@r-type](https://github.com/r-type)
- [Logo](docs/chailove.png) by [@baxysquare](https://github.com/baxysquare)
