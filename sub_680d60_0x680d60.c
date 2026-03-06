// 函数名称: sub_680d60
// 虚拟地址: 0x680d60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_680d60(void* arg1, void* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t ecx = *arg4
    int32_t ecx = *arg4
    int32_t i = 0
    
    if (*(arg1 + 0x138) s> 0)
        int32_t* esi_1 = arg3
        int32_t* var_8_1 = esi_1
        
        do
            int32_t j_1 = 0
            
            for (int32_t j = 0; j s< 2; )
                char* edx_1 = *esi_1
                char* edi_1
                
                if (j != 0)
                    edi_1 = esi_1[1]
                else
                    edi_1 = esi_1[-1]
                
                char* ecx_2 = *(ecx + (i << 2))
                uint32_t esi_4 = zx.d(*edx_1) * 3 + zx.d(*edi_1)
                uint32_t eax_5 = zx.d(edx_1[1]) * 3 + zx.d(edi_1[1])
                *ecx_2 = (((esi_4 << 2) + 8) s>> 4).b
                arg4 = esi_4
                ecx_2[1] = ((esi_4 * 3 + eax_5 + 7) s>> 4).b
                int32_t esi_6 = *(arg2 + 0x28)
                void* edi_2 = &edi_1[2]
                void* edx_2 = &edx_1[2]
                char* ecx_3 = &ecx_2[2]
                uint32_t ebx_7 = eax_5
                uint32_t var_10_1 = ebx_7
                int32_t k_1 = esi_6 - 2
                
                if (esi_6 != 2)
                    int32_t k
                    
                    do
                        eax_5 = zx.d(*edx_2) * 3 + zx.d(*edi_2)
                        uint32_t esi_9 = ebx_7 * 3
                        *ecx_3 = ((esi_9 + arg4 + 8) s>> 4).b
                        ecx_3[1] = ((esi_9 + eax_5 + 7) s>> 4).b
                        uint32_t var_c_1 = esi_9
                        edi_2 += 1
                        edx_2 += 1
                        ecx_3 = &ecx_3[2]
                        k = k_1
                        k_1 -= 1
                        ebx_7 = eax_5
                        arg4 = var_10_1
                        var_10_1 = ebx_7
                    while (k != 1)
                
                esi_1 = var_8_1
                *ecx_3 = ((eax_5 * 3 + arg4 + 8) s>> 4).b
                ecx_3[1] = (((eax_5 << 2) + 7) s>> 4).b
                i += 1
                j = j_1 + 1
                j_1 = j
            
            esi_1 = &esi_1[1]
            var_8_1 = esi_1
        while (i s< *(arg1 + 0x138))
    
    return i
}
