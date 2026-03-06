// 函数名称: sub_44b380
// 虚拟地址: 0x44b380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_44b380(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_698b9c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    float var_cc
    int32_t eax_2 = __security_cookie ^ &var_cc
    int32_t __saved_edi
    int32_t var_dc = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_6 = *(data_27e7a40 + 0x548)
    float var_60
    __builtin_memcpy(&var_60, &arg1[3], 0x20)
    int32_t esi_1 = *(eax_6 + 0xbfac)
    
    if (esi_1 == 0)
    label_44b41b:
        
        if (sub_446520(arg1) != 6)
            goto label_44b464
        
        var_cc = fconvert.s(fconvert.t(*data_27e7a40) * fconvert.t(6.0))
        int32_t mxcsr
        int16_t x87control
        var_cc = fconvert.s(sub_686ea0(mxcsr, x87control, fconvert.t(var_cc)))
        var_cc = fconvert.s(fconvert.t(var_cc) * fconvert.t(0.02500000037252903)
            + fconvert.t(1.1000000238418579))
        var_60 = fconvert.s(fconvert.t(var_cc) * fconvert.t(var_60))
    else
        if (arg1[0x2b] != esi_1)
            if (*arg1 != 0)
                goto label_44b41b
            
            int32_t* eax_7 = sub_463f60(eax_6 + 0x43960, esi_1)
            
            if (*eax_7 != 6)
                goto label_44b41b
            
            int32_t ecx_1 = arg1[0x1f]
            
            if (ecx_1 == eax_7[0x23] || ecx_1 == eax_7[0x24])
                goto label_44b464
            
            goto label_44b41b
        
    label_44b464:
        
        if (sub_44a330(arg1) != 0)
            var_60 = fconvert.s(fconvert.t(var_60) * fconvert.t(1.1000000238418579))
    
    if (*arg1 != 0)
        sub_4c5870("gfx.type == RFTGGFX_CARD", &data_83f3d3, "..\code\RFTGClient.cpp", 0x520d, 
            "RFTGCardDraw")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    float var_b8 = 0f
    float edx = data_27e7a40
    float var_b4 = 0f
    void* eax_12 = *(edx i+ 0x548)
    
    if (*(eax_12 + 0xbfe4) != 0 && *(eax_12 + 0x43898) == 0 && *(eax_12 + 0xbfe7) == 0
            && *(eax_12 + 0xbfe5) != 0)
        eax_12.b = *(eax_12 + 0xbfd0) == arg1[0x2b]
        
        if (eax_12.b != 0)
            void* eax_13 = *(edx i+ 0x548)
            var_cc = fconvert.s(fconvert.t(*(eax_13 + 0xbfdc)) - fconvert.t(*(eax_13 + 0xbfd4)))
            var_b8 = var_cc
            edx = fconvert.s(fconvert.t(*(eax_13 + 0xbfe0)) - fconvert.t(*(eax_13 + 0xbfd8)))
            var_b4 = edx
    
    float var_b0
    float var_5c[0x10]
    sub_465a20(&var_b0, edx, &var_5c)
    long double x87_r7_15 = float.t(0)
    float var_a8
    long double temp1 = fconvert.t(var_a8)
    x87_r7_15 - temp1
    var_cc = var_b0
    int32_t var_ac
    int32_t var_c8_2 = var_ac
    float eax_15
    eax_15.w = (x87_r7_15 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_15, temp1) ? 1 : 0) << 0xa
        | (x87_r7_15 == temp1 ? 1 : 0) << 0xe
    int32_t ecx_8
    
    if ((eax_15:1.b & 0x41) != 0)
        var_cc = fconvert.s(float.t(1))
        
        if (sub_42f650(arg1) != 0)
            var_cc = fconvert.s(fconvert.t(arg1[0x1e]))
            long double x87_r6_1 = float.t(0)
            var_cc = fconvert.s(fconvert.t(var_cc) - x87_r6_1)
            var_cc = fconvert.s(fconvert.t(var_cc) / fconvert.t(fconvert.s(float.t(1) - x87_r6_1)))
            long double x87_r5_5 = float.t(0)
            long double x87_r4_1 = fconvert.t(var_cc)
            x87_r4_1 - x87_r5_5
            bool p_1 = unimplemented  {test ah, 0x41}
            long double x87_r7_22
            
            if (p_1)
                float.t(1) - x87_r4_1
                bool p_2 = unimplemented  {test ah, 0x41}
                
                if (p_2)
                    long double x87_r3_2 = fconvert.t(2.0)
                    long double x87_r2_1 = fconvert.t(3.0)
                    var_cc = fconvert.s(x87_r5_5 * x87_r5_5 * (x87_r2_1 - x87_r5_5 * x87_r3_2))
                    long double x87_r3_4 = fconvert.t(var_cc)
                    var_cc = fconvert.s(x87_r3_4 * x87_r3_4 * (x87_r2_1 - x87_r3_2 * x87_r3_4))
                    x87_r7_22 = (x87_r6_1 - x87_r4_1) * fconvert.t(var_cc) + x87_r4_1
                else
                    x87_r7_22 = x87_r4_1
            else
                x87_r7_22 = float.t(1)
            
            var_cc = fconvert.s(fconvert.t(fconvert.s(x87_r7_22)))
        
        int32_t eax_18 = arg1[0x17]
        char eax_19
        char eax_20
        
        if (eax_18 == 2 || eax_18 == 0x11)
            eax_19 = sub_44aef0(arg1)
            
            if (eax_19 == 0)
                eax_20 = sub_44afc0()
        
        float var_c0
        
        if ((eax_18 == 2 || eax_18 == 0x11) && (eax_19 != 0 || eax_20 != 0))
            var_c0.b = 1
        else
            var_c0.b = 0
        
        int32_t esi_2 = sub_44b0c0(arg1)
        int32_t* eax_22 = sub_42f650(arg1)
        
        if (eax_22.b != 0)
            esi_2 = 0
        
        int32_t edi_4 = arg1[0x16]
        int32_t eax_23
        
        if (edi_4 != 0xffffffff)
            eax_23 = sub_46b360(edi_4)
        else
            eax_23 = eax_22 | edi_4
        
        float var_f4_1 = var_b4
        sub_444ea0(var_c0, &var_60, arg1[0x1f], fconvert.s(fconvert.t(var_cc)), var_c0, esi_2, eax_23, 
            var_b8, var_b4)
        int32_t eax_25
        int80_t st0_3
        st0_3, eax_25 = sub_431730(&var_60)
        ecx_8 = __builtin_memcpy(&var_60, eax_25, 0x40)
        var_60 = fconvert.s(fconvert.t(var_60) + fconvert.t(var_b8))
        var_5c[0] = fconvert.s(fconvert.t(var_5c[0]) + fconvert.t(var_b4))
        
        if (arg1[0x16] != 0xffffffff)
            var_cc = sub_418a10()
            
            if (sub_445500(arg1[0x1f]).b != 0)
                int32_t edi_5 = arg1[0x16]
                
                if (edi_5 != 0xffffffff)
                    sub_46b360(edi_5)
                
                int32_t eax_30
                int32_t ecx_13
                eax_30, ecx_13 = sub_445560(edi_5, arg1[0x1f])
                int32_t* esi_6 = data_307c104
                
                if ((data_31667fc & 1) == 0)
                    data_31667fc.d |= 1
                    int32_t var_c_1 = 0
                    data_31667f8 = sub_4f5220(esi_6, "PointCover")
                    int32_t var_c_2 = 0xffffffff
                
                if ((data_31667fc & 2) == 0)
                    data_31667fc.d |= 2
                    int32_t var_c_3 = 1
                    data_31667f4 = sub_4f5220(esi_6, "txtPoint")
                    int32_t var_c_4 = 0xffffffff
                
                int32_t var_e8_2 = ecx_13
                sub_4f4b00(esi_6, data_31667f8, fconvert.s(float.t(1)), nullptr, nullptr)
                ecx_8 = sub_4f5120(esi_6, data_31667f4, &var_60, eax_30)
    else
        ecx_8 = sub_444910(&var_60, var_b8, var_b4)
    
    void* result = sub_4eb5a0(ecx_8, arg1[0x2a])
    
    if (result != 0)
        result = sub_4f2850(&data_be4c5c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_cc)
    return result
}
