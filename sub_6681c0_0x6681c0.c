// 函数名称: sub_6681c0
// 虚拟地址: 0x6681c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_6681c0(int32_t arg1, int32_t arg2, int32_t arg3, char* arg4, void* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    char eax = (*(arg4 + 0x6c)).b
    var_8 = 0
    
    if ((eax & 1) == 0)
        sub_664320(arg4, "Missing IHDR before sBIT")
        noreturn
    
    if ((eax & 4) != 0)
        sub_664100(arg4, "Invalid sBIT after IDAT")
        return sub_667b40(arg4, arg6)
    
    if ((eax & 2) != 0)
        sub_664100(arg4, "Out of place sBIT chunk")
    
    if (arg5 != 0 && (*(arg5 + 8) & 2) != 0)
        sub_664100(arg4, "Duplicate sBIT chunk")
        return sub_667b40(arg4, arg6)
    
    uint32_t eax_5 = 3
    
    if (arg4[0x13b] != 3)
        eax_5 = zx.d(arg4[0x13f])
    
    if (arg6 != eax_5 || arg6 u> 4)
        sub_664100(arg4, "Incorrect sBIT chunk length")
        return sub_667b40(arg4, arg6)
    
    sub_6667f0(arg4, &var_8, eax_5)
    int32_t result = sub_667b40(arg4, 0)
    
    if (result != 0)
        return result
    
    if ((arg4[0x13b] & 2) != 0)
        char ecx_2 = var_8.b
        arg4[0x199] = var_8:1.b
        arg4[0x19c] = var_8:3.b
        arg4[0x198] = ecx_2
        arg4[0x19a] = var_8:2.b
        return sub_664bd0(arg4, arg5, &arg4[0x198])
    
    char ecx_1 = var_8.b
    arg4[0x19b] = ecx_1
    arg4[0x198] = ecx_1
    arg4[0x199] = ecx_1
    arg4[0x19a] = ecx_1
    arg4[0x19c] = var_8:1.b
    return sub_664bd0(arg4, arg5, &arg4[0x198])
}
