// 函数名称: sub_67de50
// 虚拟地址: 0x67de50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67de50(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t eax = *(edi + 0x1ac)
    int32_t eax_2 = *(edi + 0x140) - 1
    int32_t i
    
    do
        int32_t eax_3 = *(edi + 0x90)
        int32_t ecx_2 = *(edi + 0x98)
        
        if (eax_3 s>= ecx_2 && (eax_3 != ecx_2 || *(edi + 0x94) u> *(edi + 0x9c)))
            int32_t j = 0
            void* esi = *(edi + 0xd8)
            int32_t j_1 = 0
            
            if (*(edi + 0x24) s> 0)
                do
                    if (*(esi + 0x30) != 0)
                        int32_t eax_5 = *(esi + 0xc)
                        int32_t eax_8 = (*(*(edi + 4) + 0x20))(edi, *(eax + (j << 2) + 0x48), 
                            *(edi + 0x9c) * eax_5, eax_5, 0)
                        uint32_t var_8_1
                        
                        if (*(edi + 0x9c) u>= eax_2)
                            uint32_t ecx_6 = *(esi + 0xc)
                            uint32_t temp1_1 = modu.dp.d(0:(*(esi + 0x20)), ecx_6)
                            var_8_1 = temp1_1
                            
                            if (temp1_1 == 0)
                                var_8_1 = ecx_6
                        else
                            var_8_1 = *(esi + 0xc)
                        
                        int32_t ecx_7 = *(*(edi + 0x1c0) + (j << 2) + 4)
                        int32_t ecx_8 = 0
                        int32_t var_c_1 = *(arg2 + (j << 2))
                        int32_t var_14_1 = 0
                        
                        if (var_8_1 s> 0)
                            int32_t eax_13 = *(esi + 0x1c)
                            
                            do
                                int32_t ebx = *(eax_8 + (ecx_8 << 2))
                                int32_t edi_1 = 0
                                int32_t var_10_1 = 0
                                
                                if (eax_13 != 0)
                                    int32_t ecx_11
                                    
                                    do
                                        ecx_7(arg1, esi, ebx, var_c_1, edi_1)
                                        eax_13 = *(esi + 0x1c)
                                        edi_1 += *(esi + 0x24)
                                        ecx_11 = var_10_1 + 1
                                        ebx -= 0xffffff80
                                        var_10_1 = ecx_11
                                    while (ecx_11 u< eax_13)
                                    ecx_8 = var_14_1
                                
                                ecx_8 += 1
                                var_c_1 += *(esi + 0x24) << 2
                                var_14_1 = ecx_8
                            while (ecx_8 s< var_8_1)
                            
                            j = j_1
                            edi = arg1
                    
                    j += 1
                    esi += 0x54
                    j_1 = j
                while (j s< *(edi + 0x24))
            
            *(edi + 0x9c) += 1
            int32_t eax_15 = *(edi + 0x9c)
            return sbb.d(eax_15, eax_15, eax_15 u< *(edi + 0x140)) + 4
        
        i = (**(edi + 0x1b4))(edi)
    while (i != 0)
    
    return i
}
