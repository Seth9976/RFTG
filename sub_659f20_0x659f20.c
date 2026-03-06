// 函数名称: sub_659f20
// 虚拟地址: 0x659f20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void**sub_659f20(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t ecx
    int32_t edx
    void** result = _calloc(eax, edx, ecx, 1, 0x2c)
    void* eax_3 = *(*(arg1 + 4) + 0x1c)
    int32_t ebx = *(arg2 + 0xc)
    *result = arg2
    int32_t ecx_3 = *(arg2 + 0x14)
    int32_t eax_4 = *(eax_3 + 0xb20)
    result[3] = eax_4
    int32_t edx_2 = ecx_3 * 7
    int32_t* eax_5 = eax_4 + (edx_2 << 3)
    result[4] = eax_5
    void* i_3 = *eax_5
    int32_t i = 0
    int32_t var_8 = 0
    int32_t var_c = 0
    result[1] = ebx
    void* eax_6
    void* edx_3
    eax_6, edx_3 = _calloc(i_3, edx_2, ecx_3, ebx, 4)
    result[5] = eax_6
    
    if (ebx s> 0)
        do
            uint32_t j = *(arg2 + (i << 2) + 0x18)
            int32_t ebx_1 = 0
            
            if (j != 0)
                do
                    ebx_1 += 1
                    j u>>= 1
                while (j != 0)
                
                if (ebx_1 != 0)
                    if (ebx_1 s> var_c)
                        var_c = ebx_1
                    
                    int32_t eax_7 = _calloc(j, edx_3, arg2, ebx_1, 4)
                    edx_3 = eax_6
                    *(edx_3 + (i << 2)) = eax_7
                    int32_t ecx_5 = 0
                    int32_t eax_8 = 1
                    int32_t var_14_1 = 1
                    
                    if (ebx_1 s> 0)
                        edx_3 = arg2 + (var_8 << 2) + 0x118
                        
                        do
                            if ((*(arg2 + (i << 2) + 0x18) & eax_8) != 0)
                                var_8 += 1
                                *(*(eax_6 + (i << 2)) + (ecx_5 << 2)) = *(eax_3 + 0xb20) + *edx_3 * 0x38
                                eax_8 = var_14_1
                                edx_3 += 4
                            
                            ecx_5 += 1
                            eax_8 = rol.d(eax_8, 1)
                            var_14_1 = eax_8
                        while (ecx_5 s< ebx_1)
            
            i += 1
        while (i s< result[1])
    
    void* i_2 = i_3
    result[6] = 1
    
    if (i_2 s> 0)
        int32_t eax_13 = 1
        void* i_1
        
        do
            eax_13 *= result[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        result[6] = eax_13
    
    int32_t esi = result[6]
    result[2] = var_c
    int32_t var_1c_2 = esi
    int32_t eax_14 = sub_5a881a(esi << 2)
    void* ebx_8 = nullptr
    result[7] = eax_14
    arg2 = nullptr
    
    if (esi s<= 0)
        return result
    
    int32_t ecx_7 = result[1]
    int32_t var_18_1 = esi
    
    while (true)
        int32_t esi_1 = divs.dp.d(sx.q(esi), ecx_7)
        int32_t ecx_8 = 0
        *(eax_14 + (ebx_8 << 2)) = sub_5a881a(i_3 * 4)
        
        if (i_3 s> 0)
            do
                int32_t temp0_2 = divs.dp.d(sx.q(ebx_8), esi_1)
                ecx_8 += 1
                ebx_8 -= temp0_2 * esi_1
                esi_1 = divs.dp.d(sx.q(esi_1), ecx_7)
                *(*(eax_14 + (arg2 << 2)) + (ecx_8 << 2) - 4) = temp0_2
            while (ecx_8 s< i_3)
            
            ebx_8 = arg2
        
        ebx_8 += 1
        arg2 = ebx_8
        
        if (ebx_8 s>= var_18_1)
            break
        
        esi = var_1c_2
    
    return result
}
