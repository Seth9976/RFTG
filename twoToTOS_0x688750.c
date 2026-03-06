// 函数名称: __twoToTOS
// 虚拟地址: 0x688750
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double__twoToTOS(long double arg1 @ st0)
{
    // 第一条实际指令: long double result = roundint.t(arg1)
    long double result = roundint.t(arg1)
    __fscale(__f2xm1(fneg(result - arg1)) + float.t(1), result)
    return result
}
