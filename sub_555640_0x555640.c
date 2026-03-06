// 函数名称: sub_555640
// 虚拟地址: 0x555640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_555640(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68eb68
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char* var_20
    char* eax_5 = *sub_51f490(&var_20, arg2, arg1, &var_20)
    
    if (eax_5 == 0)
        eax_5 = &data_83f3d3
    
    char* var_34_1 = eax_5
    char* var_14
    sub_4c4a50(&var_14, "%s.mp3")
    var_8_1.b = 3
    char* eax_6 = var_20
    
    if (eax_6 != 0 && *eax_6 != 0)
        void* eax_8 = sub_4c4060(&var_20)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_8 + 0xc) + 0x10
            sub_4f4430(eax_8, sub_4f4380(esi_2), esi_2)
    
    int32_t var_34_3 = 0x3078700
    char* var_1c
    sub_4c4a50(&var_1c, "%s/ExternalCode/lame/lame.exe")
    var_8_1.b = 4
    char* const eax_11 = var_14
    
    if (eax_11 == 0)
        eax_11 = &data_83f3d3
    
    char* const var_34_4 = eax_11
    sub_5a9d3d()
    char* const eax_12 = var_14
    
    if (eax_12 == 0)
        eax_12 = &data_83f3d3
    
    sub_4ffc50(eax_12)
    char* arg_4
    char* const eax_13 = arg_4
    
    if (eax_13 == 0)
        eax_13 = &data_83f3d3
    
    char* const var_34_6 = eax_13
    sub_4c5680("converting to mp3: %s")
    char* eax_14 = var_14
    char* edx = &data_83f3d3
    
    if (eax_14 != 0)
        edx = eax_14
    
    char* const ecx_1 = arg_4
    
    if (ecx_1 == 0)
        ecx_1 = &data_83f3d3
    
    char* const eax_15 = var_1c
    
    if (eax_15 == 0)
        eax_15 = &data_83f3d3
    
    char* var_34_7 = edx
    char* const var_38 = ecx_1
    char* const var_3c_2 = eax_15
    char* var_18
    sub_4c4a50(&var_18, ""%s" "%s" "%s"")
    var_8_1.b = 5
    char* const eax_16 = var_18
    
    if (eax_16 == 0)
        eax_16 = &data_83f3d3
    
    sub_500590(eax_16)
    char* eax_17 = var_14
    
    if (eax_17 == 0)
        eax_17 = &data_83f3d3
    
    int32_t* eax_18 = sub_5a898b(eax_17, "rb")
    
    if (eax_18 != 0)
        sub_5a9831(eax_18, nullptr, FILE_END)
        void* eax_39 = sub_5a9a41(eax_18)
        sub_5a9831(eax_18, nullptr, FILE_BEGIN)
        
        if (eax_39 != 0)
            arg2[4] = 5
            arg2[5] = eax_39
            int128_t* eax_42 = sub_4cce80(eax_39)
            int32_t ecx_8 = arg2[5]
            arg2[6] = eax_42
            
            if (sub_5a9cf0(eax_42, ecx_8, 1, eax_18) != 1)
                sub_5a8c61(eax_18)
                char* eax_44 = var_14
                
                if (eax_44 == 0)
                    eax_44 = &data_83f3d3
                
                char* var_34_18 = eax_44
                sub_5a9d3d()
                var_8_1.b = 4
                sub_4c43d0(&var_18)
                var_8_1.b = 3
                sub_4c43d0(&var_1c)
                var_8_1.b = 0
                sub_4c43d0(&var_14)
                int32_t var_8_3 = 0xffffffff
                sub_4c43d0(&arg_4)
                int32_t* eax_45
                eax_45.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_45
            
            arg2[1] = 0
            arg2[2] = 0
            *arg2 = 0
            arg2[3] = 0
            sub_5a8c61(eax_18)
            char* eax_46 = var_14
            
            if (eax_46 == 0)
                eax_46 = &data_83f3d3
            
            char* var_34_19 = eax_46
            sub_5a9d3d()
            var_8_1.b = 4
            sub_4c43d0(&var_18)
            var_8_1.b = 3
            sub_4c43d0(&var_1c)
            var_8_1.b = 0
            sub_4c43d0(&var_14)
            int32_t var_8_4 = 0xffffffff
            sub_4c43d0(&arg_4)
            int32_t* eax_47
            eax_47.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_47
        
        sub_5a8c61(eax_18)
        char* eax_40 = var_14
        
        if (eax_40 == 0)
            eax_40 = &data_83f3d3
        
        char* var_34_15 = eax_40
        sub_5a9d3d()
    else
        char* const eax_19 = arg_4
        
        if (eax_19 == 0)
            eax_19 = &data_83f3d3
        
        char* const var_34_9 = eax_19
        sub_4c5680("failed to convert to mp3: %s")
    
    var_8_1.b = 4
    char* eax_20 = var_18
    
    if (eax_20 != 0 && *eax_20 != 0)
        void* eax_22 = sub_4c4060(&var_18)
        int32_t temp1_1 = *(eax_22 + 4)
        *(eax_22 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_5 = *(eax_22 + 0xc) + 0x10
            sub_4f4430(eax_22, sub_4f4380(esi_5), esi_5)
    
    var_8_1.b = 3
    char* eax_25 = var_1c
    
    if (eax_25 != 0 && *eax_25 != 0)
        void* eax_27 = sub_4c4060(&var_1c)
        int32_t temp2_1 = *(eax_27 + 4)
        *(eax_27 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_7 = *(eax_27 + 0xc) + 0x10
            sub_4f4430(eax_27, sub_4f4380(esi_7), esi_7)
    
    var_8_1.b = 0
    char* eax_30 = var_14
    
    if (eax_30 != 0 && *eax_30 != 0)
        void* eax_32 = sub_4c4060(&var_14)
        int32_t temp3_1 = *(eax_32 + 4)
        *(eax_32 + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_9 = *(eax_32 + 0xc) + 0x10
            sub_4f4430(eax_32, sub_4f4380(esi_9), esi_9)
    
    int32_t var_8_2 = 0xffffffff
    void* eax_35 = arg_4
    
    if (eax_35 != 0 && *eax_35 != 0)
        eax_35 = sub_4c4060(&arg_4)
        int32_t temp4_1 = *(eax_35 + 4)
        *(eax_35 + 4) -= 1
        
        if (temp4_1 == 1)
            int32_t esi_11 = *(eax_35 + 0xc) + 0x10
            sub_4f4430(eax_35, sub_4f4380(esi_11), esi_11)
    
    eax_35.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_35
}
