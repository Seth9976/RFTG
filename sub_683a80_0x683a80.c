// 函数名称: sub_683a80
// 虚拟地址: 0x683a80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_683a80(int32_t arg1, int32_t arg2, int32_t* arg3, char* arg4)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x78)
    int32_t ecx = *(arg1 + 0x78)
    int32_t j_2 = *(arg1 + 0x70)
    void* ebx = *(arg1 + 0x1cc)
    int32_t eax_1 = *(arg1 + 0x144)
    char* result = arg4
    void* var_c = ebx
    
    if (result s> 0)
        int32_t* esi_1 = arg3
        int32_t* ecx_2 = arg2 - esi_1
        int32_t* var_18_1 = esi_1
        char* var_28_1 = result
        char* i
        
        do
            sub_67d220(*esi_1, j_2)
            void* eax_2 = nullptr
            void* var_14_1 = nullptr
            
            if (ecx s> 0)
                do
                    char* edi_1 = *esi_1
                    char* edx_2 = *(ecx_2 + esi_1) + eax_2
                    void* eax_3 = eax_2 * 2
                    arg4 = edx_2
                    int32_t var_20_1
                    int32_t* eax_4
                    int16_t* ecx_10
                    int32_t esi_4
                    
                    if (*(ebx + 0x54) == 0)
                        eax_4 = eax_3 * 2
                        var_20_1 = ecx
                        ecx_10 = *(ebx + eax_4 + 0x44)
                        esi_4 = 1
                    else
                        edi_1 = &edi_1[j_2 - 1]
                        edx_2 = &edx_2[(j_2 - 1) * ecx]
                        esi_4 = 0xffffffff
                        var_20_1 = neg.d(ecx)
                        eax_4 = eax_3 * 2
                        ecx_10 = *(ebx + eax_4 + 0x44) + (j_2 << 1) + 2
                        ebx = var_c
                        arg4 = edx_2
                    
                    int32_t ebx_3 = *(eax_4 + *(ebx + 0x18))
                    int32_t eax_5 = *(eax_4 + *(var_c + 0x10))
                    uint32_t eax_6 = 0
                    int16_t var_10_1 = 0
                    int16_t var_1c_1 = 0
                    int32_t j_1 = j_2
                    
                    if (j_2 != 0)
                        char* edi_2 = edi_1
                        int32_t j
                        
                        do
                            uint32_t eax_10 = zx.d(
                                *(zx.d(*edx_2) + ((sx.d(ecx_10[esi_4]) + eax_6 + 8) s>> 4) + eax_1))
                            uint32_t edx_5 = zx.d(*(eax_10 + ebx_3))
                            *edi_2 += edx_5.b
                            uint32_t eax_11 = eax_10 - zx.d(*(edx_5 + eax_5))
                            uint32_t eax_12 = eax_11 * 3
                            uint32_t edx_7 = eax_12 * 2
                            *ecx_10 = var_10_1 + eax_12.w
                            uint32_t eax_13 = eax_12 + edx_7
                            eax_6 = eax_13 + edx_7
                            edx_2 = &arg4[var_20_1]
                            var_10_1 = var_1c_1 + eax_13.w
                            edi_2 = &edi_2[esi_4]
                            j = j_1
                            j_1 -= 1
                            var_1c_1 = eax_11.w
                            arg4 = edx_2
                            ecx_10 = &ecx_10[esi_4]
                        while (j != 1)
                    
                    edx_2.w = var_10_1
                    ebx = var_c
                    esi_1 = var_18_1
                    eax_2 = var_14_1 + 1
                    *ecx_10 = edx_2.w
                    var_14_1 = eax_2
                while (eax_2 s< ecx)
            
            result.b = *(ebx + 0x54) == 0
            esi_1 = &esi_1[1]
            i = var_28_1
            var_28_1 -= 1
            var_18_1 = esi_1
            *(ebx + 0x54) = result
        while (i != 1)
    
    return result
}
