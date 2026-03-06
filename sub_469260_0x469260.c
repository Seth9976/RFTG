// 函数名称: sub_469260
// 虚拟地址: 0x469260
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_469260()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi = 0
    void* entry_ebx
    int32_t esi_1 = *(entry_ebx + 0x140) - 1
    int32_t var_18 = 0
    int32_t var_14 = 1
    int32_t var_10 = 2
    int32_t var_c = 3
    
    if (esi_1 s> 0)
        do
            int32_t eax_3 = sub_4c96e0(esi_1, edi)
            int32_t ecx_1 = (&var_18)[edi]
            (&var_18)[edi] = (&var_18)[eax_3]
            edi += 1
            (&__saved_ebp)[eax_3 - 5] = ecx_1
        while (edi s< esi_1)
    
    int32_t i = 0
    
    if (*(entry_ebx + 0x140) s> 0)
        void* eax_5 = entry_ebx + 8
        
        do
            *(eax_5 - 4) = (&var_18)[i]
            *eax_5 = 0xffffffff
            *(eax_5 + 0x30) = 0xffffffff
            *(eax_5 + 0x2c) = 0xffffffff
            i += 1
            eax_5 += 0x50
        while (i s< *(entry_ebx + 0x140))
    
    *(entry_ebx + 0x1dc) = 2
    int32_t result = sub_4c95c0()
    *(entry_ebx + 0x1c4) = result
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
