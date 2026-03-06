// 函数名称: sub_66f3a0
// 虚拟地址: 0x66f3a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_66f3a0(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t eax_3
    
    if ((*(arg1 + 0xb8) & 4) == 0)
        eax_3 = sub_664100(arg1, "zstream not in use (internal error)")
    else
        eax_3 = sub_6746a0(arg1 + 0x78)
        *(arg1 + 0xb8) &= 0xfffffffb
        
        if (eax_3 != 0)
            char const* const edi
            
            if (eax_3 == 0xfffffffa)
                edi = "version"
            else if (eax_3 == 0xfffffffc)
                edi = "memory"
            else if (eax_3 == 0xfffffffe)
                edi = "stream"
            else
                edi = "unknown"
            
            void var_108
            sub_663f40(&var_108, 1, 1, eax_3)
            sub_663eb0(&var_108, 2, edi)
            char const* const eax_4 = *(arg1 + 0x90)
            
            if (eax_4 == 0)
                eax_4 = "[no zlib message]"
            
            sub_663eb0(&var_108, 3, eax_4)
            uint32_t eax_5 = sub_664180(arg1, &var_108, "zlib failed to reset compressor: @1(@2): @3")
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_5
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_3
}
