// 函数名称: sub_5c8250
// 虚拟地址: 0x5c8250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5c8250(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    arg1[1] -= 1
    
    if (arg1[1] s> 0)
        return 
    
    sub_5c6b50(*arg1)
    void* eax_2 = data_bed770
    void* ecx_1 = nullptr
    
    if (eax_2 != 0)
        while (arg1 != eax_2)
            ecx_1 = eax_2
            eax_2 = *(eax_2 + 0x380)
            
            if (eax_2 == 0)
                int32_t* var_c_2 = arg1
                sub_5d0af0()
                return 
        
        if (ecx_1 != 0)
            int32_t* var_c_3 = arg1
            *(ecx_1 + 0x380) = *(eax_2 + 0x380)
            sub_5d0af0()
            return 
        
        data_bed770 = arg1[0xe0]
    
    int32_t* var_c_4 = arg1
    sub_5d0af0()
}
