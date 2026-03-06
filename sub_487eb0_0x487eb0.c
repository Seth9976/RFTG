// 函数名称: sub_487eb0
// 虚拟地址: 0x487eb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_487eb0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_692544
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_40 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_27e7a40
    
    if (*(eax_3 + 0x2c4960) == 0)
        void* eax_4 = sub_4fc3d0(&data_be1cb8, arg1)
        *(eax_4 + 8) = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    void* edi = *(eax_3 + 0x548)
    bool cond:0 = *(edi + 0x2c07b) == 0
    char* var_1c = 0xffffffff
    char* var_20 = 0xffffffff
    void* ebx = 0xffffffff
    int32_t var_28 = 0xffffffff
    char var_11 = 0
    char* var_24
    void* var_18
    int128_t** edx
    
    if (not(cond:0))
        int32_t* var_44_1 = &var_18
        int32_t* var_48_1 = &var_1c
        int32_t var_2c
        char eax_6
        int32_t* ecx
        eax_6, edx = sub_42b5a0(&var_2c, edx, ecx, &var_24)
        
        if (eax_6 == 0)
            sub_4c5870("takeoverActive", &data_83f3d3, "..\code\RftGVR.cpp", 0x1885, "UITakeoverUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        char* ebx_1 = var_1c
        var_18 = *(edi + 0x2c080)
        char* eax_9 = *(edi + 0x2c090)
        var_11 = 1
        
        if (eax_9 == 0xffffffff)
            eax_9, edx = sub_42b7d0(eax_9, edx, var_24, var_2c)
        
        var_1c = eax_9
        int32_t eax_10 = *(edi + 0x2c088)
        
        if (eax_10 != 0)
            void* eax_11
            eax_11, edx = sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, eax_10)
            char* edi_1 = *(edi + 0x2c094)
            var_28 = *(eax_11 + 0x7c)
            
            if (edi_1 == 0xffffffff)
                char* ecx_7 = var_24
                char* var_44_3 = ecx_7
                char* eax_13
                eax_13, edx = sub_42b8b0(ecx_7, ebx_1)
                var_20 = eax_13
            else
                var_20 = edi_1
        
        ebx = var_18
    
    int32_t* edi_2 = data_307c760
    
    if ((data_3165788 & 1) == 0)
        data_3165788.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_14
        eax_14, edx = sub_4f5220(edi_2, "img_OffenseAvatar")
        data_3165784 = eax_14
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165788 & 2) == 0)
        data_3165788.d |= 2
        int32_t var_8_3 = 1
        int32_t eax_15
        eax_15, edx = sub_4f5220(edi_2, "txt_OffenseName")
        data_3165780 = eax_15
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3165788 & 4) == 0)
        data_3165788.d |= 4
        int32_t var_8_5 = 2
        int32_t eax_16
        eax_16, edx = sub_4f5220(edi_2, "img_DefenseAvatar")
        data_316577c = eax_16
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3165788 & 8) == 0)
        data_3165788.d |= 8
        int32_t var_8_7 = 3
        int32_t eax_17
        eax_17, edx = sub_4f5220(edi_2, "txt_DefenseName")
        data_3165778 = eax_17
        int32_t var_8_8 = 0xffffffff
    
    if ((data_3165788 & 0x10) == 0)
        data_3165788.d |= 0x10
        int32_t var_8_9 = 4
        int32_t eax_18
        eax_18, edx = sub_4f5220(edi_2, "txt_OffenseAmount")
        data_3165774 = eax_18
        int32_t var_8_10 = 0xffffffff
    
    if ((data_3165788 & 0x20) == 0)
        data_3165788.d |= 0x20
        int32_t var_8_11 = 5
        int32_t eax_19
        eax_19, edx = sub_4f5220(edi_2, "txt_DefenseAmount")
        data_3165770 = eax_19
        int32_t var_8_12 = 0xffffffff
    
    char edx_11
    int32_t esi_14
    
    if (ebx == 0xffffffff)
        esi_14 = arg1
        int32_t var_44_8 = 1
        sub_4fa4e0(esi_14, data_3165784, edx.b)
        float edx_12 = data_3165780
        int32_t var_4c_3 = 1
        char edx_13 = sub_4fa4e0(esi_14, edx_12, edx_12.b)
        int32_t var_54_1 = 1
        edx_11 = sub_4fa4e0(esi_14, data_3165774, edx_13)
    else
        int32_t esi_3 = sx.d(*(sub_418a10() + ebx * 0x14 + 0x466))
        int32_t eax_21
        char** edx_4
        eax_21, edx_4 = sub_424340()
        int32_t eax_22 = sub_4ba260(eax_21)
        int32_t* var_44_4 = &var_18
        sub_424120(esi_3, edx_4)
        int32_t var_8_13 = 6
        int128_t* eax_25 = sub_4f6e90(data_3165784, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        *(eax_25 + 0x94) = *eax_25 + 1
        *(eax_25 + 0x98) = eax_22
        char* eax_26 = var_18
        var_24 = &data_83f3d3
        
        if (eax_26 != 0)
            var_24 = eax_26
        
        int128_t* eax_28 = sub_4f6e90(data_3165780, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        char* eax_29 = var_24
        *(eax_28 + 0x64) = *eax_28 + 1
        int32_t edx_7 = sub_4c4590(eax_29)
        char* eax_30 = var_1c
        *(eax_28 + 0x151) = 1
        var_8_13.b = 7
        char* eax_32 = *sub_46e4d0(eax_30, edx_7, &var_1c)
        var_24 = &data_83f3d3
        
        if (eax_32 != 0)
            var_24 = eax_32
        
        int32_t* eax_34 = sub_4f6e90(data_3165774, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        eax_34[0x19] = *eax_34 + 1
        char edx_8 = sub_4c4590(var_24)
        *(eax_34 + 0x151) = 1
        var_8_13.b = 6
        char* eax_38 = var_1c
        
        if (eax_38 != 0 && *eax_38 != 0)
            void* eax_40 = sub_4c4060(&var_1c)
            int32_t temp0_1 = *(eax_40 + 4)
            *(eax_40 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_13 = *(eax_40 + 0xc) + 0x10
                edx_8 = sub_4f4430(eax_40, sub_4f4380(esi_13), esi_13)
        
        esi_14 = arg1
        int32_t var_44_6 = 0
        sub_4fa4e0(esi_14, data_3165784, edx_8)
        float edx_9 = data_3165780
        int32_t var_4c_2 = 0
        char edx_10 = sub_4fa4e0(esi_14, edx_9, edx_9.b)
        int32_t var_54 = 0
        edx_11 = sub_4fa4e0(esi_14, data_3165774, edx_10)
        int32_t var_8_14 = 0xffffffff
        void* eax_47 = var_18
        
        if (eax_47 != 0 && *eax_47 != 0)
            void* eax_49 = sub_4c4060(&var_18)
            int32_t temp1_1 = *(eax_49 + 4)
            *(eax_49 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_16 = *(eax_49 + 0xc) + 0x10
                edx_11 = sub_4f4430(eax_49, sub_4f4380(esi_16), esi_16)
                esi_14 = arg1
    
    if (var_28 == 0xffffffff)
        int32_t var_44_12 = 1
        sub_4fa4e0(esi_14, data_316577c, edx_11)
        float edx_18 = data_3165778
        int32_t var_4c_4 = 1
        char edx_19 = sub_4fa4e0(esi_14, edx_18, edx_18.b)
        int32_t var_54_2 = 1
        sub_4fa4e0(esi_14, data_3165770, edx_19)
    else
        int32_t edi_10 = sx.d(*(sub_418a10() + var_28 * 0x14 + 0x464))
        int32_t eax_57
        char** edx_14
        eax_57, edx_14 = sub_424340()
        int32_t eax_58 = sub_4ba260(eax_57)
        char** var_44_9 = &var_1c
        sub_424120(edi_10, edx_14)
        int32_t var_8_15 = 8
        int128_t* eax_61 = sub_4f6e90(data_316577c, sub_4fc3d0(&data_be1cb8, esi_14), &data_83f3d3)
        *(eax_61 + 0x94) = *eax_61 + 1
        *(eax_61 + 0x98) = eax_58
        char* eax_62 = var_1c
        char* var_28_1 = &data_83f3d3
        
        if (eax_62 != 0)
            var_28_1 = eax_62
        
        int128_t* eax_64 = sub_4f6e90(data_3165778, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        *(eax_64 + 0x64) = *eax_64 + 1
        int32_t edx_17 = sub_4c4590(var_28_1)
        char* eax_66 = var_20
        *(eax_64 + 0x151) = 1
        var_8_15.b = 9
        char* eax_68 = *sub_46e4d0(eax_66, edx_17, &var_20)
        char* var_28_2 = &data_83f3d3
        
        if (eax_68 != 0)
            var_28_2 = eax_68
        
        int128_t* eax_70 = sub_4f6e90(data_3165770, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        *(eax_70 + 0x64) = *eax_70 + 1
        sub_4c4590(var_28_2)
        *(eax_70 + 0x151) = 1
        var_8_15.b = 8
        char* eax_74 = var_20
        
        if (eax_74 != 0 && *eax_74 != 0)
            void* eax_76 = sub_4c4060(&var_20)
            int32_t temp2_1 = *(eax_76 + 4)
            *(eax_76 + 4) -= 1
            
            if (temp2_1 == 1)
                int32_t esi_25 = *(eax_76 + 0xc) + 0x10
                sub_4f4430(eax_76, sub_4f4380(esi_25), esi_25)
        
        int32_t var_8_16 = 0xffffffff
        char* eax_79 = var_1c
        
        if (eax_79 != 0 && *eax_79 != 0)
            void* eax_81 = sub_4c4060(&var_1c)
            int32_t temp3_1 = *(eax_81 + 4)
            *(eax_81 + 4) -= 1
            
            if (temp3_1 == 1)
                int32_t esi_27 = *(eax_81 + 0xc) + 0x10
                sub_4f4430(eax_81, sub_4f4380(esi_27), esi_27)
        
        esi_14 = arg1
    
    ebx.b = var_11 == 0
    void* eax_84 = sub_4fc3d0(&data_be1cb8, esi_14)
    *(eax_84 + 8) = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_84
}
