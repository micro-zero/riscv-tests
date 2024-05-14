#使用前请先修改

make
mkdir cachePerf
mkdir cachePerf/ELF
mkdir cachePerf/dump
mv *.riscv ./cachePerf/ELF
mv *.dump ./cachePerf/dump
rm -rf ../../CRISP/test/cachePerf #你的存放目录
mv ./cachePerf ../../CRISP/test/ #你的存放路径