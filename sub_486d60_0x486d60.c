// 函数名称: sub_486d60
// 虚拟地址: 0x486d60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_486d60(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69384a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_8c
    int32_t eax_2 = __security_cookie ^ &var_8c
    int32_t __saved_edi
    int32_t var_9c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_6 = data_31659d0
    char* edx
    
    if ((eax_6.b & 1) == 0)
        data_31659d0 = eax_6 | 1
        int32_t var_c_1 = 0
        int32_t eax_8
        eax_8, edx = sub_4f5220(data_307c1b8, "BtnOK")
        data_31659cc = eax_8
        int32_t var_c_2 = 0xffffffff
        eax_6 = data_31659d0
    
    if ((eax_6.b & 2) == 0)
        data_31659d0 = eax_6 | 2
        int32_t var_c_3 = 1
        int32_t eax_10
        eax_10, edx = sub_4f5220(data_307c1b8, "BtnBack")
        data_31659c8 = eax_10
        int32_t var_c_4 = 0xffffffff
        eax_6 = data_31659d0
    
    if ((eax_6.b & 4) == 0)
        data_31659d0 = eax_6 | 4
        int32_t var_c_5 = 2
        int32_t eax_13
        eax_13, edx = sub_4f5220(data_307c1b8, "BtnPaste")
        data_31659c4 = eax_13
        int32_t var_c_6 = 0xffffffff
        eax_6 = data_31659d0
    
    if ((eax_6.b & 8) == 0)
        data_31659d0 = eax_6 | 8
        int32_t var_c_7 = 3
        int32_t eax_15
        eax_15, edx = sub_4f5220(data_307c1b8, "Name")
        data_31659c0 = eax_15
        int32_t var_c_8 = 0xffffffff
        eax_6 = data_31659d0
    
    if (arg2 == data_31659c0)
        if ((eax_6.b & 0x10) == 0)
            data_31659d0 = eax_6 | 0x10
            int32_t var_c_9 = 4
            char const* const var_a0_1 = "players"
            data_31659bc = sub_510710(data_307ca3c, edx)
            int32_t var_c_10 = 0xffffffff
        
        data_3092a04
        int32_t eax_19
        char* edx_3
        eax_19, edx_3 = sub_50eb00(data_31659bc, 0)
        int32_t eax_20 = 0x20
        
        if ((data_31659d0.b & 0x20) == 0)
            data_31659d0 |= 0x20
            int32_t var_c_11 = 5
            char const* const var_a0_2 = "dlgUISub"
            eax_20 = sub_510710(data_307ca78, edx_3)
            data_31659b8 = eax_20
            int32_t var_c_12 = 0xffffffff
        
        float var_70
        float var_4c
        __builtin_memcpy(&var_4c, sub_50faa0(eax_20, eax_19, data_31659b8, &var_70), 0x20)
        var_4c = fconvert.s(fconvert.t(var_4c) * fconvert.t(0.00070999999297782779))
        void var_80
        int32_t* eax_23 = sub_406230(&var_80, &data_8409b4, fconvert.s(fneg(fconvert.t(data_be1ac0))))
        int32_t edx_5 = eax_23[1]
        float var_2c = *eax_23
        int32_t var_28_1 = edx_5
        int32_t var_24_1 = eax_23[2]
        int32_t var_20_1 = eax_23[3]
        float var_48
        sub_405ee0(&var_70, &var_2c, &var_48)
        int32_t var_6c
        int32_t edx_8 = var_6c
        var_48 = var_70
        float var_38
        float var_38_1 = fconvert.s(fconvert.t(var_38) - fconvert.t(0.44499999284744263))
        int32_t var_44_1 = edx_8
        int32_t var_68
        int32_t var_40_1 = var_68
        float var_34
        float var_34_1 = fconvert.s(fconvert.t(var_34) - fconvert.t(0.05000000074505806))
        int32_t var_64
        int32_t var_3c_1 = var_64
        float var_30
        float var_30_1 = fconvert.s(fconvert.t(var_30) + fconvert.t(0.10000000149011612))
        void* eax_27 = &sub_4f6e90(arg2, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)[0x16]
        data_30d72b8 = eax_27
        __builtin_memcpy(0x30d727c, &var_4c, 0x20)
        data_30d729c = 0
        data_30d72a0 = 0x100
        data_30d72b4 = 0
        *(eax_27 + 0x51) = 1
    else if (arg2 == data_31659cc)
        if ((eax_6.b & 0x40) == 0)
            data_31659d0 = eax_6 | 0x40
            int32_t var_c_13 = 6
            char const* const var_a0_5 = "players"
            data_31659b4 = sub_510710(data_307ca3c, edx)
            int32_t var_c_14 = 0xffffffff
        
        data_3092a04
        int32_t eax_31
        char* edx_11
        eax_31, edx_11 = sub_50eb00(data_31659b4, 0)
        
        if ((data_31659d0.b & 0x80) == 0)
            data_31659d0 |= 0x80
            int32_t var_c_15 = 7
            char const* const var_a0_6 = "dlgUISub"
            data_31659b0 = sub_510710(data_307ca78, edx_11)
            int32_t var_c_16 = 0xffffffff
        
        int32_t eax_35 = sub_510860(data_31659b0)
        int128_t* esi_9 = sub_4f6e90(data_31659c0, sub_4fc3d0(&data_be1cb8, eax_35), &data_83f3d3)
        int128_t* eax_37
        eax_37.b = data_27e7a40 != 0
        data_30d6f3c = 0
        char var_89_1 = eax_37.b
        
        if (eax_37.b != 0)
            sub_407670()
        
        esi_9[0x16].d
        sub_40d130()
        
        if (var_89_1 != 0)
            sub_4075c0()
    else if (arg2 == data_31659c4)
        char* const var_88 = &data_83f3d3
        int32_t var_c_17 = 8
        char eax_38
        char* ecx_11
        eax_38, ecx_11 = sub_4c63c0(&var_88)
        char* const edi_4 = var_88
        
        if (eax_38 != 0)
            if ((data_31659d0 & 0x100) == 0)
                data_31659d0 |= 0x100
                var_c_17.b = 9
                ecx_11 = data_307c1b8
                data_31659ac = sub_4f5220(ecx_11, "Name")
                var_c_17.b = 8
            
            int32_t edx_13 = data_31659ac
            int32_t var_a0_8 = edx_13
            int32_t* eax_41 = sub_4fb470(arg1, edx_13)
            int32_t esi_11 = 0
            
            while (true)
                int32_t eax_42
                
                if (edi_4 == 0 || *edi_4 == 0)
                    eax_42 = 0
                else
                    eax_42 = *(sub_4c4060(&var_88) + 8)
                
                if (esi_11 s>= eax_42)
                    break
                
                char* const eax_45 = &data_83f3d3
                
                if (edi_4 != 0)
                    eax_45 = edi_4
                
                ecx_11 = sub_505e40(ecx_11, eax_41, sx.d(eax_45[esi_11]))
                esi_11 += 1
        
        int32_t var_c_18 = 0xffffffff
        
        if (edi_4 != 0 && *edi_4 != 0)
            void* eax_48 = sub_4c4060(&var_88)
            int32_t temp0_1 = *(eax_48 + 4)
            *(eax_48 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_13 = *(eax_48 + 0xc) + 0x10
                sub_4f4430(eax_48, sub_4f4380(esi_13), esi_13)
    else if (arg2 == data_31659c8)
        data_30d6f3c = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_8c)
    return 0
}
