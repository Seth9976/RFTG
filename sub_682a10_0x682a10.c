// 函数名称: sub_682a10
// 虚拟地址: 0x682a10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_682a10(void* arg1, int32_t arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t j_2 = *(arg1 + 0x70)
    int32_t esi_1 = *(*(arg1 + 0x1cc) + 0x18)
    void* result = arg4
    int32_t j_3 = j_2
    
    if (result s> 0)
        int32_t* esi_2 = arg3
        void* edx_1 = arg2 - arg3
        int32_t* var_194_1 = esi_2
        void* var_1b0_1 = edx_1
        void* var_1a0_1 = result
        int32_t edi
        int32_t var_1cc_1 = edi
        void* i
        
        do
            result = *esi_2
            char* edi_2 = *(esi_2 + edx_1)
            char* result_1 = result
            int32_t j_1 = j_2
            
            if (j_2 != 0)
                int32_t j
                
                do
                    uint32_t esi_4 = zx.d(edi_2[1]) u>> 2
                    uint32_t eax_4 = zx.d(*edi_2) u>> 3
                    uint32_t ecx_2 = zx.d(edi_2[2]) u>> 3
                    char* edx_5 = *(esi_1 + (eax_4 << 2)) + (((esi_4 << 5) + ecx_2) << 1)
                    edi_2 = &edi_2[3]
                    
                    if (*edx_5 == 0)
                        int32_t edi_4 = *(*(arg1 + 0x1cc) + 0x18)
                        int32_t eax_5 = eax_4 s>> 2
                        int32_t ecx_3 = ecx_2 s>> 2
                        int32_t esi_5 = esi_4 s>> 3
                        char var_188[0x100]
                        char var_88[0x80]
                        sub_682560(arg1, (eax_5 << 5) + 4, (esi_5 << 5) + 2, (ecx_3 << 5) + 4, 
                            sub_682350((ecx_3 << 5) + 4, &var_188, (esi_5 << 5) + 2, arg1, 
                                (eax_5 << 5) + 4, (ecx_3 << 5) + 4), 
                            &var_188, &var_88)
                        char (* eax_11)[0x80] = &var_88
                        int32_t* esi_12 = edi_4 + eax_5 * 0x10
                        int32_t k_1 = 4
                        int32_t k
                        
                        do
                            int32_t edx_12 = (esi_5 * 0x100 + ecx_3 * 4) * 2
                            int32_t edi_8 = 2
                            int32_t temp2_1
                            
                            do
                                uint16_t* ecx_9 = *esi_12
                                *(ecx_9 + edx_12) = zx.w(*eax_11) + 1
                                *(ecx_9 + edx_12 + 2) = zx.w((*eax_11)[1]) + 1
                                *(ecx_9 + edx_12 + 4) = zx.w((*eax_11)[2]) + 1
                                *(ecx_9 + edx_12 + 6) = zx.w((*eax_11)[3]) + 1
                                int32_t ecx_11 = *esi_12
                                *(edx_12 + ecx_11 + 0x40) = zx.w((*eax_11)[4]) + 1
                                *(edx_12 + ecx_11 + 0x42) = zx.w((*eax_11)[5]) + 1
                                *(edx_12 + ecx_11 + 0x44) = zx.w((*eax_11)[6]) + 1
                                *(edx_12 + ecx_11 + 0x46) = zx.w((*eax_11)[7]) + 1
                                int32_t ecx_13 = *esi_12
                                *(edx_12 + ecx_13 + 0x80) = zx.w((*eax_11)[8]) + 1
                                *(edx_12 + ecx_13 + 0x82) = zx.w((*eax_11)[9]) + 1
                                *(edx_12 + ecx_13 + 0x84) = zx.w((*eax_11)[0xa]) + 1
                                *(edx_12 + ecx_13 + 0x86) = zx.w((*eax_11)[0xb]) + 1
                                int32_t ecx_15 = *esi_12
                                *(edx_12 + ecx_15 + 0xc0) = zx.w((*eax_11)[0xc]) + 1
                                void* ecx_16 = edx_12 + ecx_15 + 0xc0
                                *(ecx_16 + 2) = zx.w((*eax_11)[0xd]) + 1
                                *(ecx_16 + 4) = zx.w((*eax_11)[0xe]) + 1
                                uint16_t ebx_20 = zx.w((*eax_11)[0xf]) + 1
                                eax_11 = &(*eax_11)[0x10]
                                edx_12 += 0x100
                                temp2_1 = edi_8
                                edi_8 -= 1
                                *(ecx_16 + 6) = ebx_20
                            while (temp2_1 != 1)
                            esi_12 = &esi_12[1]
                            k = k_1
                            k_1 -= 1
                        while (k != 1)
                    
                    edx_5.b = *edx_5
                    edx_5.b -= 1
                    *result_1 = edx_5.b
                    result = &result_1[1]
                    j = j_1
                    j_1 -= 1
                    result_1 = result
                while (j != 1)
                esi_2 = var_194_1
                j_2 = j_3
                edx_1 = var_1b0_1
            
            esi_2 = &esi_2[1]
            i = var_1a0_1
            var_1a0_1 -= 1
            var_194_1 = esi_2
        while (i != 1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
