// 函数名称: sub_4ef100
// 虚拟地址: 0x4ef100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_4ef100(float arg1, float arg2)
{
    // 第一条实际指令: sub_68b79a()
    sub_68b79a()
    float var_8_1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg2))))
    long double x87_r6_2 = float.t(0)
    long double temp0 = fconvert.t(arg1)
    x87_r6_2 - temp0
    
    if ((((x87_r6_2 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, temp0) ? 1 : 0) << 0xa
            | (x87_r6_2 == temp0 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
        return fconvert.t(var_8_1)
    
    return fconvert.t(fconvert.s(fconvert.t(var_8_1) + fconvert.t(arg2)))
}
