// 函数名称: sub_5c98a0
// 虚拟地址: 0x5c98a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c98a0(int32_t* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t eax = data_bed820
    
    if (eax == 0)
        sub_5c8d60()
        return 0
    
    if (arg1 == 0 || *arg1 != eax + 0xf4)
        sub_5cce60("Invalid window")
        return 0
    
    char* ecx_1 = arg2
    
    if (ecx_1 == 0 || *ecx_1 == 0)
        char const* const __saved_esi = "name"
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    char** i = arg1[0x1c]
    char** i_2 = nullptr
    
    for (; i != 0; i = i[2])
        char* eax_3 = *i
        
        if (eax_3 != 0)
            if (sub_5cd590(eax_3, ecx_1) == 0)
                int32_t result = i[1]
                
                if (arg3 != 0)
                    i[1] = arg3
                    return result
                
                if (i_2 == 0)
                    arg1[0x1c] = i[2]
                else
                    i_2[2] = i[2]
                
                char* var_18_3 = *i
                sub_5d0af0()
                char** i_1 = i
                sub_5d0af0()
                return result
            
            ecx_1 = arg2
        
        i_2 = i
    
    if (arg3 != 0)
        int32_t var_18_2 = 0xc
        int32_t* eax_5 = sub_5d0ac0()
        *eax_5 = sub_5cd390(arg2)
        eax_5[1] = arg3
        eax_5[2] = arg1[0x1c]
        arg1[0x1c] = eax_5
    
    return 0
}
