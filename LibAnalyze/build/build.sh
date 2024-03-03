export LLVM_DIR=/opt/homebrew/Cellar/llvm/17.0.6_1/
cmake -DLT_LLVM_INSTALL_DIR=$LLVM_DIR ../Analyze/
make
