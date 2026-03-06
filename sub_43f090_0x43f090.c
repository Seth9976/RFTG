// 函数名称: sub_43f090
// 虚拟地址: 0x43f090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_43f090(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6938fa
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx
    char* edx
    
    if ((data_31659f0 & 1) == 0)
        data_31659f0.d |= 1
        int32_t var_8_1 = 0
        char const* const var_34_1 = "img_vp_pool"
        int32_t eax_4
        eax_4, ecx, edx = sub_510710(data_307ca78, edx)
        data_31659ec = eax_4
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31659f0 & 2) == 0)
        data_31659f0.d |= 2
        int32_t var_8_3 = 1
        char const* const var_34_2 = "txt_vp_pool_count"
        int32_t eax_6
        eax_6, ecx, edx = sub_510710(data_307ca78, edx)
        data_31659e8 = eax_6
        int32_t var_8_4 = 0xffffffff
    
    if ((data_31659f0 & 4) == 0)
        data_31659f0.d |= 4
        int32_t var_8_5 = 2
        char const* const var_34_3 = "deck"
        int32_t eax_8
        eax_8, ecx, edx = sub_510710(data_307ca78, edx)
        data_31659e4 = eax_8
        int32_t var_8_6 = 0xffffffff
    
    if ((data_31659f0 & 8) == 0)
        data_31659f0.d |= 8
        int32_t var_8_7 = 3
        char const* const var_34_4 = "discard"
        int32_t eax_10
        eax_10, ecx, edx = sub_510710(data_307ca78, edx)
        data_31659e0 = eax_10
        int32_t var_8_8 = 0xffffffff
    
    if ((data_31659f0 & 0x10) == 0)
        data_31659f0.d |= 0x10
        int32_t var_8_9 = 4
        char const* const var_34_5 = "deckCount"
        int32_t eax_12
        eax_12, ecx, edx = sub_510710(data_307ca78, edx)
        data_31659dc = eax_12
        int32_t var_8_10 = 0xffffffff
    
    if ((data_31659f0 & 0x20) == 0)
        data_31659f0.d |= 0x20
        int32_t var_8_11 = 5
        char const* const var_34_6 = "discardCount"
        int32_t eax_14
        eax_14, ecx = sub_510710(data_307ca78, edx)
        data_31659d8 = eax_14
        int32_t var_8_12 = 0xffffffff
    
    if (*(data_27e7a40 + 0x2c4960) == 0)
        int128_t* eax_18 = sub_50c830(data_31659ec, arg1, sub_510b30(ecx, arg1))
        int32_t edi_1 = data_31659e8
        int32_t ecx_3 = *(eax_18 + 0x5c) + 1
        *(eax_18 + 0x64) = ecx_3
        *(eax_18 + 0x68) = 1
        int32_t eax_19 = sub_510b30(ecx_3, arg1)
        int128_t* eax_21 = sub_50c830(edi_1, arg1, eax_19)
        int32_t edi_2 = data_31659e4
        *(eax_21 + 0x64) = *(eax_21 + 0x5c) + 1
        *(eax_21 + 0x68) = 1
        int128_t* eax_24 = sub_50c830(edi_2, arg1, sub_510b30(eax_19, arg1))
        int32_t edi_3 = data_31659e0
        int32_t ecx_7 = *(eax_24 + 0x5c) + 1
        *(eax_24 + 0x64) = ecx_7
        *(eax_24 + 0x68) = 1
        int32_t eax_25 = sub_510b30(ecx_7, arg1)
        int128_t* eax_27 = sub_50c830(edi_3, arg1, eax_25)
        int32_t edi_4 = data_31659dc
        *(eax_27 + 0x64) = *(eax_27 + 0x5c) + 1
        *(eax_27 + 0x68) = 1
        int128_t* eax_30 = sub_50c830(edi_4, arg1, sub_510b30(eax_25, arg1))
        int32_t edi_5 = data_31659d8
        int32_t ecx_11 = *(eax_30 + 0x5c) + 1
        *(eax_30 + 0x64) = ecx_11
        *(eax_30 + 0x68) = 1
        int128_t* eax_33 = sub_50c830(edi_5, arg1, sub_510b30(ecx_11, arg1))
        *(eax_33 + 0x64) = *(eax_33 + 0x5c) + 1
        *(eax_33 + 0x68) = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_33
    
    if ((data_31659f0 & 0x40) == 0)
        data_31659f0.d |= 0x40
        int32_t var_8_13 = 6
        data_31659d4 = sub_4f5220(data_307cacc, "txt_count")
        int32_t var_8_14 = 0xffffffff
    
    int128_t* eax_38 = sub_50c830(data_31659ec, arg1, sub_510b30(ecx, arg1))
    int32_t edi_7 = data_31659e8
    int32_t ecx_17 = *(eax_38 + 0x5c) + 1
    *(eax_38 + 0x64) = ecx_17
    *(eax_38 + 0x68) = 0
    int128_t* eax_41 = sub_50c830(edi_7, arg1, sub_510b30(ecx_17, arg1))
    *(eax_41 + 0x64) = *(eax_41 + 0x5c) + 1
    *(eax_41 + 0x68) = 0
    int32_t eax_43 = sub_510860(data_31659e8)
    int32_t ecx_19
    ecx_19.b = data_c02118 s<= 0
    int32_t var_8_15 = 7
    char* var_18
    char* eax_47 = *sub_4c4ab0(&var_18)
    char* var_14 = &data_83f3d3
    
    if (eax_47 != 0)
        var_14 = eax_47
    
    char* var_1c = data_31659d4
    int32_t eax_48
    int32_t ecx_21
    eax_48, ecx_21 = sub_4fc3d0(&data_be1cb8, eax_43)
    int128_t* eax_49 = sub_4f6e90(var_1c, eax_48, &data_83f3d3)
    *(eax_49 + 0x64) = *eax_49 + 1
    sub_4c4590(var_14)
    *(eax_49 + 0x151) = 1
    int32_t var_8_16 = 0xffffffff
    char* eax_53 = var_18
    
    if (eax_53 != 0 && *eax_53 != 0)
        void* eax_55 = sub_4c4060(&var_18)
        int32_t temp0_1 = *(eax_55 + 4)
        *(eax_55 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_7 = *(eax_55 + 0xc) + 0x10
            ecx_21 = sub_4f4430(eax_55, sub_4f4380(esi_7), esi_7)
    
    int128_t* eax_60 = sub_50c830(data_31659e4, arg1, sub_510b30(ecx_21, arg1))
    int32_t edi_13 = data_31659e0
    int32_t ecx_25 = *(eax_60 + 0x5c) + 1
    *(eax_60 + 0x64) = ecx_25
    *(eax_60 + 0x68) = 0
    int32_t eax_61 = sub_510b30(ecx_25, arg1)
    int128_t* eax_63 = sub_50c830(edi_13, arg1, eax_61)
    int32_t edi_14 = data_31659dc
    *(eax_63 + 0x64) = *(eax_63 + 0x5c) + 1
    *(eax_63 + 0x68) = 0
    int128_t* eax_66 = sub_50c830(edi_14, arg1, sub_510b30(eax_61, arg1))
    int32_t edi_15 = data_31659d8
    int32_t ecx_29 = *(eax_66 + 0x5c) + 1
    *(eax_66 + 0x64) = ecx_29
    *(eax_66 + 0x68) = 0
    int128_t* eax_69 = sub_50c830(edi_15, arg1, sub_510b30(ecx_29, arg1))
    *(eax_69 + 0x64) = *(eax_69 + 0x5c) + 1
    *(eax_69 + 0x68) = 0
    void* eax_70 = sub_418a10()
    int32_t eax_72 = sub_510860(data_31659dc)
    sub_4248a0(eax_70)
    int32_t var_8_17 = 8
    char* eax_74 = *sub_4c4ab0(&var_14)
    var_18 = &data_83f3d3
    
    if (eax_74 != 0)
        var_18 = eax_74
    
    int128_t* eax_76 = sub_4f6e90(data_31659d4, sub_4fc3d0(&data_be1cb8, eax_72), &data_83f3d3)
    *(eax_76 + 0x64) = *eax_76 + 1
    sub_4c4590(var_18)
    *(eax_76 + 0x151) = 1
    int32_t var_8_18 = 0xffffffff
    char* eax_80 = var_14
    
    if (eax_80 != 0 && *eax_80 != 0)
        void* eax_82 = sub_4c4060(&var_14)
        int32_t temp1_1 = *(eax_82 + 4)
        *(eax_82 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_14 = *(eax_82 + 0xc) + 0x10
            sub_4f4430(eax_82, sub_4f4380(esi_14), esi_14)
    
    int32_t eax_86 = sub_510860(data_31659d8)
    int32_t ecx_32
    ecx_32.b = data_c020d4 s<= 0
    int32_t var_8_19 = 9
    char* eax_90 = *sub_4c4ab0(&var_1c)
    var_18 = &data_83f3d3
    
    if (eax_90 != 0)
        var_18 = eax_90
    
    int128_t* eax_92 = sub_4f6e90(data_31659d4, sub_4fc3d0(&data_be1cb8, eax_86), &data_83f3d3)
    char* eax_93 = var_18
    *(eax_92 + 0x64) = *eax_92 + 1
    sub_4c4590(eax_93)
    *(eax_92 + 0x151) = 1
    int32_t var_8_20 = 0xffffffff
    void* eax_94 = var_1c
    
    if (eax_94 != 0 && *eax_94 != 0)
        eax_94 = sub_4c4060(&var_1c)
        int32_t temp2_1 = *(eax_94 + 4)
        *(eax_94 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_20 = *(eax_94 + 0xc) + 0x10
            eax_94 = sub_4f4430(eax_94, sub_4f4380(esi_20), esi_20)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_94
}
