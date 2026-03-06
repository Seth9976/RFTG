// 函数名称: sub_42c100
// 虚拟地址: 0x42c100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_42c100()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?do_get@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AAVios_base@2@AAHPAUtm@@DD@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_bc = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = *(*(data_27e7a40 + 0x548) + 0x5c)
    int32_t var_2c
    int32_t* var_c0 = &var_2c
    void* var_24
    int32_t* var_c4 = &var_24
    void* var_1c = esi
    void* var_28
    int32_t var_18
    int32_t* ecx
    int128_t** edx
    int32_t ebx
    ebx.b = sub_42b5a0(&var_18, edx, ecx, &var_28)
    int32_t* result = sub_4fc3d0(&data_be1cb8, esi)
    result[2].b = ebx.b == 0
    
    if (ebx.b != 0)
        int32_t* edi_1 = data_307c75c
        int32_t ebx_1
        
        if ((data_316657c & 1) != 0)
            ebx_1 = ebx | 0xffffffff
        else
            data_316657c.d |= 1
            int32_t var_8_1 = 0
            ebx_1 = ebx | 0xffffffff
            data_3166578 = sub_4f5220(edi_1, "img_OffenseAvatar")
            int32_t var_8_2 = ebx_1
        
        if ((data_316657c & 2) == 0)
            data_316657c.d |= 2
            int32_t var_8_3 = 1
            data_3166574 = sub_4f5220(edi_1, "txt_OffenseName")
            int32_t var_8_4 = ebx_1
        
        if ((data_316657c & 4) == 0)
            data_316657c.d |= 4
            int32_t var_8_5 = 2
            data_3166570 = sub_4f5220(edi_1, "img_DefenseAvatar")
            int32_t var_8_6 = ebx_1
        
        if ((data_316657c & 8) == 0)
            data_316657c.d |= 8
            int32_t var_8_7 = 3
            data_316656c = sub_4f5220(edi_1, "txt_DefenseName")
            int32_t var_8_8 = ebx_1
        
        if ((data_316657c & 0x10) == 0)
            data_316657c.d |= 0x10
            int32_t var_8_9 = 4
            data_3166568 = sub_4f5220(edi_1, "txt_OffenseAmount")
            int32_t var_8_10 = ebx_1
        
        if ((data_316657c & 0x20) == 0)
            data_316657c.d |= 0x20
            int32_t var_8_11 = 5
            data_3166564 = sub_4f5220(edi_1, "txt_DefenseAmount")
            int32_t var_8_12 = ebx_1
        
        void* edi_2 = var_28
        char* var_20
        char* const var_14
        
        if (edi_2 == 0)
            sub_4fa770(esi, 2, 1)
        else
            int32_t ebx_2 = var_18
            int32_t eax_13
            char** edx_1
            eax_13, edx_1 = sub_424340()
            var_14 = sub_4ba260(eax_13)
            int32_t* var_c0_1 = &var_20
            int32_t edx_2 = sub_424120(ebx_2, edx_1)
            int32_t var_8_13 = 6
            int32_t eax_18 = *(*(data_27e7a40 + 0x548) + 0x2c090)
            
            if (eax_18 == 0xffffffff)
                eax_18 = sub_42b7d0(eax_18, edx_2, edi_2, ebx_2)
            
            int32_t ebx_4 = data_3166578
            var_18 = eax_18
            int128_t* eax_20 = sub_4f6e90(ebx_4, sub_4fc3d0(&data_be1cb8, esi), &data_83f3d3)
            char* const edx_3 = var_14
            *(eax_20 + 0x94) = *eax_20 + 1
            *(eax_20 + 0x98) = edx_3
            char* eax_21 = var_20
            var_14 = &data_83f3d3
            
            if (eax_21 != 0)
                var_14 = eax_21
            
            int128_t* eax_23 = sub_4f6e90(data_3166574, sub_4fc3d0(&data_be1cb8, var_1c), &data_83f3d3)
            *(eax_23 + 0x64) = *eax_23 + 1
            int32_t edx_4 = sub_4c4590(var_14)
            int32_t eax_27 = var_18
            *(eax_23 + 0x151) = 1
            var_8_13.b = 7
            char* eax_29 = *sub_46e4d0(eax_27, edx_4, &var_14)
            var_18 = &data_83f3d3
            
            if (eax_29 != 0)
                var_18 = eax_29
            
            int128_t* eax_31 = sub_4f6e90(data_3166568, sub_4fc3d0(&data_be1cb8, var_1c), &data_83f3d3)
            int32_t eax_32 = var_18
            *(eax_31 + 0x64) = *eax_31 + 1
            sub_4c4590(eax_32)
            *(eax_31 + 0x151) = 1
            var_8_13.b = 6
            char* const eax_33 = var_14
            
            if (eax_33 != 0 && *eax_33 != 0)
                void* eax_35 = sub_4c4060(&var_14)
                int32_t temp0_1 = *(eax_35 + 4)
                *(eax_35 + 4) -= 1
                
                if (temp0_1 == 1)
                    int32_t esi_9 = *(eax_35 + 0xc) + 0x10
                    sub_4f4430(eax_35, sub_4f4380(esi_9), esi_9)
            
            sub_4fa770(var_1c, 2, 0)
            int32_t var_8_14 = 0xffffffff
            char* eax_38 = var_20
            
            if (eax_38 != 0 && *eax_38 != 0)
                void* eax_40 = sub_4c4060(&var_20)
                int32_t temp1_1 = *(eax_40 + 4)
                *(eax_40 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_11 = *(eax_40 + 0xc) + 0x10
                    sub_4f4430(eax_40, sub_4f4380(esi_11), esi_11)
            
            esi = var_1c
        
        if (var_24 == 0)
            sub_4fa770(esi, 4, 1)
        else
            int32_t edi_8 = var_2c
            int32_t eax_43
            char** edx_6
            eax_43, edx_6 = sub_424340()
            int32_t eax_44 = sub_4ba260(eax_43)
            char** var_c0_5 = &var_20
            sub_424120(edi_8, edx_6)
            int32_t var_8_15 = 8
            void* ecx_8 = data_27e7a40
            char* eax_47 = *(*(ecx_8 + 0x548) + 0x2c094)
            
            if (eax_47 == 0xffffffff)
                void* var_c0_6 = var_28
                eax_47 = sub_42b8b0(ecx_8, var_24)
            
            int32_t edi_9 = data_3166570
            var_14 = eax_47
            int128_t* eax_49 = sub_4f6e90(edi_9, sub_4fc3d0(&data_be1cb8, esi), &data_83f3d3)
            *(eax_49 + 0x94) = *eax_49 + 1
            *(eax_49 + 0x98) = eax_44
            char* eax_50 = var_20
            var_18 = &data_83f3d3
            
            if (eax_50 != 0)
                var_18 = eax_50
            
            int128_t* eax_52 = sub_4f6e90(data_316656c, sub_4fc3d0(&data_be1cb8, var_1c), &data_83f3d3)
            int32_t eax_53 = var_18
            *(eax_52 + 0x64) = *eax_52 + 1
            int32_t edx_11 = sub_4c4590(eax_53)
            char* const eax_54 = var_14
            *(eax_52 + 0x151) = 1
            var_8_15.b = 9
            char* eax_56 = *sub_46e4d0(eax_54, edx_11, &var_14)
            var_18 = &data_83f3d3
            
            if (eax_56 != 0)
                var_18 = eax_56
            
            int128_t* eax_58 = sub_4f6e90(data_3166564, sub_4fc3d0(&data_be1cb8, var_1c), &data_83f3d3)
            *(eax_58 + 0x64) = *eax_58 + 1
            sub_4c4590(var_18)
            *(eax_58 + 0x151) = 1
            var_8_15.b = 8
            char* const eax_62 = var_14
            
            if (eax_62 != 0 && *eax_62 != 0)
                void* eax_64 = sub_4c4060(&var_14)
                int32_t temp2_1 = *(eax_64 + 4)
                *(eax_64 + 4) -= 1
                
                if (temp2_1 == 1)
                    int32_t esi_20 = *(eax_64 + 0xc) + 0x10
                    sub_4f4430(eax_64, sub_4f4380(esi_20), esi_20)
            
            sub_4fa770(var_1c, 4, 0)
            int32_t var_8_16 = 0xffffffff
            char* eax_67 = var_20
            
            if (eax_67 != 0 && *eax_67 != 0)
                void* eax_69 = sub_4c4060(&var_20)
                int32_t temp3_1 = *(eax_69 + 4)
                *(eax_69 + 4) -= 1
                
                if (temp3_1 == 1)
                    int32_t esi_22 = *(eax_69 + 0xc) + 0x10
                    sub_4f4430(eax_69, sub_4f4380(esi_22), esi_22)
            
            esi = var_1c
        
        int32_t var_c0_9
        
        if (var_28 == 0 || var_24 == 0)
            var_c0_9 = 1
        else
            var_c0_9 = 0
        
        sub_4fa770(esi, 8, var_c0_9)
        void var_ac
        int32_t eax_72
        int80_t st0_1
        st0_1, eax_72 = sub_40a930(&var_ac)
        float var_c0_11 = fconvert.s(float.t(1))
        void var_6c
        __builtin_memcpy(&var_6c, eax_72, 0x40)
        result = sub_4f9fe0(var_1c, &var_6c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
