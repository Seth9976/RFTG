// 函数名称: sub_518990
// 虚拟地址: 0x518990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_518990(float* arg1)
{
    // 第一条实际指令: float* esi = arg1
    float* esi = arg1
    int32_t ecx
    int32_t var_98 = ecx
    long double st0_1 = sub_4064d0(fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(sub_518a50(arg1))) - fconvert.t(0.0)))))
    long double temp0 = fconvert.t(9.99999975e-06f)
    st0_1 - temp0
    arg1.w = (st0_1 < temp0 ? 1 : 0) << 8 | (is_unordered.t(st0_1, temp0) ? 1 : 0) << 0xa
        | (st0_1 == temp0 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        float var_8c[0x10]
        int32_t edx
        sub_5185c0(&var_8c, edx, esi)
        long double x87_r6 = float.t(1)
        float var_4c[0x10]
        int32_t var_98_3 = __builtin_memcpy(&var_4c, &var_8c, 0x40)
        sub_518900(&var_8c, edx, &var_4c, fconvert.s(fconvert.t(fconvert.s(x87_r6 / x87_r6))))
        int32_t entry_result
        __builtin_memcpy(entry_result, &var_8c, 0x40)
        return entry_result
    
    sub_4c5870("0", &data_83f3d3, "c:\ax2010\engine\Mat4.cpp", 0x124, "Mat4Inverse")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
