// 函数名称: sub_5d86c0
// 虚拟地址: 0x5d86c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5d86c0(void* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        char const* const var_c_1 = "format"
        sub_5cce60("Parameter '%s' is invalid")
        return 
    
    *(arg1 + 0x24) -= 1
    
    if (*(arg1 + 0x24) s> 0)
        return 
    
    void* ecx_1 = data_bf7fb8
    
    if (arg1 == ecx_1)
        data_bf7fb8 = *(arg1 + 0x28)
    else if (ecx_1 != 0)
        int32_t* eax_2 = ecx_1 + 0x28
        
        while (*(ecx_1 + 0x28) != 0)
            void* eax_3 = *eax_2
            
            if (eax_3 == arg1)
                *(ecx_1 + 0x28) = *(arg1 + 0x28)
                break
            
            ecx_1 = eax_3
            eax_2 = ecx_1 + 0x28
    
    void* eax_4 = *(arg1 + 4)
    
    if (eax_4 != 0)
        sub_5d7c20(eax_4)
    
    void* var_c_3 = arg1
    sub_5d0af0()
}
