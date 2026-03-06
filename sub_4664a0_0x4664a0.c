// 函数名称: sub_4664a0
// 虚拟地址: 0x4664a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_4664a0(float* arg1, int32_t arg2)
{
    // 第一条实际指令: long double x87_r7_13 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[2]) - fconvert.t(*arg1))) / fconvert.t(6.0))) / fconvert.t(data_307cc8c)))
    long double x87_r7_13 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(arg1[2]) - fconvert.t(*arg1))) / fconvert.t(6.0)))
        / fconvert.t(data_307cc8c)))
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(arg1[3]) - fconvert.t(arg1[1])))
        / fconvert.t(fconvert.s(float.t(arg2))))) / fconvert.t(data_307cc90)))
    x87_r6 - x87_r7_13
    arg1.w = (x87_r6 < x87_r7_13 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_13) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_13 ? 1 : 0) << 0xe | 0x3000
    
    if ((arg1:1.b & 0x41) != 0)
        return fconvert.t(fconvert.s(x87_r7_13))
    
    return fconvert.t(fconvert.s(x87_r6))
}
