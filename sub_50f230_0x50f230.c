// 函数名称: sub_50f230
// 虚拟地址: 0x50f230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_50f230(int32_t* arg1, float arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    void* result = __security_cookie ^ &__saved_ebp
    void* result_3 = result
    int32_t* edi = arg1
    int32_t* esi = *edi
    int32_t* var_cc = edi
    
    if (esi != 0)
        int32_t edx_1
        result, edx_1 = sub_50c140(esi)
        void* result_1 = result
        void* result_2 = nullptr
        
        if (*(result + 4) s> 0)
            int32_t var_c0_1 = 0
            
            while (true)
                int32_t* eax_2 = *result + var_c0_1
                int128_t* eax_4
                eax_4, edx_1 = sub_50c830(result_2, edx_1, edi)
                int32_t ecx_3 = __builtin_memcpy(eax_4 + 8, &edi[2], 0x54)
                int32_t eax_5 = *eax_2
                int16_t top
                
                if (eax_5 == 2)
                    int32_t* edi_8 = eax_4[6].d
                    
                    if (edi_8 == 0)
                        edi_8 = eax_2[0x1d]
                    
                    int32_t esi_8 = *(eax_4 + 4)
                    
                    if (esi_8 != 0)
                        if (*(sub_4fc3d0(&data_be1cb8, esi_8) + 4) != edi_8)
                            sub_4f7100(*(eax_4 + 4))
                        label_50f5e6:
                            int32_t eax_24 = sub_4f6f00(edi_8)
                            top -= 1
                            unimplemented  {call 0x4f6f00}
                            *(eax_4 + 4) = eax_24
                    else if (edi_8 != 0)
                        goto label_50f5e6
                    
                    unimplemented  {fld st0, dword [ebp+0xc]}
                    int32_t edx_13 = *(eax_4 + 4)
                    int32_t var_1f4_9 = 0
                    int32_t* const var_1f8_5 = &data_84074c
                    float var_200 = arg2
                    var_200 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    edx_1 = sub_4f8070(edx_13, var_200, arg2)
                else if (eax_5 == 5)
                    int32_t var_b8_1
                    int32_t var_b4_1
                    int32_t eax_18
                    
                    if (*(eax_4 + 0x6c) s<= *(eax_4 + 0x5c))
                        int32_t ecx_15 = eax_2[0x20]
                        edx_1 = eax_2[0x21]
                        var_b8_1 = eax_2[0x1f]
                        var_b4_1 = ecx_15
                        eax_18 = ecx_15
                    else
                        eax_18 = *(eax_4 + 0x74)
                        edx_1 = *(eax_4 + 0x78)
                        var_b8_1 = eax_4[7].d
                        var_b4_1 = eax_18
                    
                    int32_t var_b0_1 = edx_1
                    int32_t var_a4_3 = 0
                    
                    if (var_b8_1 s> 0)
                        int32_t ecx_19
                        
                        do
                            int32_t edi_7 = 0
                            
                            if (eax_18 s> 0)
                                do
                                    int32_t esi_7 = 0
                                    
                                    if (var_b0_1 s> 0)
                                        do
                                            int32_t var_18
                                            int32_t* var_1f4_6 = &var_18
                                            var_18 = var_a4_3
                                            int32_t var_14_1 = edi_7
                                            int32_t var_10_1 = esi_7
                                            int128_t* eax_21
                                            int32_t ecx_17
                                            eax_21, ecx_17 =
                                                sub_50c900(var_a4_3, eax_4, eax_2, var_1f4_6)
                                            unimplemented  {fld st0, dword [ebp+0xc]}
                                            int32_t var_1f8_3 = ecx_17
                                            float var_1f8_4 =
                                                fconvert.s(unimplemented  {fstp dword [esp], st0})
                                            unimplemented  {fstp dword [esp], st0}
                                            edx_1 = sub_50f230(eax_21, var_1f8_4, arg2)
                                            esi_7 += 1
                                        while (esi_7 s< var_b0_1)
                                        
                                        eax_18 = var_b4_1
                                    
                                    edi_7 += 1
                                while (edi_7 s< eax_18)
                            
                            ecx_19 = var_a4_3 + 1
                            var_a4_3 = ecx_19
                        while (ecx_19 s< var_b8_1)
                else if (eax_5 == 8)
                    edx_1 = *(eax_4 + 0x4b8)
                    
                    if (edx_1 != 0)
                        void* eax_13 = sub_4eb5a0(ecx_3, edx_1)
                        
                        if (eax_13 != 0)
                            void* esi_5
                            
                            if (eax_4[0x48].d s<= *(eax_4 + 0x5c))
                                esi_5 = &eax_2[2]
                            else
                                esi_5 = eax_4 + 0x484
                            
                            int32_t var_138
                            __builtin_memcpy(&var_138, esi_5, 0x24)
                            void var_7c
                            __builtin_memcpy(&var_7c, &var_138, 0x24)
                            float var_170[0x4]
                            float var_70[0x6]
                            float* eax_14 = sub_465b90(&var_170, &var_70)
                            int32_t edx_8 = eax_14[1]
                            unimplemented  {fld st0, dword [ebp-0x11c]}
                            float var_10c_1 = *eax_14
                            float var_110 = fconvert.s(unimplemented  {fstp dword [ebp-0x10c], st0})
                            unimplemented  {fstp dword [ebp-0x10c], st0}
                            int32_t var_108_1 = edx_8
                            int32_t var_104_1 = eax_14[2]
                            int32_t var_100_1 = eax_14[3]
                            int32_t var_134
                            int32_t var_f8_1 = var_134
                            int32_t var_fc_1 = var_138
                            int32_t var_130
                            int32_t var_f4_1 = var_130
                            void var_38
                            __builtin_memcpy(&var_38, &var_110, 0x20)
                            float var_1e0[0x8]
                            sub_405f60(&var_1e0, eax_4 + 0x3c)
                            unimplemented  {fld st0, dword [0x8c4d34]}
                            int32_t var_1f4_4 = __builtin_memcpy(eax_13 + 0x2c, &var_1e0, 0x20)
                            float var_1f4_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            edx_1 = sub_4eed90(eax_13, var_1f4_5)
                            top -= 1
                            unimplemented  {call 0x4eed90}
                    else
                        void* esi_3
                        
                        if (eax_4[0x48].d s<= *(eax_4 + 0x5c))
                            esi_3 = &eax_2[2]
                        else
                            esi_3 = eax_4 + 0x484
                        
                        int32_t var_160
                        __builtin_memcpy(&var_160, esi_3, (eax_5 + 1) << 2)
                        void var_a0
                        __builtin_memcpy(&var_a0, &var_160, 0x24)
                        float var_1a0[0x4]
                        float var_94[0x6]
                        float* eax_9 = sub_465b90(&var_1a0, &var_94)
                        int32_t edx_3 = eax_9[1]
                        unimplemented  {fld st0, dword [ebp-0x144]}
                        float var_ec_1 = *eax_9
                        float var_f0 = fconvert.s(unimplemented  {fstp dword [ebp-0xec], st0})
                        unimplemented  {fstp dword [ebp-0xec], st0}
                        int32_t var_e8_1 = edx_3
                        int32_t var_e4_1 = eax_9[2]
                        int32_t var_e0_1 = eax_9[3]
                        int32_t var_15c
                        int32_t var_d8_1 = var_15c
                        int32_t var_dc_1 = var_160
                        int32_t var_158
                        int32_t var_d4_1 = var_158
                        void var_58
                        __builtin_memcpy(&var_58, &var_f0, 0x20)
                        float var_1c0[0x4]
                        sub_405f60(&var_1c0, eax_4 + 0x3c)
                        void var_190
                        __builtin_memcpy(&var_190, &var_1c0, 0x20)
                        int128_t* eax_11
                        eax_11, edx_1 = sub_4eb180(eax_2[0x2c], &var_190)
                        *(eax_4 + 0x4b8) = *(eax_11 + 0x78)
                void* result_4 = result_1
                var_c0_1 += 0xb8
                result = result_2 + 1
                result_2 = result
                
                if (result s>= *(result_4 + 4))
                    break
                
                edi = var_cc
                result = result_4
    
    sub_5a6aba(result_3 ^ &__saved_ebp)
    return result
}
