// 函数名称: sub_49cd90
// 虚拟地址: 0x49cd90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_49cd90(int32_t* arg1 @ edi, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t entry_ebx
    void* esi_1 = entry_ebx * 0xb4
    *(esi_1 + arg1 + 0xb2) += 1
    void* esi_2 = esi_1 + arg1
    *(esi_2 + 0xb3) = 0
    
    if (arg1[6].b == 0)
        int32_t eax_6
        int32_t ecx_5
        eax_6, ecx_5 = sub_49cb30(arg1, entry_ebx)
        
        if (eax_6 != 0xffffffff)
            int32_t var_424 = 2
            sub_49cc30(arg1, eax_6, ecx_5, entry_ebx)
            int32_t eax_9 = eax_6 * 5
            arg1[eax_9 + 0x11a].w = (arg1[eax_9 + 0x11a].w & 0xffc0) | 1 << entry_ebx.b
            
            if (arg1[6].b == 0)
                int32_t var_424_1 = eax_6
                sub_49b590(entry_ebx, eax_6)
                void var_410
                
                if (arg2 != 0)
                    int32_t var_424_2 = arg2
                    int32_t var_428_1 = *(esi_2 + 0x20)
                    sub_5a733b(&var_410, "%s receives 1 card from %s.\n")
                    char const* const var_434_1 = "verbose"
                    void* var_438_1 = &var_410
                    sub_4c5680("%s (%s)")
                
                if (*(*(esi_2 + 0x28) + 0x20) != 0)
                    int32_t var_424_3 = *arg1[eax_9 + 0x11b]
                    int32_t var_428_2 = *(esi_2 + 0x20)
                    sub_5a733b(&var_410, "%s draws %s.\n")
                    (*(*(esi_2 + 0x28) + 0x20))(arg1, entry_ebx, &var_410, "draw")
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_6
    else
        *(esi_2 + 0xae) += 1
        int32_t eax_4 = sub_49cb90(arg1)
        
        if (eax_4 != 0xffffffff)
            *(&arg1[eax_4 * 5] + 0x465) = 1
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_4
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0xffffffff
}
