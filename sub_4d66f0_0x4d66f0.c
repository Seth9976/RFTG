// 函数名称: sub_4d66f0
// 虚拟地址: 0x4d66f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d66f0(float arg1)
{
    // 第一条实际指令: float var_c = fconvert.s(fconvert.t(*(data_27e7fcc + 0x4c)))
    float var_c = fconvert.s(fconvert.t(*(data_27e7fcc + 0x4c)))
    int32_t* edi = arg1
    void* ebx = sub_4d6c80(edi[4])
    int32_t esi_1 = *(ebx + 8)
    int32_t eax_2
    
    if (esi_1 s> 0)
        edi[4]
        eax_2 = sub_4d6690()
    
    if (esi_1 s<= 0 || eax_2 s< esi_1)
        int32_t* eax_3 = data_27e7fd4
        long double x87_r7_1 = fconvert.t(var_c)
        int32_t* esi_2 = *eax_3
        long double x87_r6_1 = float.t(0)
        int32_t* ecx_1 = nullptr
        
        while (true)
            if (ecx_1 == 0)
                ecx_1 = esi_2
                goto label_4d674e
            
            do
                ecx_1 = &ecx_1[0x18]
            label_4d674e:
                
                if (ecx_1 u>= &esi_2[eax_3[1] * 0x18])
                    void* eax_7 = data_27e7fd4
                    
                    if (*(eax_7 + 0x10) == *(eax_7 + 8))
                        char* const edi_2 = *(*edi + 0x20)
                        
                        if (edi_2 == 0)
                            edi_2 = &data_83f3d3
                        
                        char* const var_1c = edi_2
                        sub_4c5680("Too many sounds, not playing %s")
                        return 0
                    
                    int32_t* eax_9 = sub_4d6fc0()
                    *eax_9 = *edi
                    eax_9[1] = edi[4]
                    eax_9[0xf] = fconvert.s(fconvert.t(edi[1]))
                    eax_9[0x10] = fconvert.s(fconvert.t(edi[2]))
                    long double x87_r7_4 = float.t(1)
                    *(eax_9 + 0x57) = *(edi + 0x15)
                    int32_t edx_4
                    edx_4.b = *(edi + 0x16)
                    eax_9[0x16].b = edx_4.b
                    int32_t eax_10
                    eax_10.b = edi[5].b
                    eax_9[0x15].b = eax_10.b
                    eax_9[0xe] = fconvert.s(x87_r7_4)
                    float var_8_2 = fconvert.s(x87_r7_4)
                    *(eax_9 + 0x59) = *(edi + 0x17)
                    int32_t eax_11
                    long double st0
                    st0, eax_11 = sub_4d65f0(eax_9)
                    eax_9[0x11] = fconvert.s(st0)
                    eax_9[0x13] = fconvert.s(fconvert.t(0.5f))
                    long double x87_r7_7 = fconvert.t(*(arg1 i+ 4))
                    long double x87_r6_2 = float.t(0)
                    x87_r6_2 - x87_r7_7
                    eax_11.w = (x87_r6_2 < x87_r7_7 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_2, x87_r7_7) ? 1 : 0) << 0xa
                        | (x87_r6_2 == x87_r7_7 ? 1 : 0) << 0xe
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        int32_t mxcsr
                        int16_t x87control
                        sub_686c10(mxcsr, x87control, fconvert.t(*(arg1 i+ 4)), 
                            fconvert.t(1.0594631433486938))
                        float var_8_3 = fconvert.s(fconvert.t(fconvert.s(x87_r7_1)))
                    
                    unimplemented  {fld st0, dword [ebp-0x4]}
                    int32_t* ecx_5 = data_27e7fd8
                    eax_9[0x12] = fconvert.s(unimplemented  {fstp dword [esi+0x48], st0})
                    unimplemented  {fstp dword [esi+0x48], st0}
                    
                    if ((*(*ecx_5 + 0xc))(eax_9, arg1) != 0)
                        unimplemented  {fld st0, dword [ebp-0x8]}
                        int32_t result = eax_9[0x17]
                        eax_9[4] = fconvert.s(unimplemented  {fstp dword [esi+0x10], st0})
                        unimplemented  {fstp dword [esi+0x10], st0}
                        *(eax_9 + 0x56) = 1
                        return result
                    
                    void* eax_14 = data_27e7fd4
                    int32_t ecx_6 = *(eax_14 + 0xc)
                    *(eax_14 + 0xc) = zx.d(eax_9[0x17].w)
                    eax_9[0x17] = ecx_6
                    *(eax_14 + 0x10) -= 1
                    return 0
            while ((ecx_1[0x17] & 0xffff0000) == 0)
            
            if (*ecx_1 != *edi && ecx_1[1] != edi[4])
                continue
            
            if (*(ecx_1 + 0x56) != 0)
                long double temp0_1 = fconvert.t(*(ebx + 0xc))
                x87_r6_1 - temp0_1
                int32_t eax_5
                eax_5.w = (x87_r6_1 < temp0_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == temp0_1 ? 1 : 0) << 0xe | 0x3000
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (not(p_1))
                    long double x87_r5_3 = fconvert.t(fconvert.s(x87_r7_1 - fconvert.t(ecx_1[4])))
                    long double x87_r4_1 = fconvert.t(*(ebx + 0xc))
                    x87_r4_1 - x87_r5_3
                    eax_5.w = (x87_r4_1 < x87_r5_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_1, x87_r5_3) ? 1 : 0) << 0xa
                        | (x87_r4_1 == x87_r5_3 ? 1 : 0) << 0xe | 0x3000
                    
                    if ((eax_5:1.b & 0x41) == 0)
                        break
    
    return 0
}
