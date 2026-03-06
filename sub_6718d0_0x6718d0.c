// 函数名称: sub_6718d0
// 虚拟地址: 0x6718d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6718d0(void* arg1, char* arg2, int32_t arg3, char* arg4, uint32_t arg5)
{
    // 第一条实际指令: uint32_t ebx = 0
    uint32_t ebx = 0
    int32_t var_20
    __builtin_memset(&var_20, 0, 0x14)
    char* var_8
    int32_t result = sub_670650(arg1, arg2, &var_8)
    
    if (result == 0)
        return result
    
    if (arg3 != 0)
        sub_664100(arg1, "Unknown compression type in iCCP chunk")
    
    char* eax_3 = arg4
    
    if (eax_3 != 0)
        uint32_t ecx_1 = arg5
        
        if (ecx_1 s> 3)
            ebx = ((zx.d(*eax_3) << 8 | zx.d(eax_3[1])) << 8 | zx.d(eax_3[2])) << 8 | zx.d(eax_3[3])
            
            if (ebx s< 0)
                sub_664100(arg1, "Embedded profile length in iCCP chunk is negative")
                return sub_666530(arg1, var_8)
        
        if (ecx_1 s< ebx)
            sub_664100(arg1, "Embedded profile length too large in iCCP chunk")
            return sub_666530(arg1, var_8)
        
        if (ecx_1 s> ebx)
            sub_664100(arg1, "Truncating profile to actual length in iCCP chunk")
            eax_3 = arg4
            arg5 = ebx
            ecx_1 = ebx
        
        if (ecx_1 != 0)
            arg5 = sub_66f490(eax_3, arg1, arg5, &var_20, eax_3, 0)
    else
        arg5 = 0
    
    int32_t edx_6 = sub_66f010(arg1, result + arg5 + 2)
    char* ebx_8 = var_8
    ebx_8[result + 1] = 0
    
    if (arg1 != 0 && ebx_8 != 0 && result != 0xfffffffe)
        sub_666640(arg1, ebx_8, result + 2)
        edx_6 = sub_662280(arg1, ebx_8, result + 2)
    
    if (arg5 != 0)
        sub_66f710(&var_20, edx_6, arg1, arg5)
    
    sub_66f0f0(arg1)
    return sub_666530(arg1, ebx_8)
}
