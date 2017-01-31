
# Compile

```
Rscript test.R
```

This will read the num.cpp (note: the filename should match the classname), and craete the package within build/<given-name-of-package>.

# Create Shared Object

CD into the build directory, and then run

```
R CMD INSTALL <given-name-of-package>
```

This will compile the C code, create an .so and install it within the R-library-path

# Usage

Load R (either via Rstudio, or via console), and then `library(given-name-of-package)` will load the package, and you may use it as you like.

Example  (from the rcpp hello world example)

```
> library(optimizerPackage)
> optimizerPackage::World()
Error: attempt to apply non-function
> optimizerPackage::World$new()
C++ object <0x7fe353405e30> of class 'World' <0x7fe3537d5a00>
> x <- optimizerPackage::World$new()
> x$hello()
> x$greet()
[1] "hello"
>
```
