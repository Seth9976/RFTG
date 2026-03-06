// 函数名称: sub_49dd50
// 虚拟地址: 0x49dd50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49dd50(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4 @ esi, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ebx_1 = arg3 * 0xb4
    int32_t i = sx.d(*(ebx_1 + arg4 + 0x44))
    void* ebx_2 = ebx_1 + arg4
    int32_t edx = 0
    int32_t var_530[0x149]
    
    while (i != 0xffffffff)
        var_530[edx] = i
        i = sx.d(*(arg4 + ((i * 5 + 0x11d) << 2)))
        edx += 1
    
    int32_t ecx_2 = sx.d(*(ebx_2 + 0xae)) - sx.d(*(ebx_2 + 0xb0))
    int32_t var_534 = edx
    
    if (ecx_2 s> 0)
        __builtin_memset(&(&__saved_ebp)[edx - 0x14b], 0xffffffff, ecx_2 << 2)
        var_534 = ecx_2 + edx
    
    sub_49d720(arg4, arg3)
    int32_t result
    
    if (*(ebx_2 + 0xc8) s< *(ebx_2 + 0xc4))
    label_49de5d:
        result = sub_49d860(&var_534, 0, arg4, arg3, 2, &var_530, &var_534, nullptr)
        
        if (*(arg4 + 0x1ec3) == 0)
            result = sub_49dbf0(result, &var_530, arg4, arg3, var_534)
    else
        result = (*(*(ebx_2 + 0x28) + 0xc))(arg4, arg3, 2, &var_530, &var_534, 0, 0, arg5, 0, 0, 0)
        
        if (*(arg4 + 0x1ec3) == 0)
            int32_t eax_4 = *(*(ebx_2 + 0x28) + 0x10)
            
            if (eax_4 != 0)
                eax_4(arg4, arg3, 2)
            
            int32_t var_54c_1 = 0
            goto label_49de5d
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
