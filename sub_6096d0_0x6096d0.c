// 函数名称: sub_6096d0
// 虚拟地址: 0x6096d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_6096d0(char arg1, char arg2, char arg3, void* arg4 @ edi, char arg5)
{
    // 第一条实际指令: uint32_t eax = zx.d(arg1)
    uint32_t eax = zx.d(arg1)
    uint32_t ecx = zx.d(arg3)
    uint32_t edx = zx.d(arg2)
    uint32_t esi = zx.d(arg5)
    uint32_t result = ((eax << 8 | ecx) << 8 | edx) << 8
    uint32_t esi_1 = esi | result
    
    if (esi_1 != *(arg4 + 0x24))
        long double x87_r6_1 = fconvert.t(0.0039215688593685627)
        arg5.d = fconvert.s(float.t(eax) * x87_r6_1)
        float var_1c_1 = fconvert.s(fconvert.t(arg5.d))
        arg5.d = fconvert.s(float.t(esi) * x87_r6_1)
        float var_20_1 = fconvert.s(fconvert.t(arg5.d))
        arg5.d = fconvert.s(float.t(edx) * x87_r6_1)
        float var_24_1 = fconvert.s(fconvert.t(arg5.d))
        arg5.d = fconvert.s(x87_r6_1 * float.t(ecx))
        result = (*(arg4 + 0x4c))(fconvert.s(fconvert.t(arg5.d)), var_24_1, var_20_1, var_1c_1)
        *(arg4 + 0x24) = esi_1
    
    return result
}
