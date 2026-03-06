// 函数名称: sub_484af0
// 虚拟地址: 0x484af0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_484af0(int32_t arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_692c4a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_8c
    int32_t eax_2 = __security_cookie ^ &var_8c
    int32_t __saved_edi
    int32_t var_9c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool cond:0 = (data_3165834 & 1) != 0
    char* const var_88 = arg2
    char* edx
    
    if (not(cond:0))
        data_3165834.d |= 1
        int32_t var_c_1 = 0
        int32_t eax_6
        eax_6, edx = sub_4f5220(data_307c4f8, "BtnBack")
        data_3165830 = eax_6
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165834 & 2) == 0)
        data_3165834.d |= 2
        int32_t var_c_3 = 1
        int32_t eax_7
        eax_7, edx = sub_4f5220(data_307c4f8, "btnGenCode")
        data_316582c = eax_7
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3165834 & 4) == 0)
        data_3165834.d |= 4
        int32_t var_c_5 = 2
        int32_t eax_9
        eax_9, edx = sub_4f5220(data_307c4f8, "btnEnterCode")
        data_3165828 = eax_9
        int32_t var_c_6 = 0xffffffff
    
    if ((data_3165834 & 8) == 0)
        data_3165834.d |= 8
        int32_t var_c_7 = 3
        int32_t eax_10
        eax_10, edx = sub_4f5220(data_307c4f8, "BtnOK")
        data_3165824 = eax_10
        int32_t var_c_8 = 0xffffffff
    
    if ((data_3165834 & 0x10) == 0)
        data_3165834.d |= 0x10
        int32_t var_c_9 = 4
        int32_t eax_11
        eax_11, edx = sub_4f5220(data_307c4f8, "BtnCopy")
        data_3165820 = eax_11
        int32_t var_c_10 = 0xffffffff
    
    if ((data_3165834 & 0x20) == 0)
        data_3165834.d |= 0x20
        int32_t var_c_11 = 5
        int32_t eax_13
        eax_13, edx = sub_4f5220(data_307c4f8, "BtnPaste")
        data_316581c = eax_13
        int32_t var_c_12 = 0xffffffff
    
    if ((data_3165834 & 0x40) == 0)
        data_3165834.d |= 0x40
        int32_t var_c_13 = 6
        int32_t eax_14
        eax_14, edx = sub_4f5220(data_307c4f8, "txtCodeEdit")
        data_3165818 = eax_14
        int32_t var_c_14 = 0xffffffff
    
    if (arg2 == data_3165818)
        if ((data_3165834 & 0x80) == 0)
            data_3165834.d |= 0x80
            int32_t var_c_15 = 7
            char const* const var_a0_1 = "players"
            data_3165814 = sub_510710(data_307ca3c, edx)
            int32_t var_c_16 = 0xffffffff
        
        data_3092a04
        int32_t eax_17
        char* edx_4
        eax_17, edx_4 = sub_50eb00(data_3165814, 0)
        int32_t eax_18 = 0x100
        
        if ((data_3165834.d & 0x100) == 0)
            data_3165834.d |= 0x100
            int32_t var_c_17 = 8
            char const* const var_a0_2 = "dlgUISub"
            eax_18 = sub_510710(data_307ca78, edx_4)
            data_3165810 = eax_18
            int32_t var_c_18 = 0xffffffff
        
        float var_80
        float var_4c
        __builtin_memcpy(&var_4c, sub_50faa0(eax_18, eax_17, data_3165810, &var_80), 0x20)
        var_4c = fconvert.s(fconvert.t(var_4c) * fconvert.t(0.00070999999297782779))
        void var_60
        int32_t* eax_21 = sub_406230(&var_60, &data_8409b4, fconvert.s(fneg(fconvert.t(data_be1ac0))))
        int32_t edx_6 = eax_21[1]
        float var_2c = *eax_21
        int32_t var_28_1 = edx_6
        int32_t var_24_1 = eax_21[2]
        int32_t var_20_1 = eax_21[3]
        float var_48
        sub_405ee0(&var_80, &var_2c, &var_48)
        var_48 = var_80
        float var_38
        float var_38_1 = fconvert.s(fconvert.t(var_38) - fconvert.t(0.44499999284744263))
        int32_t var_7c
        int32_t var_44_1 = var_7c
        int32_t var_78
        int32_t var_40_1 = var_78
        float var_34
        float var_34_1 = fconvert.s(fconvert.t(var_34) - fconvert.t(0.05000000074505806))
        int32_t var_74
        int32_t var_3c_1 = var_74
        float var_30
        float var_30_1 = fconvert.s(fconvert.t(var_30) + fconvert.t(0.10000000149011612))
        int32_t eax_23 = sub_4fc3d0(&data_be1cb8, arg1)
        data_30d72b8 = &sub_4f6e90(var_88, eax_23, &data_83f3d3)[0x16]
        __builtin_memcpy(0x30d727c, &var_4c, 0x20)
        data_30d729c = 0
        data_30d72a0 = 0x100
        data_30d72b4 = 0
    else if (arg2 == data_316582c)
        sub_40d5c0()
        __builtin_strcpy(&data_307cd24, "Generating...")
        data_307cd18 = 1
    else if (arg2 == data_3165828)
        data_307cd18 = 2
        sub_4c4590(&data_83f3d3)
        data_307cd60 = 0
        data_307cd68 = 0
        data_307cdad = 1
    else if (arg2 == data_3165824)
        sub_407670()
        
        if ((data_3165834.d & 0x200) == 0)
            data_3165834.d |= 0x200
            int32_t var_c_19 = 9
            data_316580c = sub_4f5220(data_307c4f8, "txtCodeEdit")
            int32_t var_c_20 = 0xffffffff
        
        int32_t edx_11 = data_316580c
        int32_t var_a0_5 = edx_11
        char* const eax_29 = *sub_4fb470(arg1, edx_11)
        
        if (eax_29 == 0)
            eax_29 = &data_83f3d3
        
        sub_40d510(eax_29)
        sub_4075c0()
        data_307cd18 = 3
        data_307cd34 = 0
    else if (arg2 == data_3165820)
        sub_4c6360()
    else if (arg2 == data_316581c)
        var_88 = &data_83f3d3
        int32_t var_c_21 = 0xa
        char eax_30
        int32_t* ecx_13
        eax_30, ecx_13 = sub_4c63c0(&var_88)
        
        if (eax_30 != 0)
            if ((data_3165834.d & 0x400) == 0)
                data_3165834.d |= 0x400
                var_c_21.b = 0xb
                ecx_13 = data_307c4f8
                data_3165808 = sub_4f5220(ecx_13, "txtCodeEdit")
                var_c_21.b = 0xa
            
            int32_t edx_12 = data_3165808
            int32_t var_a0_7 = edx_12
            void* eax_33 = sub_4fb470(arg1, edx_12)
            char* edi_2 = var_88
            int32_t esi_6 = 0
            
            while (true)
                int32_t eax_34
                
                if (edi_2 == 0 || *edi_2 == 0)
                    eax_34 = 0
                else
                    eax_34 = *(sub_4c4060(&var_88) + 8)
                
                if (esi_6 s>= eax_34)
                    break
                
                char* eax_37 = &data_83f3d3
                
                if (edi_2 != 0)
                    eax_37 = edi_2
                
                ecx_13 = sub_505e40(ecx_13, eax_33, sx.d(eax_37[esi_6]))
                esi_6 += 1
        
        int32_t var_c_22 = 0xffffffff
        sub_4c43d0(&var_88)
    else if (arg2 == data_3165830)
        data_30d6f38 = data_307c620
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_8c)
    return 0
}
