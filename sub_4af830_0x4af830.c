// 函数名称: sub_4af830
// 虚拟地址: 0x4af830
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4af830(int32_t arg1, int32_t arg2, int16_t* arg3, void* arg4 @ esi, int32_t arg5, int32_t arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int16_t* edi = arg3
    arg3.w = *edi
    *(arg7 + 0x1e) = arg3.w
    int32_t entry_ebx
    void* eax_4 = sub_49f030(arg7, *edi, arg4, entry_ebx, 1)
    
    if (*(arg4 + 0x18) == 0)
        int32_t edx_1 = *(edi + 4)
        int32_t var_424_1 = edx_1
        eax_4 = sub_49bc60(entry_ebx, edx_1)
    
    if (arg6 != 2)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    sub_49dbf0(eax_4, arg5, arg4, entry_ebx, 2)
    
    if (*(arg4 + 0x18) == 0 && *(arg7[2] + 0x20) != 0)
        int32_t var_424_2 = **(arg4 + *(edi + 4) * 0x14 + 0x46c)
        int32_t var_428_2 = *arg7
        void var_410
        sub_5a733b(&var_410, "%s discards the start world %s.\n")
        (*(arg7[2] + 0x20))(arg4, entry_ebx, &var_410, "discard")
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}
