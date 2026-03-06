// 函数名称: sub_459370
// 虚拟地址: 0x459370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_459370(int16_t arg1 @ x87control, float arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_692e06
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_9c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    float eax_4 = *(data_27e7a40 + 0x548)
    long double x87_r7 = fconvert.t(*(eax_4 i+ 0x43940))
    float var_78 = eax_4
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    eax_4.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x44}
    
    if (not(p))
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    char var_89 = 0xff
    int16_t var_8b = 0xb1ff
    float eax_5 = 0xa.d
    float var_84 = eax_5
    char var_8c
    var_8c.d = eax_5 u>> 0x18
    var_8c.d = fconvert.s(float.t(var_8c.d))
    long double x87_r6_2 = fconvert.t(var_8c.d)
    x87_r6_2 - x87_r7
    uint32_t eax_6
    eax_6.w = (x87_r6_2 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    bool p_1 = unimplemented  {test ah, 0x5}
    long double x87_r7_1
    
    if (p_1)
        x87_r7_1 = x87_r7 + fconvert.t(0.5)
    else
        x87_r7_1 = x87_r7 - fconvert.t(0.5)
    
    var_8c.d = sub_685f40(x87_r7_1)
    
    if ((data_3165888 & 1) == 0)
        data_3165888.d |= 1
        int32_t var_c_1 = 0
        data_3165884 = sub_4f5220(data_307c530, "imgRoleGlow")
        int32_t var_c_2 = 0xffffffff
    
    char** esi = data_307bd4c
    
    if (esi == 0)
        esi = sub_50a390(esi + 0x1d)
    else if (esi[1] != 0x1d)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** var_80 = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    char* eax_10 = *esi
    esi[7] = &esi[7][1]
    *eax_10
    int32_t var_c_3 = 1
    int32_t* eax_12 = sub_514bb0()
    int32_t var_c_4 = 0xffffffff
    esi[7] = &esi[7][0xffffffff]
    int32_t* esi_1 = eax_12
    
    if (*(data_27e7a50 + 0x10) == 1)
        int32_t eax_15
        int32_t edx_1
        edx_1:eax_15 = sx.q(var_8c.d * 3)
        esi_1 = nullptr
        var_8c.d = (eax_15 + (edx_1 & 3)) s>> 2
    
    long double x87_r7_2 = float.t(var_8c.d)
    float eax_18 = var_78
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg1)
    var_8c.w = temp0
    long double x87_r7_3 = x87_r7_2 * fconvert.t(*(eax_18 i+ 0x43940))
    var_78 = zx.d(var_8c.w) | 0xc00
    int32_t eax_21 = data_3165884
    int16_t x87control
    int16_t x87status_1
    x87control, x87status_1 = __fldcw_memmem16(var_78.w)
    var_78 = int.d(x87_r7_3)
    var_84:3.b = var_78.b
    int32_t* ecx_4 = data_307c530
    int16_t x87control_1
    int16_t x87status_2
    x87control_1, x87status_2 = __fldcw_memmem16(var_8c.w)
    int32_t* eax_22 = sub_4f5350(eax_21, arg2, ecx_4, arg2)
    float edx_4 = eax_22[1]
    float ecx_5 = *eax_22
    float edx_5 = eax_22[3]
    long double x87_r7_4 = float.t(0)
    float ecx_6 = eax_22[2]
    float var_4c = fconvert.s(x87_r7_4)
    float var_48 = fconvert.s(x87_r7_4)
    long double x87_r7_5 = float.t(1)
    float var_44 = fconvert.s(x87_r7_5)
    float var_40 = fconvert.s(x87_r7_5)
    float var_64 = fconvert.s(fconvert.t(ecx_6) - fconvert.t(ecx_5))
    float eax_24
    int32_t ecx_7
    float edx_6
    eax_24, ecx_7, edx_6 = sub_418560(data_307bd34)
    var_78 = eax_24
    int32_t var_a0_1 = ecx_7
    var_8c.d =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(edx_5) - fconvert.t(edx_4))) / fconvert.t(var_78))
    int16_t x87control_2
    long double st0
    st0, x87control_2 = sub_406680(fconvert.s(fconvert.t(data_be1ac0)))
    int32_t edx_7
    int32_t mxcsr
    long double st0_1
    st0_1, edx_7 = sub_686860(mxcsr, x87control_2, fconvert.t(data_be1ac0))
    var_78 = fconvert.s(st0_1)
    float var_7c_1 = fconvert.s(fconvert.t(var_78))
    long double x87_r6_3 = fconvert.t(0.5)
    var_78 = fconvert.s((fconvert.t(ecx_6) + fconvert.t(ecx_5)) * x87_r6_3)
    float var_74_1 = fconvert.s(x87_r6_3 * (fconvert.t(edx_4) + fconvert.t(edx_5)))
    long double x87_r7_24 = fconvert.t(var_7c_1)
    long double x87_r5_1 = fconvert.t(var_8c.d)
    float var_3c = fconvert.s(x87_r7_24 * x87_r5_1)
    long double x87_r5_3 = fconvert.t(fconvert.s(st0))
    float var_30 = fconvert.s(x87_r5_1 * x87_r5_3)
    long double x87_r5_5 = float.t(0)
    data_307bd34
    float var_24 = fconvert.s(x87_r5_5)
    char var_89_1 = 0
    long double x87_r4_2 = fconvert.t(fconvert.s(fconvert.t(var_64) / fconvert.t(edx_6)))
    int16_t var_8b_1 = 0
    float var_38 = fconvert.s(fneg(x87_r5_3) * x87_r4_2)
    float var_2c = fconvert.s(x87_r7_24 * x87_r4_2)
    float var_20 = fconvert.s(x87_r5_5)
    long double x87_r7_27 = fconvert.t(var_78)
    var_78 = var_84
    float var_34 = fconvert.s(x87_r7_27)
    int32_t var_74_2 = 0.d
    float var_28 = fconvert.s(fconvert.t(var_74_1))
    float var_1c = fconvert.s(float.t(1))
    uint32_t eax_27 = sub_4d9b80(&var_78, edx_7, esi_1, &var_3c, &var_4c, &var_78)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_27
}
