// 函数名称: sub_5ddec0
// 虚拟地址: 0x5ddec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ddec0(void* arg1)
{
    // 第一条实际指令: PWSTR edi = *(arg1 + 0x40)
    PWSTR edi = *(arg1 + 0x40)
    enum ENUM_DISPLAY_SETTINGS_MODE esi = 0
    int32_t var_18
    int32_t i
    
    for (i = sub_5dda20(edi, 0, &var_18); i != 0; i = sub_5dda20(edi, esi, &var_18))
        int32_t ecx_1 = var_18
        int32_t eax_2
        
        if (ecx_1 == 0 || (ecx_1 & 0xf0000000) == 0x10000000)
            eax_2 = ecx_1 u>> 0x18 & 0xf
        
        int32_t var_8
        
        if ((ecx_1 == 0 || (ecx_1 & 0xf0000000) == 0x10000000)
                && (eax_2 == 1 || eax_2 == 2 || eax_2 == 3))
            int32_t var_28_4 = var_8
            sub_5d0af0()
        else if (ecx_1 == 0)
            int32_t var_28_3 = var_8
            sub_5d0af0()
        else if (sub_5c8f90(arg1, &var_18) == 0)
            int32_t var_28_2 = var_8
            sub_5d0af0()
        esi += 1
    
    return i
}
