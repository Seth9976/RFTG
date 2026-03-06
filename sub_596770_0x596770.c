// 函数名称: sub_596770
// 虚拟地址: 0x596770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_596770(int32_t arg1, void* arg2, int32_t arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* esi_1 = arg5 + 0x30
    void var_e8
    void* edi = &var_e8
    int16_t* edx = arg2 + 0x60
    void* var_120 = &var_e8
    void* var_118 = esi_1
    int16_t* var_11c = edx
    int32_t i_2 = 8
    int32_t i
    
    do
        int16_t eax_3 = edx[-0x28]
        int32_t eax_7
        
        if (eax_3 != 0 || edx[-0x20] != eax_3 || edx[-0x18] != eax_3 || edx[-0x10] != eax_3
                || edx[-8] != eax_3 || *edx != eax_3 || edx[8] != eax_3)
            int32_t eax_9 = sx.d(edx[-0x20]) * zx.d(*(esi_1 - 0x20))
            int32_t ecx_3 = sx.d(*edx) * zx.d(*esi_1)
            int32_t edi_3 = (ecx_3 + eax_9) * 0x8a9
            int32_t eax_11 = eax_9 * 0xc3f + edi_3
            int32_t ebx_2 = edi_3 - ecx_3 * 0x1d8f
            int32_t ecx_6 = sx.d(edx[-0x30]) * zx.d(*(esi_1 - 0x30))
            int32_t eax_14 = sx.d(edx[-0x10]) * zx.d(*(esi_1 - 0x10))
            int32_t edi_6 = (eax_14 + ecx_6) << 0xc
            int32_t ecx_8 = (ecx_6 - eax_14) << 0xc
            int32_t eax_19 = sx.d(edx[8]) * zx.d(*(esi_1 + 8))
            int32_t ecx_12 = sx.d(edx[-8]) * zx.d(*(esi_1 - 8))
            int32_t edx_2 = sx.d(edx[-0x18]) * zx.d(*(esi_1 - 0x18))
            int32_t esi_3 = zx.d(*(esi_1 - 0x28)) * sx.d(eax_3)
            int32_t edi_11 = ecx_12 + esi_3
            int32_t ebx_3 = eax_19 + edx_2
            int32_t edi_16 = (edi_11 + ebx_3) * 0x12d0
            int32_t edi_17 = edi_16 - (eax_19 + esi_3) * 0xe65
            int32_t ebx_7 = edi_16 - (ecx_12 + edx_2) * 0x2901
            int32_t edi_21 = ebx_3 * 0xffffe09e
            int32_t edi_23 = edi_11 * 0xfffff9c3
            int32_t esi_6 = esi_3 * 0x1805 + edi_23 + edi_17
            int32_t edx_5 = edx_2 * 0x312a + edi_21 + ebx_7
            int32_t ecx_15 = ecx_12 * 0x20da + edi_23 + ebx_7
            edi = var_120
            int32_t eax_22 = eax_19 * 0x4c7 + edi_17 + edi_21
            *(edi - 0x20) = (esi_6 + eax_11 + edi_6 + 0x200) s>> 0xa
            *(edi + 0xc0) = (eax_11 + edi_6 + 0x200 - esi_6) s>> 0xa
            *(edi + 0xa0) = (ecx_8 + ebx_2 + 0x200 - edx_5) s>> 0xa
            *(edi + 0x80) = (ecx_8 - ebx_2 + 0x200 - ecx_15) s>> 0xa
            *(edi + 0x20) = (ecx_8 - ebx_2 + 0x200 + ecx_15) s>> 0xa
            esi_1 = var_118
            *(edi + 0x40) = (edi_6 - eax_11 + 0x200 + eax_22) s>> 0xa
            edx = var_11c
            *edi = (ecx_8 + ebx_2 + 0x200 + edx_5) s>> 0xa
            eax_7 = (edi_6 - eax_11 + 0x200 - eax_22) s>> 0xa
        else
            eax_7 = sx.d(edx[-0x30]) * zx.d(*(esi_1 - 0x30)) * 4
            *(edi + 0xc0) = eax_7
            *(edi + 0xa0) = eax_7
            *(edi + 0x80) = eax_7
            *(edi + 0x40) = eax_7
            *(edi + 0x20) = eax_7
            *edi = eax_7
            *(edi - 0x20) = eax_7
        
        *(edi + 0x60) = eax_7
        edx = &edx[1]
        esi_1 += 1
        edi += 4
        i = i_2
        i_2 -= 1
        var_11c = edx
        var_118 = esi_1
        var_120 = edi
    while (i != 1)
    void var_f0
    void* esi_12 = &var_f0
    void* var_12c = &var_f0
    void* var_11c_1 = arg4 + 1
    int32_t i_3 = 8
    int32_t result
    int32_t i_1
    
    do
        int32_t eax_28 = *(esi_12 - 0x10)
        int32_t ecx_22 = *esi_12
        int32_t ebx_14 = *(esi_12 - 8)
        int32_t edx_13 = (ecx_22 + eax_28) * 0x8a9
        int32_t edi_26 = edx_13 - ecx_22 * 0x1d8f
        int32_t ecx_24 = *(esi_12 - 0x18)
        int32_t edx_14 = edx_13 + eax_28 * 0xc3f
        int32_t eax_31 = (ebx_14 + ecx_24) << 0xc
        int32_t ecx_26 = (ecx_24 - ebx_14) << 0xc
        int32_t eax_33 = *(esi_12 + 4)
        int32_t ecx_28 = *(esi_12 - 4)
        int32_t edx_16 = *(esi_12 - 0xc)
        int32_t esi_13 = *(esi_12 - 0x14)
        int32_t edi_27 = ecx_28 + esi_13
        int32_t ebx_16 = eax_33 + edx_16
        int32_t edi_32 = (edi_27 + ebx_16) * 0x12d0
        int32_t edi_33 = edi_32 - (eax_33 + esi_13) * 0xe65
        int32_t ebx_20 = edi_32 - (ecx_28 + edx_16) * 0x2901
        int32_t edi_37 = ebx_16 * 0xffffe09e
        int32_t edi_39 = edi_27 * 0xfffff9c3
        int32_t eax_36 = eax_33 * 0x4c7 + edi_33 + edi_37
        int32_t esi_16 = esi_13 * 0x1805 + edi_39 + edi_33
        int32_t ecx_31 = ecx_28 * 0x20da + edi_39 + ebx_20
        int32_t ebx_22 = (eax_31 + edx_14 + 0x1010000 + esi_16) s>> 0x11
        int32_t var_130_2 = edx_16 * 0x312a + edi_37 + ebx_20
        int32_t edx_19
        
        if (ebx_22 u<= 0xff)
            edx_19.b = ebx_22.b
        else if (ebx_22 s< 0)
            edx_19.b = 0
        else if (ebx_22 s<= 0xff)
            edx_19.b = ebx_22.b
        else
            edx_19.b = 0xff
        
        void* ebx_23 = var_11c_1
        int32_t edi_44 = (eax_31 + edx_14 + 0x1010000 - esi_16) s>> 0x11
        *(ebx_23 - 1) = edx_19.b
        
        if (edi_44 u<= 0xff)
            edx_19.b = edi_44.b
        else if (edi_44 s< 0)
            edx_19.b = 0
        else if (edi_44 s<= 0xff)
            edx_19.b = edi_44.b
        else
            edx_19.b = 0xff
        
        *(ebx_23 + 6) = edx_19.b
        int32_t edx_21 = (ecx_26 + edi_26 + 0x1010000 + var_130_2) s>> 0x11
        
        if (edx_21 u<= 0xff)
            ebx_23 = var_11c_1
        else if (edx_21 s< 0)
            edx_21.b = 0
        else if (edx_21 s<= 0xff)
            ebx_23 = var_11c_1
        else
            edx_21.b = 0xff
        
        int32_t eax_40 = (ecx_26 + edi_26 + 0x1010000 - var_130_2) s>> 0x11
        *ebx_23 = edx_21.b
        
        if (eax_40 u> 0xff)
            if (eax_40 s< 0)
                eax_40.b = 0
            else if (eax_40 s> 0xff)
                eax_40.b = 0xff
        
        *(ebx_23 + 5) = eax_40.b
        int32_t eax_42 = (ecx_26 - edi_26 + 0x1010000 + ecx_31) s>> 0x11
        
        if (eax_42 u> 0xff)
            if (eax_42 s< 0)
                eax_42.b = 0
            else if (eax_42 s> 0xff)
                eax_42.b = 0xff
        
        int32_t ecx_35 = (ecx_26 - edi_26 + 0x1010000 - ecx_31) s>> 0x11
        *(ebx_23 + 1) = eax_42.b
        
        if (ecx_35 u> 0xff)
            if (ecx_35 s< 0)
                ecx_35.b = 0
            else if (ecx_35 s> 0xff)
                ecx_35.b = 0xff
        
        *(ebx_23 + 4) = ecx_35.b
        result = (eax_31 - edx_14 + 0x1010000 + eax_36) s>> 0x11
        
        if (result u> 0xff)
            if (result s< 0)
                result.b = 0
            else if (result s> 0xff)
                result.b = 0xff
        
        int32_t ecx_38 = (eax_31 - edx_14 + 0x1010000 - eax_36) s>> 0x11
        *(ebx_23 + 2) = result.b
        
        if (ecx_38 u> 0xff)
            if (ecx_38 s< 0)
                ecx_38.b = 0
            else if (ecx_38 s> 0xff)
                ecx_38.b = 0xff
        
        *(ebx_23 + 3) = ecx_38.b
        esi_12 = var_12c + 0x20
        i_1 = i_3
        i_3 -= 1
        var_12c = esi_12
        var_11c_1 = ebx_23 + arg3
    while (i_1 != 1)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
