// 函数名称: sub_5c8060
// 虚拟地址: 0x5c8060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c8060(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0
    int32_t var_8 = 0
    char* eax = sub_5c7eb0(arg1)
    
    if (eax == 0)
        return 0xffffffff
    
    char const* const __saved_edi_1 = "xinput"
    char* var_38 = eax
    
    if (sub_5cd5e0() == 0)
        var_8 = 1
    
    void var_28
    void* eax_3 = sub_5c6fa0(&var_28, eax)
    int32_t var_18 = *eax_3
    int32_t edx = *(eax_3 + 4)
    int32_t ecx_1 = *(eax_3 + 8)
    int32_t edx_1 = *(eax_3 + 0xc)
    char* var_40 = eax
    sub_5d0af0()
    int32_t* eax_4 = sub_5c7a60(&var_18)
    int32_t eax_5 = sub_5c7f20(arg1)
    
    if (eax_5 != 0)
        int32_t eax_6 = sub_5c7fa0(arg1)
        
        if (eax_6 != 0)
            if (eax_4 != 0)
                int32_t var_38_4 = eax_4[4]
                sub_5d0af0()
                int32_t var_3c_1 = eax_4[5]
                eax_4[4] = eax_5
                sub_5d0af0()
                eax_4[5] = eax_6
                sub_5c7fe0(eax_4)
                return 0
            
            int32_t var_38_5 = 0x1c
            int32_t* eax_9 = sub_5d0ac0()
            
            if (eax_9 == 0)
                int32_t var_38_6 = eax_5
                sub_5d0af0()
                int32_t var_3c_2 = eax_6
                sub_5d0af0()
                sub_5cd050(0)
                return 0xffffffff
            
            if (var_8 != 0)
                data_bed778 = eax_9
            
            *eax_9 = var_18
            eax_9[1] = edx
            eax_9[2] = ecx_1
            int32_t ecx_5 = data_bed774
            eax_9[4] = eax_5
            eax_9[5] = eax_6
            eax_9[3] = edx_1
            eax_9[6] = ecx_5
            data_bed774 = eax_9
            return 1
        
        int32_t var_38_3 = eax_5
        sub_5d0af0()
    
    return 0xffffffff
}
