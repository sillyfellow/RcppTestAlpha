library(Rcpp)
#source(file.path("global", "globalConfig.R"))

Rcpp.package.skeleton(
  "optimizerPackage",
  cpp_files = file.path("num.cpp"),
  path = "build",
  module = T,
  example_code = F
)
