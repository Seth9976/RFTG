// 函数名称: sub_648b60
// 虚拟地址: 0x648b60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_648b60(int32_t arg1)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 0x1c)
    int32_t* eax = *(arg1 + 0x1c)
    int32_t var_c = 0
    int32_t var_8 = 0
    int32_t* var_14 = eax
    int32_t* esi = &eax[0x350]
    
    if (eax == 0)
        return 0xffffff7d
    
    if (esi[0x10] == 0)
        var_c = 1
    
    long double x87_r7 = fconvert.t(-80.0)
    long double temp1 = fconvert.t(*(esi + 0x68))
    x87_r7 - temp1
    eax.w = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe | 0x3800
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        *(esi + 0x68) = fconvert.d(x87_r7)
    
    long double x87_r7_1 = fconvert.t(-200.0)
    long double temp2 = fconvert.t(*(esi + 0x68))
    x87_r7_1 - temp2
    eax.w = (x87_r7_1 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp2) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp2 ? 1 : 0) << 0xe | 0x3800
    
    if ((eax:1.b & 0x41) == 0)
        *(esi + 0x68) = fconvert.d(x87_r7_1)
    
    long double x87_r7_2 = float.t(0)
    long double temp3 = fconvert.t(*(esi + 0x78))
    x87_r7_2 - temp3
    eax.w = (x87_r7_2 < temp3 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp3) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp3 ? 1 : 0) << 0xe | 0x3800
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        *(esi + 0x78) = fconvert.d(x87_r7_2)
    
    long double x87_r7_3 = fconvert.t(-99999.0)
    long double temp4 = fconvert.t(*(esi + 0x78))
    x87_r7_3 - temp4
    eax.w = (x87_r7_3 < temp4 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_3, temp4) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp4 ? 1 : 0) << 0xe | 0x3800
    
    if ((eax:1.b & 0x41) == 0)
        *(esi + 0x78) = fconvert.d(x87_r7_3)
    
    void* edi = esi[1]
    
    if (edi == 0)
        return 0xffffff7d
    
    long double x87_r7_4 = fconvert.t(*(esi + 8))
    *esi = 1
    int32_t* ebx = *(arg1 + 0x1c)
    int32_t eax_3 = sub_685f40(x87_r7_4)
    int32_t ecx_2 = *(*(edi + 0x1c) + (eax_3 << 2))
    *ebx = *(*(edi + 0x18) + (eax_3 << 2))
    ebx[1] = ecx_2
    
    if (*var_14 == var_14[1])
        var_8 = 1
    
    int32_t i = 0
    
    if (*(edi + 0x90) s> 0)
        do
            int64_t var_30
            var_30:4.d = *(edi + 0x8c)
            var_30.d = *(edi + 0x88)
            sub_6479c0(arg1, sub_685f40(fconvert.t(*(esi + 8))), var_30, *(*(edi + 0x94) + (i << 2)))
            i += 1
        while (i s< *(edi + 0x90))
    
    *(edi + 0x7c)
    void* edx_4
    int80_t st0
    st0, edx_4 = sub_647af0(arg1, fconvert.d(fconvert.t(*(esi + 0x80))), *(edi + 0x80))
    sub_647c50(*(edi + 0x84), arg1, edx_4)
    int32_t ecx_6 = *(edi + 0x64)
    int32_t edx_5 = *(edi + 0x5c)
    int32_t var_28_3 = 0
    double var_30_1
    var_30_1:4.d = *(edi + 0x6c)
    var_30_1.d = ecx_6
    int32_t var_3c
    var_3c.q = fconvert.d(fconvert.t(*(esi + 8)))
    sub_647e60(arg1, var_3c, edx_5, ecx_6, edx_5, var_30_1.d)
    int32_t ecx_7 = *(edi + 0x64)
    int32_t edx_6 = *(edi + 0x5c)
    int32_t var_28_4 = 1
    var_30_1:4.d = *(edi + 0x6c)
    var_30_1.d = ecx_7
    var_3c.q = fconvert.d(fconvert.t(*(esi + 8)))
    sub_647e60(arg1, var_3c, edx_6, ecx_7, edx_6, var_30_1.d)
    
    if (var_8 == 0)
        int32_t ecx_8 = *(edi + 0x68)
        int32_t edx_7 = *(edi + 0x60)
        int32_t var_28_5 = 2
        var_30_1:4.d = *(edi + 0x6c)
        var_30_1.d = ecx_8
        var_3c.q = fconvert.d(fconvert.t(*(esi + 8)))
        sub_647e60(arg1, var_3c, edx_7, ecx_8, edx_7, var_30_1.d)
        int32_t ecx_9 = *(edi + 0x68)
        int32_t edx_8 = *(edi + 0x60)
        int32_t var_28_6 = 3
        var_30_1:4.d = *(edi + 0x6c)
        var_30_1.d = ecx_9
        var_3c.q = fconvert.d(fconvert.t(*(esi + 8)))
        sub_647e60(arg1, var_3c, edx_8, ecx_9, edx_8, var_30_1.d)
    
    var_30_1:4.d = *(edi + 0x24)
    var_30_1.d = *(edi + 0x20)
    void* eax_20 = &esi[var_c * 8]
    var_3c.q = fconvert.d(fconvert.t(*((var_c << 5) + esi + 0x88)))
    sub_647f10(arg1, var_3c, esi, 0, var_30_1, *(edi + 0x2c))
    int32_t var_28_8 = *(edi + 0x34)
    var_30_1:4.d = *(edi + 0x24)
    var_30_1.d = *(edi + 0x20)
    int32_t var_34_7 = 1
    var_3c.q = fconvert.d(fconvert.t(*(esi + 0xa8)))
    sub_647f10(arg1, var_3c)
    
    if (var_8 == 0)
        int32_t var_28_9 = *(edi + 0x34)
        var_30_1:4.d = *(edi + 0x24)
        var_30_1.d = *(edi + 0x20)
        int32_t var_34_8 = 2
        var_3c.q = fconvert.d(fconvert.t(*(esi + 0xc8)))
        sub_647f10(arg1, var_3c)
        int32_t var_28_10 = *(edi + 0x30)
        var_30_1:4.d = *(edi + 0x24)
        var_30_1.d = *(edi + 0x20)
        var_34_7 = 3
        var_3c.q = fconvert.d(fconvert.t(*(esi + 0xe8)))
        sub_647f10(arg1, var_3c)
    
    var_30_1:4.d = 0
    var_34_7.q = fconvert.d(fconvert.t(*(((var_c + 5) << 5) + esi)))
    sub_648070(*(edi + 0x54), arg1, var_34_7, var_30_1, *(edi + 0x50))
    var_30_1:4.d = 1
    var_34_7.q = fconvert.d(fconvert.t(*(var_14 + 0xe00)))
    sub_648070(*(edi + 0x54), arg1, var_34_7, var_30_1, *(edi + 0x50))
    
    if (var_8 == 0)
        var_30_1:4.d = 2
        var_34_7.q = fconvert.d(fconvert.t(*(var_14 + 0xe20)))
        sub_648070(*(edi + 0x58), arg1, var_34_7, var_30_1, *(edi + 0x50))
        var_30_1:4.d = 3
        var_34_7.q = fconvert.d(fconvert.t(*(var_14 + 0xe40)))
        sub_648070(*(edi + 0x58), arg1, var_34_7, var_30_1, *(edi + 0x50))
    
    long double x87_r6_12 = fconvert.t(*(eax_20 + 0x90))
    int32_t esi_5 = *(edi + 0x28)
    int32_t eax_31 = sub_685f40(x87_r6_12)
    long double x87_r6_13 = x87_r6_12 - float.t(eax_31)
    int32_t* eax_32 = esi_5 + (eax_31 << 2)
    long double x87_r5_1 = float.t(1)
    *(*(*(arg1 + 0x1c) + 0xb24) + 0x20) = fconvert.s(fconvert.t(fconvert.s(
        x87_r6_13 * float.t(eax_32[1]) + (x87_r5_1 - x87_r6_13) * float.t(*eax_32))))
    long double x87_r5_4 = fconvert.t(*(var_14 + 0xdf0))
    int32_t eax_33 = sub_685f40(x87_r5_4)
    long double x87_r5_5 = x87_r5_4 - float.t(eax_33)
    int32_t* eax_34 = *(edi + 0x28) + (eax_33 << 2)
    *(*(*(arg1 + 0x1c) + 0xb28) + 0x20) = fconvert.s(fconvert.t(fconvert.s(x87_r5_5 * float.t(eax_34[1])
        + (x87_r5_1 - x87_r5_5) * float.t(*eax_34))))
    
    if (var_8 == 0)
        long double x87_r5_9 = fconvert.t(*(var_14 + 0xe10))
        int32_t eax_36 = sub_685f40(x87_r5_9)
        long double x87_r5_10 = x87_r5_9 - float.t(eax_36)
        int32_t* eax_37 = *(edi + 0x28) + (eax_36 << 2)
        *(*(*(arg1 + 0x1c) + 0xb2c) + 0x20) = fconvert.s(fconvert.t(fconvert.s(
            x87_r5_10 * float.t(eax_37[1]) + (x87_r5_1 - x87_r5_10) * float.t(*eax_37))))
        long double x87_r5_14 = fconvert.t(*(var_14 + 0xe30))
        int32_t eax_39 = sub_685f40(x87_r5_14)
        long double x87_r5_15 = x87_r5_14 - float.t(eax_39)
        int32_t* eax_40 = *(edi + 0x28) + (eax_39 << 2)
        *(*(*(arg1 + 0x1c) + 0xb30) + 0x20) = fconvert.s(fconvert.t(fconvert.s(
            (x87_r5_1 - x87_r5_15) * float.t(*eax_40) + x87_r5_15 * float.t(eax_40[1]))))
    
    long double x87_r6_21
    
    if (var_c != 0)
        x87_r6_21 = float.t(0)
    else
        x87_r6_21 = fconvert.t(*(var_14 + 0xd50))
    
    int32_t ecx_23 = *(edi + 0x3c)
    int32_t edx_19 = *(edi + 0x4c)
    var_30_1 = fconvert.d(x87_r6_21)
    var_30_1.d = *(edi + 0x38)
    int32_t var_40_1
    var_40_1.q = fconvert.d(fconvert.t(*(eax_20 + 0x98)))
    sub_648200(0, arg1, var_40_1, edx_19, ecx_23, edx_19, ecx_23)
    int32_t ecx_24 = *(edi + 0x38)
    var_30_1 = fconvert.d(float.t(0))
    int32_t edx_20 = *(edi + 0x40)
    var_30_1.d = ecx_24
    var_40_1.q = fconvert.d(fconvert.t(*(var_14 + 0xdf8)))
    void* edx_21 = sub_648200(1, arg1, var_40_1, edx_20, ecx_24, *(edi + 0x4c), edx_20)
    
    if (var_8 == 0)
        int32_t ecx_25 = *(edi + 0x38)
        int32_t edx_22 = *(edi + 0x44)
        var_30_1 = fconvert.d(float.t(0))
        var_30_1.d = ecx_25
        var_40_1.q = fconvert.d(fconvert.t(*(var_14 + 0xe18)))
        sub_648200(2, arg1, var_40_1, edx_22, ecx_25, *(edi + 0x4c), edx_22)
        int32_t ecx_26 = *(edi + 0x38)
        var_30_1 = fconvert.d(float.t(0))
        int32_t edx_23 = *(edi + 0x48)
        var_30_1.d = ecx_26
        var_40_1.q = fconvert.d(fconvert.t(*(var_14 + 0xe38)))
        edx_21 = sub_648200(3, arg1, var_40_1, edx_23, ecx_26, *(edi + 0x4c), edx_23)
    
    void* eax_46 = *(arg1 + 0x1c)
    void* ecx_27 = *(eax_46 + 0xb24)
    *(ecx_27 + 4) = fconvert.s(fconvert.t(*(eax_46 + 0xda8)))
    *(ecx_27 + 8) = fconvert.s(fconvert.t(*(eax_46 + 0xdb0)))
    void* eax_47 = *(arg1 + 0x1c)
    void* ecx_28 = *(eax_47 + 0xb28)
    *(ecx_28 + 4) = fconvert.s(fconvert.t(*(eax_47 + 0xda8)))
    *(ecx_28 + 8) = fconvert.s(fconvert.t(*(eax_47 + 0xdb0)))
    
    if (var_8 == 0)
        void* eax_48 = *(arg1 + 0x1c)
        void* ecx_29 = *(eax_48 + 0xb2c)
        *(ecx_29 + 4) = fconvert.s(fconvert.t(*(eax_48 + 0xda8)))
        *(ecx_29 + 8) = fconvert.s(fconvert.t(*(eax_48 + 0xdb0)))
        void* eax_49 = *(arg1 + 0x1c)
        void* ecx_30 = *(eax_49 + 0xb30)
        *(ecx_30 + 4) = fconvert.s(fconvert.t(*(eax_49 + 0xda8)))
        *(ecx_30 + 8) = fconvert.s(fconvert.t(*(eax_49 + 0xdb0)))
    
    var_30_1 = fconvert.d(fconvert.t(*(var_14 + 0xd48)))
    var_30_1.d = arg1
    sub_648870(*(edi + 0x98), edx_21, var_30_1)
    int32_t eax_51 = var_14[0x359]
    
    if (eax_51 s<= 0)
        void* edi_1 = *(arg1 + 0x1c)
        int32_t eax_52 = sub_685f40(fconvert.t(*(edi_1 + 0xd48)))
        int32_t ecx_32 = *(*(edi_1 + 0xd44) + 4)
        long double x87_r6_40 = fconvert.t(*(edi_1 + 0xd48)) - float.t(eax_52)
        long double x87_r6_41
        
        if (ecx_32 != 0)
            x87_r6_41 = (x87_r6_40 * fconvert.t(*(ecx_32 + (eax_52 << 3) + 8))
                + (float.t(1) - x87_r6_40) * fconvert.t(*(ecx_32 + (eax_52 << 3)))) * float.t(*(arg1 + 4))
        else
            x87_r6_41 = fconvert.t(-1.0)
        
        eax_51 = sub_685f40(x87_r6_41)
    
    *(arg1 + 0x10) = eax_51
    *(arg1 + 0x14) = var_14[0x358]
    *(arg1 + 0xc) = var_14[0x35c]
    int32_t eax_54 = var_14[0x359]
    
    if (eax_54 == 0)
        *(arg1 + 0x18) = 0
    else
        *(arg1 + 0x18) = sub_685f40(float.t(var_14[0x35d]) / float.t(eax_54))
    
    if (var_14[0x357] != 0)
        var_14[0x348] = var_14[0x359]
        var_14[0x349] = var_14[0x358]
        var_14[0x34a] = var_14[0x35c]
        var_14[0x34b] = var_14[0x35d]
        *(var_14 + 0xd30) = fconvert.d(fconvert.t(*(var_14 + 0xd78)))
        *(var_14 + 0xd38) = fconvert.d(fconvert.t(*(var_14 + 0xd68)))
    
    return 0
}
