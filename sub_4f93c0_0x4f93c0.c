// 函数名称: sub_4f93c0
// 虚拟地址: 0x4f93c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4f93c0(int32_t arg1, char arg2)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    
    if (arg1 == 0)
        return 
    
    void* eax_1 = sub_4fc3d0(&data_be1cb8, arg1)
    int32_t* eax = sub_4f4890(*(eax_1 + 4))
    int32_t i_1 = 0
    
    if (eax[1] s<= 0)
        return 
    
    int32_t* edi_1 = 0x30
    int32_t var_c_1 = 0
    int32_t* var_1c_1 = 0x30
    
    do
        if (*(edi_1 + eax_1) != 0)
            int32_t eax_3 = sub_4fc3d0(&data_be1cb8, arg1)
            
            if (*(edi_1 + eax_3) != 0)
                int128_t* eax_4 = sub_4f6e90(i, eax_3, &data_83f3d3)
                
                if (arg2 == 0)
                    *eax_4 += 1
                else
                    *(eax_4 + 0x34) = 0
            
            int128_t* eax_5 = sub_4f6e90(i, eax_1, &data_83f3d3)
            int32_t* ebx_1 = *eax + var_c_1
            int128_t* ecx_1 = eax_5
            int128_t* var_24_1 = ecx_1
            
            if (ebx_1[1] == 2)
                int32_t var_2c_1
                int32_t var_28_1
                int32_t edx_2
                
                if (ecx_1[0x12].d s<= *ecx_1)
                    int32_t eax_8 = ebx_1[0x23]
                    var_28_1 = ebx_1[0x22]
                    var_2c_1 = eax_8
                    edx_2 = eax_8
                else
                    edx_2 = *(ecx_1 + 0x12c)
                    var_2c_1 = edx_2
                    var_28_1 = ecx_1[0x13].d
                
                int32_t eax_9 = 0
                int32_t var_14_1 = 0
                
                if (var_28_1 s> 0)
                    void* edi_4 = ecx_1 + 0xa4
                    void* var_18_1 = edi_4
                    
                    do
                        int32_t esi_5 = 0
                        
                        if (edx_2 s> 0)
                            do
                                bool cond:1_1 = *edi_4 == 0
                                int32_t var_34 = esi_5
                                int32_t var_30_1 = eax_9
                                
                                if (not(cond:1_1))
                                    sub_4f93c0(*(sub_4f7720(&var_34, ebx_1, ecx_1) + 0x434), arg2.d)
                                    ecx_1 = var_24_1
                                    eax_9 = var_14_1
                                    edx_2 = var_2c_1
                                
                                esi_5 += 1
                                edi_4 += 4
                            while (esi_5 s< edx_2)
                        
                        eax_9 += 1
                        edi_4 = var_18_1 + (edx_2 << 2)
                        var_14_1 = eax_9
                        var_18_1 = edi_4
                    while (eax_9 s< var_28_1)
            
            i = i_1
        
        var_c_1 += 0x118
        i += 1
        edi_1 = &var_1c_1[1]
        i_1 = i
        var_1c_1 = edi_1
    while (i s< eax[1])
}
