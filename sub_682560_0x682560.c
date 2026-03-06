// 函数名称: sub_682560
// 虚拟地址: 0x682560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_682560(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, char* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_208
    int32_t ecx
    int32_t edi
    edi, ecx = __memfill_u32(&var_208, 0x7fffffff, 0x80)
    void* result = nullptr
    void* result_1 = nullptr
    
    if (arg5 s> 0)
        do
            uint32_t edx_1 = zx.d(*(result + arg6))
            int32_t* edi_1 = *(arg1 + 0x88)
            int32_t ecx_5 = (arg3 - zx.d(*(edi_1[1] + edx_1))) * 3
            int32_t eax_9 = arg4 - zx.d(*(edi_1[2] + edx_1))
            int32_t esi_3 = (arg2 - zx.d(*(edx_1 + *edi_1))) * 2
            int32_t edi_6 = eax_9 * eax_9 + ecx_5 * ecx_5 + esi_3 * esi_3
            char* ecx_6 = arg7
            int32_t eax_11 = (eax_9 + 4) << 4
            int32_t var_224_1 = (esi_3 + 8) << 5
            int32_t ebx_8 = (ecx_5 * 3 + 0x12) * 8
            int32_t var_218_1 = edi_6
            int32_t var_234_1 = ebx_8
            void* eax_12 = &var_208
            int32_t var_22c_1 = 3
            int32_t var_214_1 = eax_11 + 0x80
            
            while (true)
                int32_t esi_8 = edi_6
                int32_t var_210_1 = ebx_8
                int32_t i_1 = 2
                int32_t i
                
                do
                    if (esi_8 s< *eax_12)
                        *eax_12 = esi_8
                        *ecx_6 = edx_1.b
                    
                    int32_t edi_8 = eax_11 + esi_8
                    
                    if (edi_8 s< *(eax_12 + 4))
                        *(eax_12 + 4) = edi_8
                        ecx_6[1] = edx_1.b
                    
                    int32_t edi_9 = edi_8 + var_214_1
                    
                    if (edi_9 s< *(eax_12 + 8))
                        *(eax_12 + 8) = edi_9
                        ecx_6[2] = edx_1.b
                    
                    int32_t edi_10 = edi_9 + eax_11 + 0x100
                    
                    if (edi_10 s< *(eax_12 + 0xc))
                        *(eax_12 + 0xc) = edi_10
                        ecx_6[3] = edx_1.b
                    
                    int32_t esi_9 = esi_8 + var_210_1
                    
                    if (esi_9 s< *(eax_12 + 0x10))
                        *(eax_12 + 0x10) = esi_9
                        ecx_6[4] = edx_1.b
                    
                    int32_t edi_11 = esi_9 + eax_11
                    
                    if (edi_11 s< *(eax_12 + 0x14))
                        *(eax_12 + 0x14) = edi_11
                        ecx_6[5] = edx_1.b
                    
                    int32_t edi_12 = edi_11 + eax_11 + 0x80
                    
                    if (edi_12 s< *(eax_12 + 0x18))
                        *(eax_12 + 0x18) = edi_12
                        ecx_6[6] = edx_1.b
                    
                    int32_t edi_13 = edi_12 + eax_11 + 0x100
                    
                    if (edi_13 s< *(eax_12 + 0x1c))
                        *(eax_12 + 0x1c) = edi_13
                        ecx_6[7] = edx_1.b
                    
                    if (esi_9 + var_210_1 + 0x120 s< *(eax_12 + 0x20))
                        *(eax_12 + 0x20) = esi_9 + var_210_1 + 0x120
                        ecx_6[8] = edx_1.b
                    
                    int32_t edi_15 = esi_9 + var_210_1 + 0x120 + eax_11
                    
                    if (edi_15 s< *(eax_12 + 0x24))
                        *(eax_12 + 0x24) = edi_15
                        ecx_6[9] = edx_1.b
                    
                    int32_t edi_16 = edi_15 + eax_11 + 0x80
                    var_214_1 = eax_11 + 0x80
                    
                    if (edi_16 s< *(eax_12 + 0x28))
                        *(eax_12 + 0x28) = edi_16
                        ecx_6[0xa] = edx_1.b
                    
                    int32_t edi_17 = edi_16 + eax_11 + 0x100
                    
                    if (edi_17 s< *(eax_12 + 0x2c))
                        *(eax_12 + 0x2c) = edi_17
                        ecx_6[0xb] = edx_1.b
                    
                    if (esi_9 + var_210_1 + 0x120 + var_210_1 + 0x240 s< *(eax_12 + 0x30))
                        *(eax_12 + 0x30) = esi_9 + var_210_1 + 0x120 + var_210_1 + 0x240
                        ecx_6[0xc] = edx_1.b
                    
                    int32_t edi_20 = eax_11 + esi_9 + var_210_1 + 0x120 + var_210_1 + 0x240
                    
                    if (edi_20 s< *(eax_12 + 0x34))
                        *(eax_12 + 0x34) = edi_20
                        ecx_6[0xd] = edx_1.b
                    
                    int32_t edi_21 = edi_20 + var_214_1
                    
                    if (edi_21 s< *(eax_12 + 0x38))
                        *(eax_12 + 0x38) = edi_21
                        ecx_6[0xe] = edx_1.b
                    
                    int32_t edi_22 = edi_21 + eax_11 + 0x100
                    
                    if (edi_22 s< *(eax_12 + 0x3c))
                        *(eax_12 + 0x3c) = edi_22
                        ecx_6[0xf] = edx_1.b
                    
                    esi_8 = esi_9 + var_210_1 + 0x120 + var_210_1 + 0x240 + var_210_1 + 0x360
                    eax_12 += 0x40
                    ecx_6 = &ecx_6[0x10]
                    i = i_1
                    i_1 -= 1
                    var_210_1 += 0x480
                while (i != 1)
                edi_6 = var_218_1 + var_224_1
                int32_t temp1_1 = var_22c_1
                var_22c_1 -= 1
                var_218_1 = edi_6
                var_224_1 += 0x200
                
                if (temp1_1 - 1 s< 0)
                    break
                
                ebx_8 = var_234_1
            
            result = result_1 + 1
            result_1 = result
        while (result s< arg5)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
