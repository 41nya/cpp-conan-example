## Usage
- Install(The following is for Mac.)
```
brew update
brew install conan
```
- Setup
 - Create conanfile.txt.
 - Check package(The following is an example.).
```
conan search rapidjson --remote=conan-center
conan inspect rapidjson/1.1.0
```
 - Install package
```
mkdir build && cd build
conan install ..
cd ..
```

- Build
```
cmake .
make
```