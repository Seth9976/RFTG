// 函数名称: sub_5a7fbd
// 虚拟地址: 0x5a7fbd
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5a7fbd(char* arg1, char* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx
    int32_t var_34 = ebx
    char* esi = arg2
    int32_t edi
    int32_t var_3c = edi
    uint32_t* eax_3 = __getptd()
    char var_28[0x20]
    __builtin_memset(&var_28, 0, 0x20)
    char i
    
    do
        i = *esi
        uint32_t i_1 = zx.d(i)
        ebx.b = 1
        ebx.b = 1 << (i_1.b & 7)
        *(&__saved_ebp + (i_1 u>> 3) - 0x24) |= ebx.b
        esi = &esi[1]
    while (i != 0)
    char* edx_1 = arg1
    
    if (edx_1 == 0)
        edx_1 = eax_3[6]
    
    while (true)
        uint32_t* eax_6
        eax_6.b = *edx_1
        uint32_t esi_1 = zx.d(eax_6.b)
        
        if ((var_28[esi_1 u>> 3] & (1 << (esi_1.b & 7)).b) == 0)
            break
        
        if (eax_6.b == 0)
            break
        
        edx_1 = &edx_1[1]
    
    char* ebx_2 = edx_1
    
    while (*edx_1 != 0)
        uint32_t esi_3 = zx.d(*edx_1)
        
        if ((var_28[esi_3 u>> 3] & (1 << (esi_3.b & 7)).b) != 0)
            *edx_1 = 0
            edx_1 = &edx_1[1]
            break
        
        edx_1 = &edx_1[1]
    
    eax_3[6] = edx_1
    void* eax_10 = ebx_2 - edx_1
    int32_t eax_11 = neg.d(eax_10)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return sbb.d(eax_11, eax_11, eax_10 != 0) & ebx_2
}
