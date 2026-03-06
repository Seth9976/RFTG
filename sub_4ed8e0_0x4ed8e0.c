// 函数名称: sub_4ed8e0
// 虚拟地址: 0x4ed8e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_4ed8e0(float arg1 @ ecx, float* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float ebx = arg1
    float var_78 = ebx
    int32_t eax_4 = sub_466320(**(ebx i+ 0x2e4))
    float* ecx_2 = *(ebx i+ 0x2dc) * 0x134 + *eax_4
    arg2[0xc] = ebx
    void* edi = ebx i+ 0x288
    arg2[0xb] = modu.dp.d(0:(sub_4c95c0()), 0x7fffffff)
    *(ebx i+ 0x2ec) = fconvert.s(float.t(1))
    __builtin_memcpy(edi, &data_be4c5c, 0x20)
    void* ecx_3 = *(arg2[0xc] i+ 0x2e4)
    
    if (*(ecx_3 + 0x28) s> 0)
        ebx = var_78
        arg2[0xf] = sub_4ed6f0(*(ecx_3 + 0x24))
    
    int32_t* eax_12 = sub_466320(**(ebx i+ 0x2e4))
    long double x87_r7_1 = float.t(0)
    long double x87_r0
    long double x87_r5
    long double x87_r6
    
    if (*(*(ebx i+ 0x2dc) * 0x134 + *eax_12 + 0xd6) == 0)
        x87_r0 = x87_r7_1
    else
        long double x87_r6_3 =
            fconvert.t(fconvert.s(fconvert.t((sub_4c95c0() & 0x7fffff) | 0x3f800000) - fconvert.t(1.0)))
        x87_r5 = fconvert.t(data_30d7344) - x87_r7_1
        x87_r6 = x87_r6_3 * x87_r5
        arg2[9] = fconvert.s(x87_r7_1 + x87_r6)
    
    int32_t* eax_18 = sub_466320(**(ebx i+ 0x2e4))
    
    if (*(*(ebx i+ 0x2dc) * 0x134 + *eax_18 + 0xd8) != 0)
        long double x87_r6_4 = float.t(1)
        long double x87_r5_2 = float.t(0)
        x87_r5 = fconvert.t(fconvert.s(fconvert.t((sub_4c95c0() & 0x7fffff) | 0x3f800000) - x87_r6_4))
        x87_r6 = x87_r5_2
        *(ebx i+ 0x2e8) = fconvert.s((x87_r6_4 - x87_r5_2) * x87_r5 + x87_r6)
    
    int32_t* eax_24 = sub_466320(**(ebx i+ 0x2e4))
    float* edx_8 = *(ebx i+ 0x2dc) * 0x134
    float var_3c
    float var_2c
    
    if (*(edx_8 + *eax_24 + 0xd7) != 0)
        float* eax_26 = sub_4ed7d0()
        int32_t edx_9 = eax_26[1]
        int32_t eax_27 = eax_26[2]
        var_2c = *eax_26
        int32_t var_28_1 = edx_9
        int32_t var_24_1 = eax_27
        int32_t eax_28
        int32_t ecx_10
        eax_28, ecx_10 = sub_4c95c0()
        int32_t var_150_5 = ecx_10
        int32_t* eax_31 = sub_406230(&var_3c, &var_2c, 
            fconvert.s(fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(fconvert.t((eax_28 & 0x7fffff) | 0x3f800000) - fconvert.t(1.0)))
                * fconvert.t(data_30d7344)))))
        edx_8 = eax_31[1]
        int32_t esi_2 = eax_31[2]
        int32_t edi_2 = eax_31[3]
        *(var_78 i+ 0x28c) = *eax_31
        *(var_78 i+ 0x290) = edx_8
        *(var_78 i+ 0x294) = esi_2
        *(var_78 i+ 0x298) = edi_2
        ebx = var_78
    
    long double x87_r7_14 = float.t(0)
    float var_8c
    int32_t* var_150_7 = &var_8c
    var_8c = fconvert.s(x87_r7_14)
    char eax_33
    float* edx_10
    long double x87_r2
    eax_33, edx_10 = sub_4eb9a0(0x1a, x87_r2, ebx, edx_8)
    
    if (eax_33 != 0)
        if ((data_3160084.b & 1) == 0)
            long double x87_r2_1 = fconvert.t(data_be1abc)
            data_3160084 |= 1
            data_316007c = fconvert.s(x87_r2_1 / fconvert.t(360.0))
        
        var_8c = fconvert.s(fconvert.t(data_316007c) * fconvert.t(var_8c))
    
    float var_88
    float* var_150_8 = &var_88
    var_88 = fconvert.s(float.t(0))
    char eax_34 = sub_4eb9a0(0x1b, x87_r5, ebx, edx_10)
    long double x87_r5_3 = fconvert.t(data_be1abc)
    
    if (eax_34 != 0)
        if ((data_3160084.b & 1) == 0)
            data_3160084 |= 1
            data_316007c = fconvert.s(x87_r5_3 / fconvert.t(360.0))
        
        var_88 = fconvert.s(fconvert.t(data_316007c) * fconvert.t(var_88))
    
    int32_t eax_35 = data_3160080
    
    if ((eax_35.b & 1) == 0)
        eax_35 |= 1
        data_3160080 = eax_35
        data_3160078 = fconvert.s(fconvert.t(360.0) / x87_r5_3)
    
    long double x87_r4_8 = fconvert.t(data_3160078) * fconvert.t(var_88)
    float var_74_8 = fconvert.s(x87_r4_8)
    
    if ((eax_35.b & 1) != 0)
        x87_r6 = x87_r5_3
    else
        data_3160080 = eax_35 | 1
        data_3160078 = fconvert.s(fconvert.t(360.0) / x87_r5_3)
    
    float var_1c = fconvert.s(fconvert.t(data_3160078) * fconvert.t(var_8c))
    int32_t* eax_37 =
        sub_4ec740(&var_3c, var_1c, fconvert.s(fconvert.t(var_74_8)), fconvert.s(float.t(0)))
    float* edx_12 = eax_37[1]
    int32_t esi_4 = eax_37[2]
    int32_t eax_38 = eax_37[3]
    *(ebx i+ 0x28c) = *eax_37
    *(ebx i+ 0x290) = edx_12
    *(ebx i+ 0x294) = esi_4
    float esi_5 = var_78
    float i_1
    int32_t* var_150_10 = &i_1
    *(ebx i+ 0x298) = eax_38
    char eax_39
    float* edx_13
    int16_t x87control
    eax_39, edx_13, x87control = sub_4eb9a0(0x19, x87_r0, esi_5, edx_12)
    float var_7c
    float* edi_3
    int32_t mxcsr
    
    if (eax_39 == 0)
        edi_3 = arg2
    else
        int32_t ecx_15
        long double st0_1
        st0_1, ecx_15 = sub_686860(mxcsr, x87control, fconvert.t(var_88))
        float var_94_1 = fconvert.s(st0_1)
        int32_t var_150_11 = ecx_15
        int16_t x87control_1
        long double st0_2
        st0_2, x87control_1 = sub_406680(fconvert.s(fconvert.t(var_8c)))
        edi_3 = arg2
        edi_3[3] = fconvert.s(
            st0_2 * fconvert.t(var_94_1) * fconvert.t(i_1) * fconvert.t(*(*(esi_5 i+ 0x2e4) + 0x58))
            + fconvert.t(edi_3[3]))
        var_7c = fconvert.s(sub_686860(mxcsr, x87control_1, fconvert.t(var_8c)))
        void* ecx_16 = *(esi_5 i+ 0x2e4)
        void* var_150_13 = ecx_16
        edi_3[4] = fconvert.s(
            fconvert.t(var_7c) * fconvert.t(var_94_1) * fconvert.t(i_1) * fconvert.t(*(ecx_16 + 0x58))
            + fconvert.t(edi_3[4]))
        long double x87_r0_18 = sub_406680(fconvert.s(fconvert.t(var_88))) * fconvert.t(i_1)
        edx_13 = *(esi_5 i+ 0x2e4)
        edi_3[5] = fconvert.s(x87_r0_18 * fconvert.t(edx_13[0x16]) + fconvert.t(edi_3[5]))
    
    float* var_150_15 = &i_1
    char eax_41
    float* edx_14
    int16_t x87control_2
    long double x87_r3
    eax_41, edx_14, x87control_2 = sub_4eb9a0(0x18, x87_r3, esi_5, edx_13)
    
    if (eax_41 != 0)
        int32_t ecx_17
        long double st0_5
        st0_5, ecx_17 = sub_686860(mxcsr, x87control_2, fconvert.t(var_88))
        float var_94_2 = fconvert.s(st0_5)
        int32_t var_150_16 = ecx_17
        int16_t x87control_3
        long double st0_6
        st0_6, x87control_3 = sub_406680(fconvert.s(fconvert.t(var_8c)))
        *(esi_5 i+ 0x29c) =
            fconvert.s(st0_6 * fconvert.t(var_94_2) * fconvert.t(i_1) + fconvert.t(*(esi_5 i+ 0x29c)))
        int32_t ecx_18
        long double st0_7
        st0_7, ecx_18 = sub_686860(mxcsr, x87control_3, fconvert.t(var_8c))
        var_7c = fconvert.s(st0_7)
        int32_t var_150_18 = ecx_18
        *(esi_5 i+ 0x2a0) = fconvert.s(fconvert.t(var_7c) * fconvert.t(var_94_2) * fconvert.t(i_1)
            + fconvert.t(*(esi_5 i+ 0x2a0)))
        long double st0_8
        st0_8, edx_14 = sub_406680(fconvert.s(fconvert.t(var_88)))
        *(esi_5 i+ 0x2a4) = fconvert.s(st0_8 * fconvert.t(i_1) + fconvert.t(*(esi_5 i+ 0x2a4)))
    
    float* var_150_20 = &var_7c
    char eax_42
    float* edx_15
    eax_42, edx_15 = sub_4eb9a0(0x1c, x87_r6, esi_5, edx_14)
    
    if (eax_42 != 0)
        *(esi_5 i+ 0x29c) = fconvert.s(fconvert.t(var_7c) + fconvert.t(*(esi_5 i+ 0x29c)))
    
    float* var_150_21 = &var_7c
    char eax_43
    float* edx_16
    long double x87_r1
    eax_43, edx_16 = sub_4eb9a0(0x1d, x87_r1, esi_5, edx_15)
    
    if (eax_43 != 0)
        *(esi_5 i+ 0x2a0) = fconvert.s(fconvert.t(*(esi_5 i+ 0x2a0)) + fconvert.t(var_7c))
    
    float* var_150_22 = &var_7c
    
    if (sub_4eb9a0(0x1e, x87_r4_8, esi_5, edx_16) != 0)
        *(esi_5 i+ 0x2a4) = fconvert.s(fconvert.t(*(esi_5 i+ 0x2a4)) + fconvert.t(var_7c))
    
    int32_t* eax_46 = sub_466320(**(esi_5 i+ 0x2e4))
    char ecx_20 = *(*(esi_5 i+ 0x2dc) * 0x134 + *eax_46 + 0xdb)
    float* edx_19 = ecx_2
    int32_t eax_48 = edx_19[0x3c]
    
    if (eax_48 s<= 1 || ecx_20 != 0)
        edi_3[0xd] = 0
    else
        uint32_t eax_49
        eax_49, edx_19 = sub_40afb0(eax_48)
        esi_5 = var_78
        edi_3[0xd] = eax_49
    
    int32_t eax_51 = ecx_2[0x3d]
    
    if (eax_51 s<= 1 || ecx_20 != 0)
        edi_3[0xe] = 0
    else
        uint32_t eax_52
        eax_52, edx_19 = sub_40afb0(eax_51)
        esi_5 = var_78
        edi_3[0xe] = eax_52
    
    float* var_150_24 = &var_7c
    int16_t top = 0x18
    
    if (sub_4eb9a0(0x22, x87_r7_14, esi_5, edx_19) != 0)
        float ecx_21 = *(ecx_3 + 0x44)
        float edx_21 = *(ecx_3 + 0x48)
        var_2c = fconvert.s(fconvert.t(*(ecx_3 + 0x40)) - fconvert.t(*(ecx_3 + 0x68)))
        float var_28_2 = fconvert.s(fconvert.t(ecx_21) - fconvert.t(*(ecx_3 + 0x6c)))
        float var_24_2 = fconvert.s(fconvert.t(edx_21) - fconvert.t(*(ecx_3 + 0x70)))
        float var_70_1 = fconvert.s(fconvert.t(data_8c4d34) / fconvert.t(*(ecx_3 + 0x58)))
        long double x87_r6_9 = fconvert.t(var_7c)
        var_1c = fconvert.s(fconvert.t(var_2c) * x87_r6_9)
        float var_18_2 = fconvert.s(fconvert.t(var_28_2) * x87_r6_9)
        float var_14_2 = fconvert.s(x87_r6_9 * fconvert.t(var_24_2))
        long double x87_r6_13 = fconvert.t(var_70_1)
        var_2c = fconvert.s(fconvert.t(var_1c) * x87_r6_13)
        float var_28_3 = fconvert.s(fconvert.t(var_18_2) * x87_r6_13)
        float var_24_3 = fconvert.s(x87_r6_13 * fconvert.t(var_14_2))
        edi_3[3] = fconvert.s(fconvert.t(edi_3[3]) + fconvert.t(var_2c))
        edi_3[4] = fconvert.s(fconvert.t(edi_3[4]) + fconvert.t(var_28_3))
        edi_3[5] = fconvert.s(fconvert.t(var_24_3) + fconvert.t(edi_3[5]))
        top = 0x18
    
    float* ecx_37 = ecx_2
    float i = 0f
    i_1 = 0f
    float var_bc[0x8]
    
    if (ecx_37[0x42] s> 0)
        void* ebx_3 = ebx i+ 0x28c
        
        do
            int32_t* ecx_23 = ecx_37[0x43] i+ (i << 3)
            float* eax_58
            float* ecx_27
            
            switch (*ecx_23 - 9)
                case 0
                    unimplemented  {fldz }
                    int32_t* var_150_36 = ecx_23
                    float var_150_37 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    float var_6c[0x8]
                    __builtin_memcpy(&var_6c, sub_4ec590(ecx_23[1], var_150_37), 0x20)
                    sub_405f60(&var_bc, &var_6c)
                    ebx_3 = ebx i+ 0x28c
                    __builtin_memcpy(edi, &var_bc, 0x20)
                    edi_3 = arg2
                    esi_5 = var_78
                case 0xe
                    sub_4eb7e0(ecx_23, edi_3[0xc])
                    unimplemented  {fdivr st0, qword [0x8a55e8]}
                    *(esi_5 i+ 0x2ec) = fconvert.s(unimplemented  {fstp dword [esi+0x2ec], st0})
                    unimplemented  {fstp dword [esi+0x2ec], st0}
                    top += 1
                case 0x1a
                    int32_t ecx_24 = sub_4eb7e0(ecx_23, edi_3[0xc])
                    float var_70_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                    unimplemented  {fstp dword [ebp-0x6c], st0}
                    unimplemented  {fld st0, dword [ebp-0x6c]}
                    int32_t var_150_25 = ecx_24
                    float var_150_26 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_4f4130(var_150_26)
                    unimplemented  {call 0x4f4130}
                    float var_150_27 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top += 1
                    void var_11c
                    float* eax_57 = sub_406230(&var_11c, &data_8409cc, var_150_27)
                    int32_t edx_31 = eax_57[1]
                    var_1c = *eax_57
                    int32_t var_18_3 = edx_31
                    int32_t var_14_3 = eax_57[2]
                    int32_t var_10_2 = eax_57[3]
                    ecx_27 = &var_1c
                    void var_ec
                    eax_58 = &var_ec
                label_4ee075:
                    sub_405ee0(eax_58, ebx_3, ecx_27)
                    int32_t edx_34 = eax_58[1]
                    int32_t esi_9 = eax_58[2]
                    int32_t eax_59 = eax_58[3]
                    *ebx_3 = *eax_58
                    *(ebx_3 + 4) = edx_34
                    *(ebx_3 + 8) = esi_9
                    *(ebx_3 + 0xc) = eax_59
                    edi_3 = arg2
                    esi_5 = var_78
                case 0x1b
                    int32_t ecx_29 = sub_4eb7e0(ecx_23, edi_3[0xc])
                    float var_70_9 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                    unimplemented  {fstp dword [ebp-0x6c], st0}
                    unimplemented  {fld st0, dword [ebp-0x6c]}
                    int32_t var_150_28 = ecx_29
                    float var_150_29 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_4f4130(var_150_29)
                    unimplemented  {call 0x4f4130}
                    float var_150_30 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top += 1
                    void var_10c
                    float* eax_60 = sub_406230(&var_10c, &data_8409b4, var_150_30)
                    int32_t edx_36 = eax_60[1]
                    float var_4c = *eax_60
                    int32_t var_48_1 = edx_36
                    int32_t var_44_1 = eax_60[2]
                    int32_t var_40_1 = eax_60[3]
                    ecx_27 = &var_4c
                    void var_cc
                    eax_58 = &var_cc
                    goto label_4ee075
                case 0x1c
                    int32_t ecx_32 = sub_4eb7e0(ecx_23, edi_3[0xc])
                    float var_70_10 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                    unimplemented  {fstp dword [ebp-0x6c], st0}
                    unimplemented  {fld st0, dword [ebp-0x6c]}
                    int32_t var_150_31 = ecx_32
                    float var_150_32 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_4f4130(var_150_32)
                    unimplemented  {call 0x4f4130}
                    float var_150_33 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top += 1
                    void var_fc
                    float* eax_61 = sub_406230(&var_fc, &data_8409c0, var_150_33)
                    int32_t edx_39 = eax_61[1]
                    var_3c = *eax_61
                    int32_t var_38_1 = edx_39
                    int32_t var_34_1 = eax_61[2]
                    int32_t var_30_1 = eax_61[3]
                    ecx_27 = &var_3c
                    void var_dc
                    eax_58 = &var_dc
                    goto label_4ee075
                case 0x1d
                    sub_4eb7e0(ecx_23, edi_3[0xc])
                    float var_70_11 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                    unimplemented  {fstp dword [ebp-0x6c], st0}
                    unimplemented  {fld st0, dword [edi]}
                    unimplemented  {fadd dword [ebp-0x6c]}
                    *edi_3 = fconvert.s(unimplemented  {fstp dword [edi], st0})
                    unimplemented  {fstp dword [edi], st0}
                    top += 1
                case 0x1e
                    sub_4eb7e0(ecx_23, edi_3[0xc])
                    float var_70_12 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                    unimplemented  {fstp dword [ebp-0x6c], st0}
                    unimplemented  {fld st0, dword [ebp-0x6c]}
                    unimplemented  {fadd dword [edi+0x4]}
                    edi_3[1] = fconvert.s(unimplemented  {fstp dword [edi+0x4], st0})
                    unimplemented  {fstp dword [edi+0x4], st0}
                    top += 1
                case 0x1f
                    sub_4eb7e0(ecx_23, edi_3[0xc])
                    float var_70_13 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                    unimplemented  {fstp dword [ebp-0x6c], st0}
                    unimplemented  {fld st0, dword [edi+0x8]}
                    unimplemented  {fadd dword [ebp-0x6c]}
                    edi_3[2] = fconvert.s(unimplemented  {fstp dword [edi+0x8], st0})
                    unimplemented  {fstp dword [edi+0x8], st0}
                    top += 1
                case 0x20
                    sub_4eb7e0(ecx_23, edi_3[0xc])
                    float var_70_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                    unimplemented  {fstp dword [ebp-0x6c], st0}
                    unimplemented  {fld st0, dword [ebp-0x6c]}
                    unimplemented  {fadd dword [esi+0x29c]}
                    *(esi_5 i+ 0x29c) = fconvert.s(unimplemented  {fstp dword [esi+0x29c], st0})
                    unimplemented  {fstp dword [esi+0x29c], st0}
                    top += 1
                case 0x21
                    sub_4eb7e0(ecx_23, edi_3[0xc])
                    float var_70_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                    unimplemented  {fstp dword [ebp-0x6c], st0}
                    unimplemented  {fld st0, dword [esi+0x2a0]}
                    unimplemented  {fadd dword [ebp-0x6c]}
                    *(esi_5 i+ 0x2a0) = fconvert.s(unimplemented  {fstp dword [esi+0x2a0], st0})
                    unimplemented  {fstp dword [esi+0x2a0], st0}
                    top += 1
                case 0x22
                    sub_4eb7e0(ecx_23, edi_3[0xc])
                    float var_70_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                    unimplemented  {fstp dword [ebp-0x6c], st0}
                    unimplemented  {fld st0, dword [esi+0x2a4]}
                    unimplemented  {fadd dword [ebp-0x6c]}
                    *(esi_5 i+ 0x2a4) = fconvert.s(unimplemented  {fstp dword [esi+0x2a4], st0})
                    unimplemented  {fstp dword [esi+0x2a4], st0}
                    top += 1
                case 0x23
                    sub_4eb7e0(ecx_23, edi_3[0xc])
                    float var_70_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                    unimplemented  {fstp dword [ebp-0x6c], st0}
                    unimplemented  {fld st0, dword [edi+0xc]}
                    unimplemented  {fadd dword [ebp-0x6c]}
                    edi_3[3] = fconvert.s(unimplemented  {fstp dword [edi+0xc], st0})
                    unimplemented  {fstp dword [edi+0xc], st0}
                    top += 1
                case 0x24
                    sub_4eb7e0(ecx_23, edi_3[0xc])
                    float var_70_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                    unimplemented  {fstp dword [ebp-0x6c], st0}
                    unimplemented  {fld st0, dword [edi+0x10]}
                    unimplemented  {fadd dword [ebp-0x6c]}
                    edi_3[4] = fconvert.s(unimplemented  {fstp dword [edi+0x10], st0})
                    unimplemented  {fstp dword [edi+0x10], st0}
                    top += 1
                case 0x25
                    sub_4eb7e0(ecx_23, edi_3[0xc])
                    float var_70_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                    unimplemented  {fstp dword [ebp-0x6c], st0}
                    unimplemented  {fld st0, dword [edi+0x14]}
                    unimplemented  {fadd dword [ebp-0x6c]}
                    edi_3[5] = fconvert.s(unimplemented  {fstp dword [edi+0x14], st0})
                    unimplemented  {fstp dword [edi+0x14], st0}
                    top += 1
                case 0x2d
                    int32_t ecx_35 = sub_4eb7e0(ecx_23, edi_3[0xc])
                    float var_70_14 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                    unimplemented  {fstp dword [ebp-0x6c], st0}
                    unimplemented  {fld st0, dword [ebp-0x6c]}
                    int32_t var_150_34 = ecx_35
                    float var_150_35 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_4f4130(var_150_35)
                    unimplemented  {call 0x4f4130}
                    unimplemented  {fadd dword [edi+0x24]}
                    edi_3[9] = fconvert.s(unimplemented  {fstp dword [edi+0x24], st0})
                    unimplemented  {fstp dword [edi+0x24], st0}
                    top += 1
                case 0x2f
                    float* eax_62 = sub_4ed7d0()
                    int32_t edx_45 = eax_62[1]
                    int32_t esi_12 = eax_62[2]
                    ebx_3 = ebx i+ 0x28c
                    arg2[6] = *eax_62
                    arg2[7] = edx_45
                    arg2[8] = esi_12
                    edi_3 = arg2
                    esi_5 = var_78
            
            ecx_37 = ecx_2
            i = i_1 i+ 1
            i_1 = i
        while (i s< ecx_37[0x42])
    
    __builtin_memcpy(esi_5 i+ 0x2a8, &data_be4c5c, 0x20)
    int32_t* result = sub_466320(**(var_78 i+ 0x2e4))
    
    if (*(*(var_78 i+ 0x2dc) * 0x134 + *result + 0xd9) != 0)
        result = *(var_78 i+ 0x2e0)
        float (* esi_18)[0x8]
        
        if (result == 0)
            esi_18 = *(var_78 i+ 0x2e4) + 0x2c
        else
            void var_13c
            result = sub_4eefe0(&var_13c, result)
            __builtin_memcpy(&var_bc, result, 0x20)
            esi_18 = &var_bc
        
        __builtin_memcpy(esi_5 i+ 0x2a8, esi_18, 0x20)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
