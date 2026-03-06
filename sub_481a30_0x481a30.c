// 函数名称: sub_481a30
// 虚拟地址: 0x481a30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_481a30(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_699082
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t var_b4
    int32_t eax_2 = __security_cookie ^ &var_b4
    int32_t __saved_edi
    int32_t var_c4 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_307c16c
    
    if ((data_31668c0 & 1) == 0)
        data_31668c0.d |= 1
        int32_t var_c_1 = 0
        data_31668bc = sub_4f5220(esi, "btnTimer")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_31668c0 & 2) == 0)
        data_31668c0.d |= 2
        int32_t var_c_3 = 1
        data_31668b8 = sub_4f5220(esi, "btnBack")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_31668c0 & 4) == 0)
        data_31668c0.d |= 4
        int32_t var_c_5 = 2
        data_31668b4 = sub_4f5220(esi, "btnStart")
        int32_t var_c_6 = 0xffffffff
    
    if ((data_31668c0 & 8) == 0)
        data_31668c0.d |= 8
        int32_t var_c_7 = 3
        data_31668b0 = sub_4f5220(esi, "btnCreate")
        int32_t var_c_8 = 0xffffffff
    
    if ((data_31668c0 & 0x10) == 0)
        data_31668c0.d |= 0x10
        int32_t var_c_9 = 4
        data_31668ac = sub_4f5220(esi, "btnJoin")
        int32_t var_c_10 = 0xffffffff
    
    if ((data_31668c0 & 0x20) == 0)
        data_31668c0.d |= 0x20
        int32_t var_c_11 = 5
        data_31668a8 = sub_4f5220(esi, "btnLeave")
        int32_t var_c_12 = 0xffffffff
    
    if ((data_31668c0 & 0x40) == 0)
        data_31668c0.d |= 0x40
        int32_t var_c_13 = 6
        data_31668a4 = sub_4f5220(esi, "btnAccept")
        int32_t var_c_14 = 0xffffffff
    
    if ((data_31668c0 & 0x80) == 0)
        data_31668c0.d |= 0x80
        int32_t var_c_15 = 7
        data_31668a0 = sub_4f5220(esi, "btnDecline")
        int32_t var_c_16 = 0xffffffff
    
    if ((data_31668c0.d & 0x100) == 0)
        data_31668c0.d |= 0x100
        int32_t var_c_17 = 8
        data_316689c = sub_4f5220(esi, "btnToggleAdv2P")
        int32_t var_c_18 = 0xffffffff
    
    if ((data_31668c0.d & 0x200) == 0)
        data_31668c0.d |= 0x200
        int32_t var_c_19 = 9
        data_3166898 = sub_4f5220(esi, "btnToggleGoals")
        int32_t var_c_20 = 0xffffffff
    
    if ((data_31668c0.d & 0x400) == 0)
        data_31668c0.d |= 0x400
        int32_t var_c_21 = 0xa
        data_3166894 = sub_4f5220(esi, "btnToggleTakeovers")
        int32_t var_c_22 = 0xffffffff
    
    if ((data_31668c0.d & 0x800) == 0)
        data_31668c0.d |= 0x800
        int32_t var_c_23 = 0xb
        data_3166890 = sub_4f5220(esi, "btnToggleRvIScenario")
        int32_t var_c_24 = 0xffffffff
    
    if ((data_31668c0.d & 0x1000) == 0)
        data_31668c0.d |= 0x1000
        int32_t var_c_25 = 0xc
        data_316688c = sub_4f5220(esi, "btnTutorial")
        int32_t var_c_26 = 0xffffffff
    
    sub_407670()
    void* eax_18 = sub_40c7a0(&data_307cd0c)
    sub_4075c0()
    
    if (arg1 == data_31668bc)
        int32_t eax_20 = *(eax_18 + 0x8c)
        
        if (eax_20 == 2)
            *(eax_18 + 0x8c) = 1
        else if (eax_20 != 1)
            int32_t eax_21 = neg.d(eax_20)
            *(eax_18 + 0x8c) = (sbb.d(eax_21, eax_21, eax_20 != 0) & 0xfffffffe) + 2
        else
            *(eax_18 + 0x8c) = 0
    else if (arg1 != data_31668b8)
        if (arg1 == data_316688c)
            int32_t var_b0
            __builtin_memset(&var_b0, 0, 0x20)
            int128_t var_90[0x2]
            sub_5abfc0(&var_90, 0, 0x70)
            int32_t var_70_1 = 2
            int32_t var_54_1 = 2
            int32_t var_6c_1 = 1
            int32_t var_60_1 = 1
            int32_t var_50_1 = 0
            int32_t var_48_1 = 0
            int32_t var_3c_1 = 0
            char var_2c_1 = 1
            char var_29_1 = 0
            int32_t var_64_1 = 0
            sub_4819b0(0xffffffff, &var_b0)
            data_30d6f38 = 0
        else if (arg1 == data_31668b4)
            if (data_307d080 != 0)
                sub_4c5870("dlg.style == STYLE_SINGLEPLAYER", &data_83f3d3, "..\code\RftGVR.cpp", 
                    0x12df, "VRCreateGameClick")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            *(eax_18 + 0x40) = 2
            sub_408a40()
            sub_4819b0(0xffffffff, data_27e7a54 + 0x54)
            data_30d6f38 = 0
        else if (arg1 == data_31668b0)
            void* edx_2 = data_307ca58
            data_30d6f38 = edx_2
            *(eax_18 + 0x40) = 2
            uint32_t eax_26 = data_307d080
            int32_t var_cc_14
            void* var_c8_3
            int32_t ecx_5
            
            if (eax_26 != 1)
                if (eax_26 != 2)
                    sub_4c5870("Halt", &data_83f3d3, "..\code\RftGVR.cpp", 0x12f5, "VRCreateGameClick")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                edx_2 = data_27e7a40
                var_c8_3 = eax_18
                *(eax_18 + 0x48) = 1
                ecx_5 = *(edx_2 + 0x28)
                var_cc_14 = 0xf425d
            else
                void* ecx_4 = data_27e7a40
                eax_26 = data_27e7a54 + 0xe4
                var_c8_3 = eax_26
                *(eax_18 + 0x48) = 0
                ecx_5 = *(ecx_4 + 0x28)
                var_cc_14 = 0xf425c
            
            sub_4c75d0(eax_26, edx_2, ecx_5, 0x90, var_cc_14, var_c8_3)
            sub_408a40()
            data_30d6f38 = data_307ca58
        else
            int32_t var_cc_15
            void* var_c8_4
            void* eax_30
            int32_t* edx_3
            
            if (arg1 == data_31668ac)
                eax_30 = sub_40c6f0(&data_307d084)
                
                if (*(eax_30 + 0x1dc) != 1)
                    data_30d6f38 = data_307ca58
                else
                    edx_3 = &var_b4
                    var_c8_4 = &var_b4
                    var_cc_15 = 0xf4261
                label_48206e:
                    uint32_t eax_36 = data_27e7a40
                    var_b4 = *(eax_30 + 0x1d4)
                    sub_4c75d0(eax_36, edx_3, *(eax_36 + 0x28), 4, var_cc_15, var_c8_4)
                    sub_405420(&data_307d084)
                    data_30d6f38 = data_307ca58
            else if (arg1 == data_31668a8)
                uint32_t edx_4 = *(sub_40c6f0(&data_307d084) + 0x1d4)
                int32_t ecx_7 = *(data_27e7a40 + 0x28)
                var_b4 = edx_4
                sub_4c75d0(&var_b4, edx_4, ecx_7, 4, 0xf4262, &var_b4)
                sub_405420(&data_307d084)
                data_30d6f38 = data_307c550
            else if (arg1 != data_31668a4)
                if (arg1 == data_31668a0)
                    eax_30 = sub_40c6f0(&data_307d084)
                    edx_3 = &var_b4
                    var_c8_4 = &var_b4
                    var_cc_15 = 0xf4260
                    goto label_48206e
                
                if (arg1 == data_316689c)
                    *(eax_18 + 0x84) = *(eax_18 + 0x84) == 0
                else
                    int32_t eax_19
                    
                    if (arg1 == data_3166898)
                        eax_19.b = *(eax_18 + 0x85) == 0
                        *(eax_18 + 0x85) = eax_19.b
                    else if (arg1 != data_3166890)
                        if (arg1 == data_3166894)
                            eax_19.b = *(eax_18 + 0x86) == 0
                            *(eax_18 + 0x86) = eax_19.b
                            
                            if (eax_19.b == 1)
                                *(eax_18 + 0x44) = 0
                    else if (*(eax_18 + 0x44) == 2)
                        *(eax_18 + 0x44) = 0
                    else
                        *(eax_18 + 0x44) = 2
                        *(eax_18 + 0x84) = 0
                        *(eax_18 + 0x68) = 0
                        *(eax_18 + 0x74) = 0
            else
                void* eax_33 = sub_40c6f0(&data_307d084)
                void* edx_6 = data_27e7a40
                uint32_t eax_34 = *(eax_33 + 0x1d4)
                int32_t ecx_8 = *(edx_6 + 0x28)
                var_b4 = eax_34
                sub_4c75d0(eax_34, edx_6, ecx_8, 4, 0xf425f, &var_b4)
                data_30d6f38 = data_307ca58
    else if (data_30d7278 != 0)
        data_30d6f38 = data_307ca58
    else
        data_30d6f38 = data_307c76c
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_b4)
    return 0
}
