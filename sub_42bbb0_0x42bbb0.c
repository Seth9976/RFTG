// 函数名称: sub_42bbb0
// 虚拟地址: 0x42bbb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __fastcallsub_42bbb0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_697e94
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_bc = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ecx = *(*(data_27e7a40 + 0x548) + 0x60)
    int32_t var_28
    char* var_20
    sub_42bac0(&var_20, &var_28)
    int32_t ecx_1 = *(arg1 + 0x90)
    int32_t esi = *(arg1 + 0x8c)
    int32_t* edi = data_307c760
    
    if ((data_3166598 & 1) == 0)
        data_3166598.d |= 1
        int32_t var_8_1 = 0
        data_3166594 = sub_4f5220(edi, "img_OffenseAvatar")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3166598 & 2) == 0)
        data_3166598.d |= 2
        int32_t var_8_3 = 1
        data_3166590 = sub_4f5220(edi, "txt_OffenseName")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3166598 & 4) == 0)
        data_3166598.d |= 4
        int32_t var_8_5 = 2
        data_316658c = sub_4f5220(edi, "img_DefenseAvatar")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3166598 & 8) == 0)
        data_3166598.d |= 8
        int32_t var_8_7 = 3
        data_3166588 = sub_4f5220(edi, "txt_DefenseName")
        int32_t var_8_8 = 0xffffffff
    
    if ((data_3166598 & 0x10) == 0)
        data_3166598.d |= 0x10
        int32_t var_8_9 = 4
        data_3166584 = sub_4f5220(edi, "txt_OffenseAmount")
        int32_t var_8_10 = 0xffffffff
    
    if ((data_3166598 & 0x20) == 0)
        data_3166598.d |= 0x20
        int32_t var_8_11 = 5
        data_3166580 = sub_4f5220(edi, "txt_DefenseAmount")
        int32_t var_8_12 = 0xffffffff
    
    void* eax_11 = *(data_27e7a40 + 0x548)
    
    if (eax_11 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edi_1 = sx.d(*(*(eax_11 + 0x45844) + esi * 0x14 + 0x466))
    int32_t eax_14
    char** edx_1
    eax_14, edx_1 = sub_424340()
    int32_t eax_15 = sub_4ba260(eax_14)
    char* var_24
    int32_t* var_c0_1 = &var_24
    sub_424120(edi_1, edx_1)
    int32_t var_8_13 = 6
    int128_t* eax_18 = sub_4f6e90(data_3166594, sub_4fc3d0(&data_be1cb8, ecx), &data_83f3d3)
    *(eax_18 + 0x94) = *eax_18 + 1
    *(eax_18 + 0x98) = eax_15
    char* eax_19 = var_24
    char* const var_14 = &data_83f3d3
    
    if (eax_19 != 0)
        var_14 = eax_19
    
    int128_t* eax_21 = sub_4f6e90(data_3166590, sub_4fc3d0(&data_be1cb8, ecx), &data_83f3d3)
    char* const eax_22 = var_14
    *(eax_21 + 0x64) = *eax_21 + 1
    int32_t edx_4 = sub_4c4590(eax_22)
    char* eax_23 = var_20
    *(eax_21 + 0x151) = 1
    var_8_13.b = 7
    char* var_18
    char* eax_25 = *sub_46e4d0(eax_23, edx_4, &var_18)
    var_14 = &data_83f3d3
    
    if (eax_25 != 0)
        var_14 = eax_25
    
    int128_t* eax_27 = sub_4f6e90(data_3166584, sub_4fc3d0(&data_be1cb8, ecx), &data_83f3d3)
    *(eax_27 + 0x64) = *eax_27 + 1
    sub_4c4590(var_14)
    *(eax_27 + 0x151) = 1
    var_8_13.b = 6
    char* eax_31 = var_18
    
    if (eax_31 != 0 && *eax_31 != 0)
        void* eax_33 = sub_4c4060(&var_18)
        int32_t temp0_1 = *(eax_33 + 4)
        *(eax_33 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_10 = *(eax_33 + 0xc) + 0x10
            sub_4f4430(eax_33, sub_4f4380(esi_10), esi_10)
    
    void* eax_36 = *(data_27e7a40 + 0x548)
    
    if (eax_36 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t esi_11 = sx.d(*(*(eax_36 + 0x45844) + ecx_1 * 0x14 + 0x464))
    int32_t eax_39
    char** edx_6
    eax_39, edx_6 = sub_424340()
    int32_t eax_40 = sub_4ba260(eax_39)
    char* const* var_c0_3 = &var_14
    sub_424120(esi_11, edx_6)
    var_8_13.b = 8
    int128_t* eax_43 = sub_4f6e90(data_316658c, sub_4fc3d0(&data_be1cb8, ecx), &data_83f3d3)
    *(eax_43 + 0x94) = *eax_43 + 1
    *(eax_43 + 0x98) = eax_40
    char* const eax_44 = var_14
    var_18 = &data_83f3d3
    
    if (eax_44 != 0)
        var_18 = eax_44
    
    int128_t* eax_46 = sub_4f6e90(data_3166588, sub_4fc3d0(&data_be1cb8, ecx), &data_83f3d3)
    char* eax_47 = var_18
    *(eax_46 + 0x64) = *eax_46 + 1
    int32_t edx_9 = sub_4c4590(eax_47)
    int32_t eax_48 = var_28
    *(eax_46 + 0x151) = 1
    var_8_13.b = 9
    char* eax_50 = *sub_46e4d0(eax_48, edx_9, &var_20)
    var_18 = &data_83f3d3
    
    if (eax_50 != 0)
        var_18 = eax_50
    
    int128_t* eax_52 = sub_4f6e90(data_3166580, sub_4fc3d0(&data_be1cb8, ecx), &data_83f3d3)
    *(eax_52 + 0x64) = *eax_52 + 1
    sub_4c4590(var_18)
    *(eax_52 + 0x151) = 1
    var_8_13.b = 8
    char* eax_56 = var_20
    
    if (eax_56 != 0 && *eax_56 != 0)
        void* eax_58 = sub_4c4060(&var_20)
        int32_t temp1_1 = *(eax_58 + 4)
        *(eax_58 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_21 = *(eax_58 + 0xc) + 0x10
            sub_4f4430(eax_58, sub_4f4380(esi_21), esi_21)
    
    void var_ac
    int32_t eax_61
    int80_t result
    result, eax_61 = sub_40a930(&var_ac)
    float var_c0_6 = fconvert.s(float.t(1))
    void var_6c
    __builtin_memcpy(&var_6c, eax_61, 0x40)
    sub_4f9fe0(ecx, &var_6c)
    var_8_13.b = 6
    char* const eax_63 = var_14
    
    if (eax_63 != 0 && *eax_63 != 0)
        void* eax_65 = sub_4c4060(&var_14)
        int32_t temp2_1 = *(eax_65 + 4)
        *(eax_65 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_24 = *(eax_65 + 0xc) + 0x10
            sub_4f4430(eax_65, sub_4f4380(esi_24), esi_24)
    
    int32_t var_8_14 = 0xffffffff
    char* eax_68 = var_24
    
    if (eax_68 != 0 && *eax_68 != 0)
        void* eax_70 = sub_4c4060(&var_24)
        int32_t temp3_1 = *(eax_70 + 4)
        *(eax_70 + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_26 = *(eax_70 + 0xc) + 0x10
            sub_4f4430(eax_70, sub_4f4380(esi_26), esi_26)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
