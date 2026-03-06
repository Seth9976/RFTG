// 函数名称: sub_657700
// 虚拟地址: 0x657700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_657700(float* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ecx_2 = fconvert.s(fconvert.t(*arg1)) & 0x7fffffff
    long double x87_r7_1 = float.t(ecx_2)
    
    if (ecx_2 s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    return fconvert.t(fconvert.s(x87_r7_1 * fconvert.t(7.1771142984289327e-07)
        - fconvert.t(764.6162109375)))
}
