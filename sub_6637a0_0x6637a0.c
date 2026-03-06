// 函数名称: sub_6637a0
// 虚拟地址: 0x6637a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_6637a0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: void* eax = arg1
    void* eax = arg1
    int32_t var_8 = 1
    
    if (eax == 0)
        return eax
    
    if (arg2 s< 0 || arg3 s<= 0 || arg4 s< 0 || arg5 s< 0 || arg6 s< 0 || arg7 s< 0 || arg8 s< 0
            || arg9 s< 0)
        sub_664100(eax, "Ignoring attempt to set negative chromaticity value")
        eax = arg1
        var_8 = 0
    
    if (arg2 s> 0x186a0 - arg3)
        sub_664100(eax, "Invalid cHRM white point")
        eax = arg1
        var_8 = 0
    
    if (arg4 s> 0x186a0 - arg5)
        sub_664100(eax, "Invalid cHRM red point")
        eax = arg1
        var_8 = 0
    
    if (arg6 s> 0x186a0 - arg7)
        sub_664100(eax, "Invalid cHRM green point")
        eax = arg1
        var_8 = 0
    
    if (arg8 s> 0x186a0 - arg9)
        sub_664100(eax, "Invalid cHRM blue point")
        var_8 = 0
    
    int32_t edi_1 = arg6 - arg4
    int32_t esi_1 = arg9 - arg5
    int32_t ebx_1 = arg8 - arg4
    int32_t ecx_3 = edi_1 & 0xffff
    int32_t edx_3 = esi_1 & 0xffff
    int32_t edi_3 = edx_3 * ecx_3
    uint32_t eax_3 = zx.d((edi_1 s>> 0x10).w)
    uint32_t ecx_6 = zx.d((esi_1 s>> 0x10).w)
    int32_t eax_5 = arg7 - arg5
    uint32_t edx_7 = zx.d((eax_5 s>> 0x10).w)
    int32_t esi_6 = ecx_6 * ecx_3 + edx_3 * eax_3 + zx.d((edi_3 s>> 0x10).w)
    int32_t eax_6 = eax_5 & 0xffff
    int32_t edi_7 = ebx_1 & 0xffff
    int32_t ebx_3 = edi_7 * eax_6
    uint32_t edx_10 = zx.d((ebx_1 s>> 0x10).w)
    int32_t edi_10 = edi_7 * edx_7 + zx.d((ebx_3 s>> 0x10).w) + edx_10 * eax_6
    
    if (zx.d((esi_6 s>> 0x10).w) + ecx_6 * eax_3 != zx.d((edi_10 s>> 0x10).w) + edx_10 * edx_7
            || (esi_6 << 0x10 | zx.d(edi_3.w)) != (edi_10 << 0x10 | zx.d(ebx_3.w)))
        return var_8
    
    sub_664100(arg1, "Ignoring attempt to set cHRM RGB triangle with zero area")
    return 0
}
