// 函数名称: sub_447790
// 虚拟地址: 0x447790
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_447790()
{
    // 第一条实际指令: void* ecx = data_27e7a40
    void* ecx = data_27e7a40
    void* ebx = *(ecx + 0x548)
    int32_t var_44
    int32_t eax
    
    if (*(ebx + 0xbfe4) != 0)
        if ((*(data_27e7fdc + 0xc) & 1) == 0 || *(data_27e7bbc + 0x18) == 0)
            sub_446ed0()
            return 
        
        char var_5_1 = 0
        
        if (*(ebx + 0xbfe8) != 7)
            void* eax_6 = sub_463f60(ebx + 0x43960, *(ebx + 0xbfd0))
            
            if (*(eax_6 + 0x5c) == 2)
                var_5_1 = 1
            
            if (*(eax_6 + 0x5c) != 2 || *(eax_6 + 0x58) != 0)
                var_5_1 = 0
        
        float var_14 = 0f
        float var_10_2 = 0f
        sub_4c6230(&var_14)
        int32_t var_28
        int16_t top
        
        if ((*(ebx + 0xbfe6) == 1 || var_5_1 != 0) && *(ebx + 0x43898) == 0)
            if (*(ebx + 0xbfe7) != 0)
            label_447a20:
                unimplemented  {fld st0, dword [ebp-0x10]}
                unimplemented  {fsub st0, dword [ebx+0xbfd4]}
                var_14 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                unimplemented  {fstp dword [ebp-0x10], st0}
                void var_24
                float* eax_11 = sub_4679a0(&var_24, &var_28, 1, &var_24, nullptr, &var_28)
                float var_34 = *eax_11
                int32_t var_2c_1 = eax_11[2]
                unimplemented  {fld st0, dword [ebp-0x28]}
                unimplemented  {fsub st0, dword [ebp-0x30]}
                int32_t var_30 = eax_11[1]
                float var_2c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
                unimplemented  {fld st0, dword [ebx+0x438a0]}
                var_28 = eax_11[3]
                unimplemented  {fld st0, dword [ebp-0x10]}
                unimplemented  {fdiv st0, dword [ebp-0x28]}
                unimplemented  {fsubp st1, st0}
                unimplemented  {fsubp st1, st0}
                *(ebx + 0x4389c) = fconvert.s(unimplemented  {fstp dword [ebx+0x4389c], st0})
                unimplemented  {fstp dword [ebx+0x4389c], st0}
                return 
            
            if (*(ebx + 0xbfe5) == 0)
                void var_a4
                int32_t eax_7
                int32_t edx_3
                int80_t st0_2
                st0_2, eax_7, edx_3 = sub_40a930(&var_a4)
                void var_64
                __builtin_memcpy(&var_64, eax_7, 0x40)
                float var_58
                int32_t var_2c
                var_2c.q = fconvert.d(fconvert.t(fconvert.s(fconvert.t(var_58) * fconvert.t(100.0))))
                long double st0_3 = sub_4659f0(ebx + 0xbfd4, edx_3, &var_14)
                long double x87_r5_1 = fconvert.t(var_2c.q)
                long double x87_r5_2 = x87_r5_1 * x87_r5_1
                x87_r5_2 - st0_3
                top = 0xffff
                void* eax_8
                eax_8.w = (x87_r5_2 < st0_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_2, st0_3) ? 1 : 0) << 0xa
                    | (x87_r5_2 == st0_3 ? 1 : 0) << 0xe | 0x3800
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (not(p_1))
                    float var_18_3 = fconvert.s(fconvert.t(var_10_2) - fconvert.t(*(ebx + 0xbfd8)))
                    top = 0xffff
                    
                    if (var_5_1 == 0)
                    label_4479fc:
                        
                        if (*(ebx + 0xbfe6) == 1)
                            *(ebx + 0xbfe5) = 1
                            data_307bef8
                            sub_4d6980()
                    else
                        float* var_b8_2 = &var_14
                        var_28 = fconvert.s(sub_4064d0(fconvert.s(fconvert.t(fconvert.s(
                            fconvert.t(var_14) - fconvert.t(*(ebx + 0xbfd4)))))))
                        long double st0_5 = sub_4064d0(fconvert.s(fconvert.t(fconvert.s(
                            fconvert.t(var_18_3) * fconvert.t(3.0)))))
                        long double x87_r5_3 = fconvert.t(var_28)
                        x87_r5_3 - st0_5
                        top = 0xffff
                        eax_8.w = (x87_r5_3 < st0_5 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_3, st0_5) ? 1 : 0) << 0xa
                            | (x87_r5_3 == st0_5 ? 1 : 0) << 0xe | 0x3800
                        
                        if ((eax_8:1.b & 0x41) != 0)
                            goto label_4479fc
                        
                        long double x87_r6_15 = fconvert.t(*(ebx + 0x4389c))
                        *(ebx + 0xbfe7) = 1
                        long double x87_r5_4 = fconvert.t(-1f)
                        x87_r5_4 - x87_r6_15
                        int16_t top_1 = 0xffff
                        eax_8.w = (x87_r5_4 < x87_r6_15 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_4, x87_r6_15) ? 1 : 0) << 0xa
                            | (x87_r5_4 == x87_r6_15 ? 1 : 0) << 0xe | 0x3800
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_2))
                            void* edx_4 = data_27e7a40
                            int32_t eax_9 = sub_424cd0(2, edx_4, *(edx_4 + 0x74))
                            int32_t* var_b8_5 = &var_44
                            sub_42f700(eax_9, 0, eax_9)
                            top_1 = 1
                        
                        unimplemented  {fld st0, dword [ebx+0x4389c]}
                        *(ebx + 0x438a0) = fconvert.s(unimplemented  {fstp dword [ebx+0x438a0], st0})
                        unimplemented  {fstp dword [ebx+0x438a0], st0}
                        top = top_1
                        data_307bef8
                        sub_4d6980()
        
        if (*(ebx + 0xbfe7) != 0)
            goto label_447a20
        
        if (*(ebx + 0xbfe5) != 0)
            *(ebx + 0xbfdc) = var_14
            *(ebx + 0xbfe0) = var_10_2
            return 
        
        int32_t eax_13 = sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *(ebx + 0xbfd0))
        void* ecx_15 = data_27e7a40
        int32_t eax_14 = *(ecx_15 + 8)
        
        if (*eax_13 != 1)
            int32_t edx_9 = *(ecx_15 + 0xc)
            var_28 = eax_14 - *(ebx + 0x2c070)
            unimplemented  {fild st0, dword [ebp-0x24]}
            int32_t var_10_4 = edx_9
            long double temp1_1 = fconvert.t(400.0)
            unimplemented  {fcomp st0, qword [0x8a59d0]} f- temp1_1
            bool c0_6 = unimplemented  {fcomp st0, qword [0x8a59d0]} f< temp1_1
            bool c2_6 = is_unordered.t(unimplemented  {fcomp st0, qword [0x8a59d0]}, temp1_1)
            bool c3_6 = unimplemented  {fcomp st0, qword [0x8a59d0]} f== temp1_1
            unimplemented  {fcomp st0, qword [0x8a59d0]}
            eax.w =
                (c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe | (top & 7) << 0xb
            
            if ((eax:1.b & 0x41) == 0)
                *(ebx + 0xbfd0)
                sub_4474b0(sub_4185c0())
                *(ebx + 0xbfe4) = 0
        else
            int32_t ecx_16 = *(ecx_15 + 0xc)
            var_28 = eax_14 - *(ebx + 0x2c070)
            unimplemented  {fild st0, dword [ebp-0x24]}
            int32_t var_10_3 = ecx_16
            long double temp2_1 = fconvert.t(400.0)
            unimplemented  {fcomp st0, qword [0x8a59d0]} f- temp2_1
            bool c0_5 = unimplemented  {fcomp st0, qword [0x8a59d0]} f< temp2_1
            bool c2_5 = is_unordered.t(unimplemented  {fcomp st0, qword [0x8a59d0]}, temp2_1)
            bool c3_5 = unimplemented  {fcomp st0, qword [0x8a59d0]} f== temp2_1
            unimplemented  {fcomp st0, qword [0x8a59d0]}
            eax.w =
                (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe | (top & 7) << 0xb
            
            if ((eax:1.b & 0x41) == 0)
                *(ebx + 0xbfd0)
                sub_4474b0(sub_418870(*(sub_4185c0() + 0x7c)))
                *(ebx + 0xbfe4) = 0
    else if (*(ebx + 0xbff8) == 1)
        int32_t ecx_1 = *(ecx + 0xc)
        long double x87_r7_1 = float.t(*(ecx + 8) - *(ebx + 0xc000))
        int32_t var_10_1 = ecx_1
        long double temp0_1 = fconvert.t(150f)
        x87_r7_1 - temp0_1
        eax.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
        
        if ((eax:1.b & 1) == 0 && *(ebx + 0xbfe6) != 0)
            void* eax_2 = sub_4185e0(ecx_1, *(ebx + 0xc008))
            
            if (eax_2 != 0)
                eax_2 = *(eax_2 + 0x5c)
                
                if (eax_2 == 3 || eax_2 == 0x14)
                    data_307bef8
                    sub_4d6980()
                    int32_t edx_2 = *(ebx + 0xc008)
                    __builtin_memset(&var_44, 0, 0x20)
                    var_44 = 0xe
                    int32_t var_40 = edx_2
                    sub_446e50(&var_44)
                    return 
            
            *(ebx + 0xbff8) = 0
}
