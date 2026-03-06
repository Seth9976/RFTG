// 函数名称: sub_44b140
// 虚拟地址: 0x44b140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_44b140(int32_t* arg1)
{
    // 第一条实际指令: float var_64
    float var_64
    int32_t eax_1 = __security_cookie ^ &var_64
    void* eax_3 = *(data_27e7a40 + 0x548)
    float var_2c
    __builtin_memcpy(&var_2c, &arg1[3], 0x20)
    int32_t esi_1 = *(eax_3 + 0xbfac)
    int32_t edx
    
    if (esi_1 == 0)
    label_44b1ae:
        
        if (sub_446520(arg1) != 6)
            goto label_44b1f7
        
        var_64 = fconvert.s(fconvert.t(*data_27e7a40) * fconvert.t(6.0))
        int32_t mxcsr
        int16_t x87control
        long double st0_1
        st0_1, edx = sub_686ea0(mxcsr, x87control, fconvert.t(var_64))
        var_64 = fconvert.s(st0_1)
        var_64 = fconvert.s(fconvert.t(var_64) * fconvert.t(0.02500000037252903)
            + fconvert.t(1.1000000238418579))
        var_2c = fconvert.s(fconvert.t(var_64) * fconvert.t(var_2c))
    else
        if (arg1[0x2b] != esi_1)
            if (*arg1 != 0)
                goto label_44b1ae
            
            int32_t* eax_4 = sub_463f60(eax_3 + 0x43960, esi_1)
            
            if (*eax_4 != 6)
                goto label_44b1ae
            
            int32_t ecx_1 = arg1[0x1f]
            
            if (ecx_1 == eax_4[0x23] || ecx_1 == eax_4[0x24])
                goto label_44b1f7
            
            goto label_44b1ae
        
    label_44b1f7:
        char eax_7
        eax_7, edx = sub_44a330(arg1)
        
        if (eax_7 != 0)
            var_2c = fconvert.s(fconvert.t(var_2c) * fconvert.t(1.1000000238418579))
    
    if (*arg1 != 0)
        sub_4c5870("gfx.type == RFTGGFX_CARD", &data_83f3d3, "..\code\RFTGClient.cpp", 0x51e2, 
            "RFTGVRCardDraw")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    float var_18
    float var_60 = fconvert.s(fconvert.t(var_18) - fconvert.t(data_27e800c))
    float var_14
    float var_5c = fconvert.s(fconvert.t(var_14) - fconvert.t(data_27e8010))
    float var_10
    float var_58 = fconvert.s(fconvert.t(var_10) - fconvert.t(data_27e8014))
    float var_40
    float var_28[0x4]
    sub_405900(&var_40, edx, &var_28)
    float var_4c = var_40
    float var_3c
    float var_38
    var_64 = fconvert.s(fconvert.t(var_3c) * fconvert.t(var_5c)
        + fconvert.t(var_60) * fconvert.t(var_4c) + fconvert.t(var_38) * fconvert.t(var_58))
    long double x87_r7_21 = fconvert.t(var_64)
    long double temp0 = fconvert.t(0f)
    x87_r7_21 - temp0
    float* eax_9
    eax_9.w = (x87_r7_21 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_21, temp0) ? 1 : 0) << 0xa
        | (x87_r7_21 == temp0 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        int32_t eax_10 = sub_445100()
        sub_5a6aba(eax_1 ^ &var_64)
        return eax_10
    
    if (arg1[0x1f] s>= 0x3e8)
        int32_t eax_11 = sub_444f70()
        sub_5a6aba(eax_1 ^ &var_64)
        return eax_11
    
    int32_t eax_12 = arg1[0x17]
    char eax_13
    char eax_14
    
    if (eax_12 == 2 || eax_12 == 0x11)
        eax_13 = sub_44aef0(arg1)
        
        if (eax_13 == 0)
            eax_14 = sub_44afc0()
    
    if ((eax_12 == 2 || eax_12 == 0x11) && (eax_13 != 0 || eax_14 != 0))
        var_64.b = 1
    else
        var_64.b = 0
    
    int32_t eax_15 = sub_44b0c0(arg1)
    int32_t edi_3 = arg1[0x16]
    int32_t eax_16
    
    if (edi_3 != 0xffffffff)
        eax_16 = sub_46b360(edi_3)
    else
        eax_16 = eax_15 | edi_3
    
    float ecx_9 = var_64
    int32_t var_74_1 = eax_15
    int32_t eax_17
    int80_t st0_2
    st0_2, eax_17 = sub_4457c0(eax_16, arg1[0x1f], ecx_9, eax_16, ecx_9)
    sub_5a6aba(eax_1 ^ &var_64)
    return eax_17
}
