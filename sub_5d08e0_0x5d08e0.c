// 函数名称: sub_5d08e0
// 虚拟地址: 0x5d08e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5d08e0(void* arg1)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t var_8 = 0x20
    int32_t* eax_1 = **(ebx + 0x28)
    void var_290
    void* eax_3 = (*(*eax_1 + 0x28))(eax_1, 0x14, &var_290, &var_8, 0)
    
    if (eax_3 == 0x8007001e || eax_3 == 0x8007000c)
        int32_t* eax_4 = **(ebx + 0x28)
        (*(*eax_4 + 0x1c))(eax_4)
        int32_t* eax_6 = **(ebx + 0x28)
        eax_3 = (*(*eax_6 + 0x28))(eax_6, 0x14, &var_290, &var_8, 0)
    
    if (eax_3 s< 0)
        void* eax_7 = *(ebx + 0x28)
        *(eax_7 + 0xc4d) = 1
        *(*(ebx + 0x28) + 0xc4c) = 1
        return eax_7
    
    int32_t var_10 = 0
    
    if (var_8 s> 0)
        void var_28c
        eax_3 = &var_28c
        arg1 = &var_28c
        int32_t ecx_12
        
        do
            void* esi_1 = *(ebx + 0x28)
            int32_t edi_1 = 0
            int32_t i_1 = 0
            
            if (*(esi_1 + 0xc44) s> 0)
                int32_t i
                
                do
                    if (*(eax_3 - 4) == *(edi_1 + esi_1 + 0x44))
                        int32_t ecx_4 = *(edi_1 + esi_1 + 0x48)
                        
                        if (ecx_4 == 0)
                            int32_t ecx_5
                            ecx_5.b = *eax_3 != 0
                            sub_5c6d80(ebx, *(edi_1 + esi_1 + 0x4c), ecx_5.b)
                            eax_3 = arg1
                        else if (ecx_4 == 1)
                            sub_5c6c50(ebx, *(edi_1 + esi_1 + 0x4c), *eax_3)
                            eax_3 = arg1
                        else if (ecx_4 == 2)
                            char eax_8 = sub_5cff20(*eax_3)
                            sub_5c6cf0(ebx, *(edi_1 + esi_1 + 0x4c), eax_8)
                            eax_3 = arg1
                    
                    esi_1 = *(ebx + 0x28)
                    i = i_1 + 1
                    edi_1 += 0xc
                    i_1 = i
                while (i s< *(esi_1 + 0xc44))
            
            ecx_12 = var_10 + 1
            eax_3 += 0x14
            var_10 = ecx_12
            arg1 = eax_3
        while (ecx_12 s< var_8)
    
    return eax_3
}
