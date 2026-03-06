// 函数名称: sub_410310
// 虚拟地址: 0x410310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_410310(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_697831
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_104 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi = arg2
    int32_t var_b0 = esi
    
    if ((data_31664a0 & 1) == 0)
        data_31664a0.d |= 1
        int32_t var_8_1 = 0
        data_316649c = sub_4f5220(data_307c170, "bgPlayer")
    
    if ((data_31664a0 & 2) == 0)
        data_31664a0.d |= 2
        int32_t var_8_2 = 1
        data_3166498 = sub_4f5220(data_307c170, "btnEmpty")
    
    if ((data_31664a0 & 4) == 0)
        data_31664a0.d |= 4
        int32_t var_8_3 = 2
        data_3166494 = sub_4f5220(data_307c170, "btnFrame")
    
    char* const var_98 = &data_83f3d3
    int32_t var_8_4 = 3
    float var_a4 = fconvert.s(float.t(1))
    int32_t* var_9c = nullptr
    void* eax_8
    int32_t ecx_1
    eax_8, ecx_1 = sub_40c7a0(arg1)
    void* ebx = eax_8 + esi * 0xc
    int32_t eax_10 = *(ebx + 0x50)
    
    if (eax_10 u> 3)
        sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x68b, "DrawStartGamePlayer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t var_a0_1
    
    switch (eax_10)
        case 0
            sub_4c4590(&data_83f3d3)
            ecx_1 = data_3166498
            var_a0_1 = ecx_1
        case 1
            if (*(arg1 + 0x374) != 0)
                sub_4075c0()
                int32_t eax_15 = *(arg1 + 0x374)
                
                if ((eax_15 == 1 || eax_15 == 2) && esi == 0)
                    sub_4c4590(data_27e7a54)
                    var_9c = sub_4ba260(*(data_27e7a54 + 0x18))
                    sub_407670()
                    ecx_1 = data_3166494
                else if (eax_15 != 3)
                    sub_4c4590("open")
                    var_a4 = fconvert.s(fconvert.t(0.300000012f))
                    var_9c = data_307c580
                    sub_407670()
                    ecx_1 = data_3166494
                else
                    void* eax_19 = sub_40c6f0(arg1 + 0x378)
                    
                    if (esi s>= *(eax_19 + 0x140))
                        sub_4c4590("open")
                        var_a4 = fconvert.s(fconvert.t(0.300000012f))
                        var_9c = data_307c580
                        sub_407670()
                        ecx_1 = data_3166494
                    else
                        void* edi_5 = esi * 0x50 + eax_19
                        sub_4c4590(edi_5 + 0xc)
                        var_9c = sub_4ba260(*(edi_5 + 0x2c))
                        
                        if (*(edi_5 + 0x30) != 4)
                            sub_407670()
                            ecx_1 = data_3166494
                        else
                            var_a4 = fconvert.s(fconvert.t(0.300000012f))
                            sub_407670()
                            ecx_1 = data_3166494
            else
                if (esi != 0)
                    sub_4c5870("i == 0", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x624, 
                        "DrawStartGamePlayer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                sub_4c4590(data_27e7a54)
                int32_t* eax_14 = sub_4ba260(*(data_27e7a54 + 0x18))
                ecx_1 = data_3166494
                var_9c = eax_14
            
            var_a0_1 = ecx_1
        case 2
            sub_4c4590("AI")
            var_a0_1 = data_3166494
            var_9c = sub_4ba260(*(eax_8 + ((esi * 3 + 0x15) << 2)) + 0xf)
        case 3
            int32_t eax_24 = *(arg1 + 0x374)
            
            if (eax_24 != 2)
                if (eax_24 != 3)
                    sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x67e, 
                        "DrawStartGamePlayer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                sub_4075c0()
                void* eax_30
                int32_t ecx_5
                eax_30, ecx_5 = sub_40c6f0(arg1 + 0x378)
                int32_t eax_31 = sub_4102f0(ecx_5, eax_8, esi)
                
                if (eax_31 == 0xffffffff)
                    sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x66a, 
                        "DrawStartGamePlayer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (eax_31 s>= *(eax_30 + 0x140))
                    sub_4c5870("playerIndex < setup.numPlayers", &data_83f3d3, 
                        "..\code\GameSetupDlg.cpp", 0x66f, "DrawStartGamePlayer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t esi_2 = eax_31 * 0xa
                sub_4c4590(eax_30 + (esi_2 << 3) + 0xc)
                int32_t* eax_36 = sub_4ba260(*(eax_30 + (esi_2 << 3) + 0x2c))
                ecx_1 = data_3166494
                var_9c = eax_36
                var_a0_1 = ecx_1
                
                if (*(eax_30 + (esi_2 << 3) + 0x30) == 4)
                    var_a4 = fconvert.s(fconvert.t(0.300000012f))
                
                sub_407670()
                esi = var_b0
            else
                int32_t eax_25
                eax_25, ecx_1 = sub_4102b0(*(ebx + 0x58))
                
                if (eax_25 != 0xffffffff)
                    sub_4075c0()
                    int32_t edi_12 = eax_25 * 0x3c
                    sub_4c4590(edi_12 + data_27e7a40 + 0x317aec)
                    ecx_1 = data_27e7a40
                    var_a4 = fconvert.s(fconvert.t(0.5f))
                    var_9c = sub_4ba260(*(edi_12 + ecx_1 + 0x317b0c))
                    var_a0_1 = data_3166494
                    sub_407670()
                else
                    *(ebx + 0x50) = 0
                    sub_4c4590(&data_83f3d3)
                    var_a0_1 = data_3166498
    
    int32_t var_108 = ecx_1
    int32_t eax_42
    int80_t st0
    st0, eax_42 = sub_40d010(esi, fconvert.s(fconvert.t(*(arg1 + 4))))
    void var_54
    __builtin_memcpy(&var_54, eax_42, 0x40)
    void* edi_14
    
    if (var_9c == 0)
        edi_14 = arg1
    else
        int32_t eax_43 = data_316649c
        float var_8c
        float var_8c_1 = fconvert.s(fconvert.t(var_8c) * fconvert.t(var_a4))
        edi_14 = arg1
        void var_94
        int32_t var_10c_5 = __builtin_memcpy(&var_94, eax_42, 0x40)
        sub_4f6cb0(data_307c170, eax_43, var_9c, fconvert.s(fconvert.t(*(edi_14 + 4))), nullptr)
    
    char eax_45 = sub_4c44c0(&var_98)
    int32_t* ebx_1 = var_98
    
    if (eax_45 != 0)
        if ((data_31664a0 & 8) == 0)
            data_31664a0.d |= 8
            var_8_4.b = 4
            data_3166490 = sub_4f5220(data_307c170, "txtName")
            var_8_4.b = 3
        
        int32_t var_108_2 = 0
        int32_t ecx_9
        int80_t st0_1
        st0_1, ecx_9 = sub_4f5f30(data_307c170, &var_54, 0, fconvert.s(fconvert.t(*(edi_14 + 4))))
        int32_t* eax_47 = &data_83f3d3
        
        if (ebx_1 != 0)
            eax_47 = ebx_1
        
        int32_t var_10c_8 = ecx_9
        sub_4f50c0(data_307c170, data_3166490, eax_47, fconvert.s(fconvert.t(*(edi_14 + 4))), 0)
    
    unimplemented  {fld st0, dword [edi+0x4]}
    void* ecx_12 = edi_14 + var_b0 * 0x1c
    void* var_10c_10 = ecx_12
    float var_10c_11 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    sub_5055d0(ecx_12 + 0xc0, var_a0_1, ecx_12 + 0xc8, data_307c170, &var_54, var_10c_11, 0)
    
    if ((data_31664a0 & 0x10) == 0)
        data_31664a0.d |= 0x10
        var_8_4.b = 5
        int32_t eax_51 = sub_4f5220(data_307c170, "btn_AIdifficultyEasy")
        int32_t* ecx_14 = data_307c170
        data_315f8f4 = eax_51
        int32_t eax_52 = sub_4f5220(ecx_14, "btn_AIdifficultyMedium")
        int32_t* edx_13 = data_307c170
        data_315f8f8 = eax_52
        data_315f8fc = sub_4f5220(edx_13, "btn_AIdifficultyHard")
        var_8_4.b = 3
    
    unimplemented  {fld st0, dword [edi+0x4]}
    void* var_10c_13 = edi_14 + (var_b0 + 4) * 0x1c + 0xb8
    float var_10c_14 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    void* result = sub_5055d0(edi_14 + (var_b0 + 4) * 0x1c + 0xc0, 
        (&data_315f8f4)[*(eax_8 + ((var_b0 * 3 + 0x15) << 2))], edi_14 + (var_b0 + 4) * 0x1c + 0xc8, 
        data_307c170, &var_54, var_10c_14, 0)
    int32_t var_8_5 = 0xffffffff
    
    if (ebx_1 != 0 && *ebx_1 != 0)
        result = sub_4c4060(&var_98)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_8 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_8), esi_8)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
