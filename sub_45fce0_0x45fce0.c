// 函数名称: sub_45fce0
// 虚拟地址: 0x45fce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_45fce0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4 @ esi, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_697b42
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_174
    int32_t eax_2 = __security_cookie ^ &var_174
    int32_t var_17c = arg4
    int32_t __saved_edi
    int32_t var_184 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edi = arg6[0x16]
    int32_t var_16c = arg5
    int32_t esi
    
    if (edi != 0xffffffff)
        esi = sub_46b360(edi)
    else
        esi = arg4 | edi
    
    int32_t eax_7
    int32_t edx
    eax_7, edx = sub_426870(arg6, 0)
    int32_t ecx = arg6[0x1f]
    int32_t edi_1 = eax_7
    arg6[0x29] = edi_1
    int32_t var_138
    sub_45f560(&var_138, edx, ecx)
    int32_t ecx_1 = var_138
    int32_t var_130
    int32_t var_150 = var_130
    int32_t var_124
    int32_t var_144 = var_124
    int32_t var_164 = sub_424cd0(3, var_124, esi)
    void* eax_11 = *(data_27e7a40 + 0x548)
    
    if (eax_11 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_15 = 6
    
    if (sub_49c940(esi, 0x10000, *(eax_11 + 0x45844)) != 0)
        eax_15 = 7
    
    int32_t var_13c = 2
    int32_t ecx_7 = var_164
    int32_t var_140 = eax_15
    int32_t var_168 = eax_15
    
    if (ecx_7 s> eax_15 * 2)
        var_168 = ecx_7 - eax_15
    
    int32_t eax_16
    
    if (edi_1 s>= eax_15)
        edi_1 -= eax_15
        eax_16 = 1
    else
        eax_16 = 0
    
    int32_t var_160 = eax_16
    int32_t* var_190 = &var_140
    var_164 = edi_1
    void var_e0
    int32_t eax_19
    int80_t st0
    st0, eax_19 = sub_4f66d0(&var_e0, arg3, arg2, &var_164, fconvert.s(float.t(1)), &var_140, &var_168)
    void var_60
    __builtin_memcpy(&var_60, eax_19, 0x40)
    int32_t* esi_4 = data_307c758
    int80_t result = sub_4f5f30(esi_4, &var_60, 0, fconvert.s(float.t(1)))
    
    if ((data_3166514 & 1) == 0)
        data_3166514.d |= 1
        int32_t var_c_1 = 0
        data_3166510 = sub_4f5220(esi_4, "img_Glow")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3166514 & 2) == 0)
        data_3166514.d |= 2
        int32_t var_c_3 = 1
        data_316650c = sub_4f5220(esi_4, "img_Takeover")
        int32_t var_c_4 = 0xffffffff
    
    int32_t eax_23
    int32_t ecx_10
    int32_t edx_5
    eax_23, ecx_10, edx_5 = sub_446520(arg6)
    
    if (eax_23 == 3)
        int32_t var_190_5 = ecx_10
        edx_5 = sub_4f4b00(esi_4, data_316650c, fconvert.s(float.t(1)), nullptr, nullptr)
    else if (eax_23 == 4)
        int32_t var_190_3 = ecx_10
        edx_5 = sub_4f4b00(esi_4, data_3166510, fconvert.s(float.t(1)), eax_23 - 4, eax_23 - 4)
    
    void* eax_27 = *(data_27e7a40 + 0x548)
    
    if (eax_27 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_12 = arg6[0x1f] * 5
    void* ebx_2 = *(*(eax_27 + 0x45844) + (ecx_12 << 2) + 0x46c)
    
    if ((data_3166514 & 4) == 0)
        data_3166514.d |= 4
        int32_t var_c_5 = 2
        int32_t eax_30
        eax_30, edx_5 = sub_4f5220(esi_4, "img_Dev")
        data_3166508 = eax_30
        int32_t var_c_6 = 0xffffffff
    
    if ((data_3166514 & 8) == 0)
        data_3166514.d |= 8
        int32_t var_c_7 = 3
        int32_t eax_31
        eax_31, edx_5 = sub_4f5220(esi_4, "img_Halo")
        data_3166504 = eax_31
        int32_t var_c_8 = 0xffffffff
    
    if ((data_3166514 & 0x10) == 0)
        data_3166514.d |= 0x10
        int32_t var_c_9 = 4
        int32_t eax_32
        eax_32, edx_5 = sub_4f5220(esi_4, "img_Planet")
        data_3166500 = eax_32
        int32_t var_c_10 = 0xffffffff
    
    if ((data_3166514 & 0x20) == 0)
        data_3166514.d |= 0x20
        int32_t var_c_11 = 5
        int32_t eax_33
        eax_33, edx_5 = sub_4f5220(esi_4, "txt_Cost")
        data_31664fc = eax_33
        int32_t var_c_12 = 0xffffffff
    
    if ((data_3166514 & 0x40) == 0)
        data_3166514.d |= 0x40
        int32_t var_c_13 = 6
        int32_t eax_34
        eax_34, edx_5 = sub_4f5220(esi_4, "txt_CostMil")
        data_31664f8 = eax_34
        int32_t var_c_14 = 0xffffffff
    
    int32_t var_134
    int32_t eax_47
    
    if (var_134 != 2)
        int32_t var_194_4
        int32_t* var_190_7
        float var_18c_15
        int32_t var_128
        
        if (var_128 != 1)
            int32_t* eax_45
            int32_t ecx_20
            eax_45, ecx_20 = sub_427a90(ebx_2)
            int32_t var_188_5 = 0
            int32_t var_18c_16 = ecx_20
            var_18c_15 = fconvert.s(float.t(1))
            var_190_7 = eax_45
            var_194_4 = data_3166500
        else
            int32_t eax_40 = sx.d(*(ebx_2 + 0xe)) - 1
            
            if (eax_40 u> 4)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1a19, "GetHaloTexture")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* eax_41
            
            switch (eax_40)
                case 0
                    eax_41 = data_307bd2c
                case 1
                    eax_41 = data_307bd20
                case 2
                    eax_41 = data_307bd24
                case 3
                    eax_41 = data_307bd28
                case 4
                    eax_41 = data_307bd30
            
            int32_t var_18c_12 = ecx_12
            int32_t ecx_19 = sub_4f6cb0(esi_4, data_3166504, eax_41, fconvert.s(float.t(1)), nullptr)
            int32_t* eax_42 = data_307ba58
            
            if ((*(ebx_2 + 0x10) & 1) == 0)
                eax_42 = data_307ba54
            
            int32_t var_188_4 = 0
            int32_t var_18c_14 = ecx_19
            var_18c_15 = fconvert.s(float.t(1))
            var_190_7 = eax_42
            var_194_4 = data_3166500
        
        sub_4f6cb0(esi_4, var_194_4, var_190_7, var_18c_15, nullptr)
        eax_47 = data_31664f8
        int32_t var_12c
        
        if (var_12c != 1)
            eax_47 = data_31664fc
    else
        int32_t eax_35 = data_3166508
        void* var_188_3 = &var_60
        int32_t var_18c_10 = ecx_12
        void var_120
        __builtin_memcpy(&var_120, sub_4f62d0(eax_35, fconvert.s(float.t(1)), edx_5), 0x40)
        void* ecx_16 = eax_35 * 0x118 + *sub_4f4890(esi_4)
        result = sub_4f67d0(&var_120, nullptr, *(ecx_16 + 0x68), ecx_16, &data_be1ae0, &var_120, 
            nullptr, nullptr)
        eax_47 = data_31664fc
    
    sub_4f5120(esi_4, eax_47, &var_60, ecx_1)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_174)
    return result
}
