// 函数名称: sub_4ef420
// 虚拟地址: 0x4ef420
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4ef420(void* arg1, void* arg2, float* arg3)
{
    // 第一条实际指令: __builtin_memcpy(arg3, arg2, 0x68)
    __builtin_memcpy(arg3, arg2, 0x68)
    int32_t eax_2 = sub_466320(**(arg1 + 0x2e4))
    void* result_1 = *(arg1 + 0x2dc) * 0x134 + *eax_2
    int32_t* eax_4 = sub_466320(**(arg1 + 0x2e4))
    void* edi_1
    
    if (*(*(arg1 + 0x2dc) * 0x134 + *eax_4 + 0xd9) == 0)
        edi_1 = arg2 + 0x68
    else
        edi_1 = arg1 + 0x2a8
    
    float var_50[0x4]
    sub_405f60(&var_50, edi_1)
    float* ebx_1 = arg3
    void* result = result_1
    void var_70
    __builtin_memcpy(&var_70, &var_50, 0x20)
    __builtin_memcpy(&ebx_1[0x1a], &var_70, 0x20)
    void* i = nullptr
    arg2 = nullptr
    
    if (*(result + 0x118) s> 0)
        do
            int32_t ecx_3 = *(result + 0x11c)
            int32_t* esi_3 = ecx_3 + (i << 3)
            int32_t eax_7 = *(ecx_3 + (i << 3)) - 0x1f
            
            if (eax_7 u<= 0x34)
                uint32_t edx_2 = zx.d(lookup_table_4ef860[eax_7])
                int16_t top
                
                switch (edx_2)
                    case 0
                        sub_4eb7e0(esi_3, arg1)
                        unimplemented  {fadd dword [ebx+0x10]}
                        ebx_1[4] = fconvert.s(unimplemented  {fstp dword [ebx+0x10], st0})
                        unimplemented  {fstp dword [ebx+0x10], st0}
                        top += 1
                    case 1
                        sub_4eb7e0(esi_3, arg1)
                        unimplemented  {fadd dword [ebx+0x14]}
                        ebx_1[5] = fconvert.s(unimplemented  {fstp dword [ebx+0x14], st0})
                        unimplemented  {fstp dword [ebx+0x14], st0}
                        top += 1
                    case 2
                        sub_4eb7e0(esi_3, arg1)
                        unimplemented  {fadd dword [ebx+0x18]}
                        ebx_1[6] = fconvert.s(unimplemented  {fstp dword [ebx+0x18], st0})
                        unimplemented  {fstp dword [ebx+0x18], st0}
                        top += 1
                    case 3
                        float eax_17
                        int32_t edx_25
                        eax_17, edx_25 = sub_4eb940(esi_3, arg1)
                        top += 6
                        ebx_1[0x11] = eax_17
                        ebx_1[0x12] = edx_25
                    case 4
                        float eax_19
                        int32_t edx_26
                        eax_19, edx_26 = sub_4eb940(esi_3, arg1)
                        top += 6
                        ebx_1[0x13] = eax_19
                        ebx_1[0x14] = edx_26
                    case 5
                        float eax_21
                        int32_t edx_27
                        eax_21, edx_27 = sub_4eb940(esi_3, arg1)
                        top += 6
                        ebx_1[0x15] = eax_21
                        ebx_1[0x16] = edx_27
                    case 6
                        sub_4eb7e0(esi_3, arg1)
                        arg2 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                        unimplemented  {fstp dword [ebp+0xc], st0}
                        unimplemented  {fld st0, dword [ebx]}
                        unimplemented  {fld st0, dword [ebp+0xc]}
                        unimplemented  {fld st0, st0}
                        unimplemented  {fmulp st2, st0}
                        unimplemented  {fmulp st2, st0}
                        unimplemented  {fxch st0, st1}
                        unimplemented  {fxch st0, st1}
                        *ebx_1 = fconvert.s(unimplemented  {fstp dword [ebx], st0})
                        unimplemented  {fstp dword [ebx], st0}
                        unimplemented  {fld st0, dword [ebx+0x4]}
                        unimplemented  {fmul st0, st1}
                        ebx_1[1] = fconvert.s(unimplemented  {fstp dword [ebx+0x4], st0})
                        unimplemented  {fstp dword [ebx+0x4], st0}
                        unimplemented  {fmul st0, dword [ebx+0x8]}
                        ebx_1[2] = fconvert.s(unimplemented  {fstp dword [ebx+0x8], st0})
                        unimplemented  {fstp dword [ebx+0x8], st0}
                        top += 1
                    case 7
                        sub_4eb7e0(esi_3, arg1)
                        unimplemented  {fmul st0, dword [ebx]}
                        *ebx_1 = fconvert.s(unimplemented  {fstp dword [ebx], st0})
                        unimplemented  {fstp dword [ebx], st0}
                        top += 1
                    case 8
                        sub_4eb7e0(esi_3, arg1)
                        unimplemented  {fmul st0, dword [ebx+0x4]}
                        ebx_1[1] = fconvert.s(unimplemented  {fstp dword [ebx+0x4], st0})
                        unimplemented  {fstp dword [ebx+0x4], st0}
                        top += 1
                    case 9
                        sub_4eb7e0(esi_3, arg1)
                        unimplemented  {fmul st0, dword [ebx+0x8]}
                        ebx_1[2] = fconvert.s(unimplemented  {fstp dword [ebx+0x8], st0})
                        unimplemented  {fstp dword [ebx+0x8], st0}
                        top += 1
                    case 0xa
                        int32_t ecx_8 = sub_4eb780(arg1, edx_2, 1)
                        unimplemented  {call 0x4eb780}
                        unimplemented  {fmul st0, dword [0x30d7344]}
                        int32_t var_84_2 = ecx_8
                        arg2 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                        unimplemented  {fstp dword [ebp+0xc], st0}
                        unimplemented  {fld st0, dword [ebp+0xc]}
                        unimplemented  {fadd dword [esi+0x28]}
                        arg2 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                        unimplemented  {fstp dword [ebp+0xc], st0}
                        unimplemented  {fld st0, dword [ebp+0xc]}
                        float var_84_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int32_t edx_7 = sub_406680(var_84_3)
                        unimplemented  {call 0x406680}
                        arg3 = fconvert.s(unimplemented  {fstp dword [ebp+0x10], st0})
                        unimplemented  {fstp dword [ebp+0x10], st0}
                        int32_t ecx_9 = sub_4eb780(arg1, edx_7, 0)
                        unimplemented  {call 0x4eb780}
                        unimplemented  {fmul st0, dword [0x30d7344]}
                        int32_t var_84_4 = ecx_9
                        arg2 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                        unimplemented  {fstp dword [ebp+0xc], st0}
                        unimplemented  {fld st0, dword [ebp+0xc]}
                        unimplemented  {fadd dword [ebp+0x10]}
                        arg2 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                        unimplemented  {fstp dword [ebp+0xc], st0}
                        unimplemented  {fld st0, dword [ebp+0xc]}
                        float var_84_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        int16_t x87control_1
                        long double st0_1
                        st0_1, x87control_1 = sub_406680(var_84_5)
                        unimplemented  {call 0x406680}
                        unimplemented  {fmul st0, dword [ebx]}
                        *ebx_1 = fconvert.s(unimplemented  {fstp dword [ebx], st0})
                        unimplemented  {fstp dword [ebx], st0}
                        unimplemented  {fld st0, dword [ebp+0xc]}
                        int32_t mxcsr
                        sub_686860(mxcsr, x87control_1, st0_1)
                        unimplemented  {call 0x686860}
                        arg2 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                        unimplemented  {fstp dword [ebp+0xc], st0}
                        unimplemented  {fld st0, dword [ebp+0xc]}
                        unimplemented  {fmul st0, dword [ebx+0x4]}
                        ebx_1[1] = fconvert.s(unimplemented  {fstp dword [ebx+0x4], st0})
                        unimplemented  {fstp dword [ebx+0x4], st0}
                        int16_t top_24
                        top = top_24
                    case 0xb
                        sub_4eb7e0(esi_3, arg1)
                        unimplemented  {fmul st0, dword [ebx+0x24]}
                        ebx_1[9] = fconvert.s(unimplemented  {fstp dword [ebx+0x24], st0})
                        unimplemented  {fstp dword [ebx+0x24], st0}
                        top += 1
                    case 0xc
                        sub_4eb7e0(esi_3, arg1)
                        unimplemented  {fmul st0, dword [ebx+0x28]}
                        ebx_1[0xa] = fconvert.s(unimplemented  {fstp dword [ebx+0x28], st0})
                        unimplemented  {fstp dword [ebx+0x28], st0}
                        top += 1
                    case 0xd
                        sub_4eb7e0(esi_3, arg1)
                        unimplemented  {fmul st0, dword [ebx+0x2c]}
                        ebx_1[0xb] = fconvert.s(unimplemented  {fstp dword [ebx+0x2c], st0})
                        unimplemented  {fstp dword [ebx+0x2c], st0}
                        top += 1
                    case 0xe
                        sub_4eb7e0(esi_3, arg1)
                        unimplemented  {fmul st0, dword [ebx+0x30]}
                        ebx_1[0xc] = fconvert.s(unimplemented  {fstp dword [ebx+0x30], st0})
                        unimplemented  {fstp dword [ebx+0x30], st0}
                        top += 1
                    case 0xf
                        sub_4eb7e0(esi_3, arg1)
                        unimplemented  {fmul st0, dword [ebx+0x40]}
                        ebx_1[0x10] = fconvert.s(unimplemented  {fstp dword [ebx+0x40], st0})
                        unimplemented  {fstp dword [ebx+0x40], st0}
                        top += 1
                    case 0x10
                        unimplemented  {fld st0, dword [0x8a53d8]}
                        float var_84_7 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                        unimplemented  {fstp dword [esp+0x4], st0}
                        sub_4eb7e0(esi_3, arg1)
                        unimplemented  {fadd dword [ebx+0x34]}
                        arg2 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                        unimplemented  {fstp dword [ebp+0xc], st0}
                        unimplemented  {fld st0, dword [ebp+0xc]}
                        float var_88_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        sub_4ef100(var_88_2, var_84_7)
                        unimplemented  {call 0x4ef100}
                        ebx_1[0xd] = fconvert.s(unimplemented  {fstp dword [ebx+0x34], st0})
                        unimplemented  {fstp dword [ebx+0x34], st0}
                        ebx_1[0x19].b = 1
                    case 0x11
                        sub_4eb7e0(esi_3, arg1)
                        unimplemented  {fadd dword [ebx+0x38]}
                        ebx_1[0x19].b = 1
                        ebx_1[0xe] = fconvert.s(unimplemented  {fstp dword [ebx+0x38], st0})
                        unimplemented  {fstp dword [ebx+0x38], st0}
                        top += 1
                    case 0x12
                        sub_4eb7e0(esi_3, arg1)
                        unimplemented  {fmul st0, dword [ebx+0x3c]}
                        ebx_1[0x19].b = 1
                        ebx_1[0xf] = fconvert.s(unimplemented  {fstp dword [ebx+0x3c], st0})
                        unimplemented  {fstp dword [ebx+0x3c], st0}
                        top += 1
                    case 0x13
                        char** eax_10 = esi_3[1]
                        
                        if (eax_10 != 0)
                            int128_t* var_64
                            int32_t edx_14 = sub_50ae60(eax_10, &var_64)
                            unimplemented  {fld st0, dword [eax+0x2e8]}
                            float var_14_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                            unimplemented  {fstp dword [ebp-0x10], st0}
                            sub_4eb780(arg1, edx_14, *esi_3)
                            unimplemented  {call 0x4eb780}
                            float var_10_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
                            unimplemented  {fstp dword [ebp-0xc], st0}
                            float var_90 = var_14_1
                            float var_40[0x5]
                            float* eax_13 = sub_4ef2e0(&var_64, &var_40, var_90, var_10_1)
                            i = arg2
                            float var_2c_1 = *eax_13
                            unimplemented  {fld st0, dword [ebp-0x28]}
                            unimplemented  {fmul st0, dword [ebx+0x24]}
                            int32_t ecx_18 = eax_13[2]
                            int32_t var_28_1 = eax_13[1]
                            int32_t edx_17 = eax_13[3]
                            ebx_1[9] = fconvert.s(unimplemented  {fstp dword [ebx+0x24], st0})
                            unimplemented  {fstp dword [ebx+0x24], st0}
                            int32_t var_24_1 = ecx_18
                            unimplemented  {fld st0, dword [ebx+0x28]}
                            int32_t var_20_1 = edx_17
                            unimplemented  {fmul st0, dword [ebp-0x24]}
                            ebx_1[0xa] = fconvert.s(unimplemented  {fstp dword [ebx+0x28], st0})
                            unimplemented  {fstp dword [ebx+0x28], st0}
                            unimplemented  {fld st0, dword [ebx+0x2c]}
                            unimplemented  {fmul st0, dword [ebp-0x20]}
                            ebx_1[0xb] = fconvert.s(unimplemented  {fstp dword [ebx+0x2c], st0})
                            unimplemented  {fstp dword [ebx+0x2c], st0}
                            unimplemented  {fld st0, dword [ebx+0x30]}
                            unimplemented  {fmul st0, dword [ebp-0x1c]}
                            ebx_1[0xc] = fconvert.s(unimplemented  {fstp dword [ebx+0x30], st0})
                            unimplemented  {fstp dword [ebx+0x30], st0}
                    case 0x14
                        float eax_15
                        int32_t edx_24
                        eax_15, edx_24 = sub_4eb940(esi_3, arg1)
                        unimplemented  {fld st0, dword [ebx+0x1c]}
                        float var_1c_1 = eax_15
                        unimplemented  {fadd dword [ebp-0x18]}
                        int32_t var_18_1 = edx_24
                        ebx_1[7] = fconvert.s(unimplemented  {fstp dword [ebx+0x1c], st0})
                        unimplemented  {fstp dword [ebx+0x1c], st0}
                        unimplemented  {fld st0, dword [ebp-0x14]}
                        unimplemented  {fadd dword [ebx+0x20]}
                        ebx_1[8] = fconvert.s(unimplemented  {fstp dword [ebx+0x20], st0})
                        unimplemented  {fstp dword [ebx+0x20], st0}
                        top += 6
                    case 0x15
                        sub_4eb7e0(esi_3, arg1)
                        unimplemented  {fadd dword [ebx+0xc]}
                        ebx_1[3] = fconvert.s(unimplemented  {fstp dword [ebx+0xc], st0})
                        unimplemented  {fstp dword [ebx+0xc], st0}
                        top += 1
                    case 0x16
                        float eax_23
                        int32_t edx_28
                        eax_23, edx_28 = sub_4eb940(esi_3, arg1)
                        top += 6
                        ebx_1[0x17] = eax_23
                        ebx_1[0x18] = edx_28
            
            result = result_1
            i += 1
            arg2 = i
        while (i s< *(result + 0x118))
    
    return result
}
