// 函数名称: sub_4596e0
// 虚拟地址: 0x4596e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4596e0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_697c14
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_4c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = *(data_27e7a40 + 0x548)
    long double x87_r7 = fconvert.t(ebx[0x10e24])
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    void* eax_3
    eax_3.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x44}
    
    if (not(p))
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
    
    eax_3.b = 0xff
    int16_t var_3b = 0x6893
    long double x87_r5_1 = float.t(0)
    char var_39 = 0xaf
    char var_39_1 = 0xff
    int16_t var_3b_1 = 0x3a64
    float var_34_1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(ebx[0x10e25]))) - x87_r5_1)
    char var_39_2 = 0xff
    long double x87_r5_4 = float.t(1) - x87_r5_1
    int16_t var_3b_2 = 0xf3ff
    uint32_t var_24 = 0xff.d
    int32_t ecx_1 = 0x70.d
    char var_39_3 = 0xff
    int32_t var_28 = 0xff.d
    int16_t var_3b_3 = 0xb1ff
    int32_t var_2c = ecx_1
    int32_t var_30 = 0xa.d
    long double x87_r4_2 =
        fconvert.t(fconvert.s(fconvert.t(var_34_1) / fconvert.t(fconvert.s(x87_r5_4))))
    x87_r4_2 - x87_r7
    eax_3.w = (x87_r4_2 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_2, x87_r7) ? 1 : 0) << 0xa
        | (x87_r4_2 == x87_r7 ? 1 : 0) << 0xe | 0x2000
    bool p_1 = unimplemented  {test ah, 0x41}
    long double x87_r7_2
    
    if (p_1)
        x87_r4_2 - x87_r7
        eax_3.w = (x87_r4_2 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_2, x87_r7) ? 1 : 0) << 0xa
            | (x87_r4_2 == x87_r7 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_3:1.b & 1) != 0)
            x87_r7_2 = x87_r7 * x87_r5_4 + x87_r5_1
        else
            x87_r7_2 = x87_r5_4
    else
        x87_r7_2 = x87_r5_4
    
    char var_3c_3
    var_3c_3.d = fconvert.s(x87_r7_2)
    int32_t var_50 = ecx_1
    float eax_4 = sub_4658f0(&var_30, &var_2c, fconvert.s(fconvert.t(var_3c_3.d)))
    int32_t ecx_2 = ebx[0x2ffa]
    float var_38_1 = eax_4
    
    if (ecx_2 == 1 || ecx_2 == 3)
        int32_t var_50_2 = ecx_2
        eax_4 = sub_4658f0(&var_28, &var_24, fconvert.s(fconvert.t(var_3c_3.d)))
        var_38_1 = eax_4
    
    var_24 = eax_4 u>> 0x18
    var_24 = fconvert.s(float.t(var_24) * fconvert.t(ebx[0x10e24]))
    long double x87_r7_9 = float.t(0)
    long double x87_r6_8 = fconvert.t(var_24)
    x87_r6_8 - x87_r7_9
    uint32_t eax_5
    eax_5.w = (x87_r6_8 < x87_r7_9 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_8, x87_r7_9) ? 1 : 0) << 0xa
        | (x87_r6_8 == x87_r7_9 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x5}
    long double x87_r7_10
    
    if (p_2)
        x87_r7_10 = x87_r7_9 + fconvert.t(0.5)
    else
        x87_r7_10 = x87_r7_9 - fconvert.t(0.5)
    
    var_3c_3.d = sub_685f40(x87_r7_10)
    
    if ((data_3166530 & 1) == 0)
        data_3166530.d |= 1
        int32_t var_c_1 = 0
        data_316652c = sub_4f5220(data_307c530, "img_EmpireGlow")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3166530 & 2) == 0)
        data_3166530.d |= 2
        int32_t var_c_3 = 1
        data_3161158 = sub_4f5220(data_307c530, "img_EmpireGlowTop")
        int32_t var_c_4 = 0xffffffff
    
    uint32_t esi_2 = data_307bd4c
    
    if (esi_2 == 0)
        esi_2 = sub_50a390(esi_2 + 0x1d)
    else if (*(esi_2 + 4) != 0x1d)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    bool cond:1 = *esi_2 != 0
    var_24 = esi_2
    
    if (not(cond:1))
        sub_5094d0(esi_2, 0, 1)
    
    int32_t* eax_11 = *esi_2
    *(esi_2 + 0x1c) += 1
    *eax_11
    int32_t var_c_5 = 2
    int32_t eax_13 = sub_514bb0()
    int32_t var_c_6 = 0xffffffff
    int32_t edx_2 = data_27e7a50
    *(esi_2 + 0x1c) -= 1
    int32_t var_34_3 = eax_13
    
    if (*(edx_2 + 0x10) != 1)
        eax_13.b = var_3c_3
    else
        int32_t eax_16
        int32_t edx_3
        edx_3:eax_16 = sx.q(var_3c_3.d * 3)
        var_34_3 = 0
        eax_13 = (eax_16 + (edx_3 & 3)) s>> 2
    
    var_38_1:3.b = eax_13.b
    int16_t var_3b_4 = 0
    char var_39_4 = 0
    int32_t* eax_19 = sub_4f6e90(data_316652c, sub_4fc3d0(&data_be1cb8, *ebx), &data_83f3d3)
    int32_t edi_4 = data_316652c
    eax_19[0x22] = *eax_19 + 1
    eax_19[0x24] = 0.d
    eax_19[0x23] = var_38_1
    int32_t* eax_21 = sub_4f6e90(edi_4, sub_4fc3d0(&data_be1cb8, *ebx), &data_83f3d3)
    float edi_6 = data_316652c
    eax_21[0xf] = *eax_21 + 1
    eax_21[0x10] = var_34_3
    void* eax_22
    int32_t ecx_10
    eax_22, ecx_10 = sub_4fc3d0(&data_be1cb8, *ebx)
    int32_t var_50_4 = ecx_10
    float var_50_5 = fconvert.s(float.t(1))
    sub_4f9b40(eax_22, eax_22, arg1, edi_6)
    float var_20_1 = fconvert.s(float.t(1))
    float var_1c = fconvert.s(fconvert.t(-1f))
    int32_t* eax_24 = sub_4f6e90(data_3161158, sub_4fc3d0(&data_be1cb8, *ebx), &data_83f3d3)
    int32_t edi_9 = data_3161158
    eax_24[0x11] = *eax_24 + 1
    eax_24[0x13] = var_1c
    eax_24[0x12] = var_20_1
    int16_t var_3b_5 = 0
    char var_39_5 = 0
    int32_t* eax_26 = sub_4f6e90(edi_9, sub_4fc3d0(&data_be1cb8, *ebx), &data_83f3d3)
    int32_t edx_10 = *eax_26 + 1
    int32_t edi_11 = data_3161158
    eax_26[0x23] = var_38_1
    eax_26[0x24] = 0.d
    eax_26[0x22] = edx_10
    int32_t* eax_28 = sub_4f6e90(edi_11, sub_4fc3d0(&data_be1cb8, *ebx), &data_83f3d3)
    float edi_13 = data_3161158
    int32_t edx_12 = *eax_28 + 1
    eax_28[0x10] = var_34_3
    eax_28[0xf] = edx_12
    void* eax_29
    int32_t ecx_18
    eax_29, ecx_18 = sub_4fc3d0(&data_be1cb8, *ebx)
    int32_t var_50_6 = ecx_18
    float var_50_7 = fconvert.s(float.t(1))
    int128_t* eax_30 = sub_4f9b40(eax_29, eax_29, arg1, edi_13)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_30
}
