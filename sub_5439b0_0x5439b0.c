// 函数名称: sub_5439b0
// 虚拟地址: 0x5439b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_5439b0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$??$raise_error@Vrounding_error@math@boost@@O@detail@policies@math@boost@@YAXPBD0ABO@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_94 = eax_2
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_3079078 != 0)
        WINDOWPLACEMENT lpwndpl
        lpwndpl.length = 0x2c
        WINDOWPLACEMENT lpwndpl_1
        lpwndpl_1.length = 0x2c
        GetWindowPlacement(data_30785e0, &lpwndpl)
        int32_t edx_1 = GetWindowPlacement(data_3078818, &lpwndpl_1)
        int32_t var_8_1 = 0
        char* var_80
        char* eax_6 = *sub_5368c0(data_3078820, edx_1, &var_80)
        
        if (eax_6 == 0)
            eax_6 = &data_83f3d3
        
        void var_7c
        int32_t edx_2 = sub_4fedb0(eax_6, &var_7c)
        int32_t var_8_2 = 0xffffffff
        char* eax_7 = var_80
        
        if (eax_7 != 0 && *eax_7 != 0)
            void* eax_9 = sub_4c4060(&var_80)
            int32_t temp0_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_2 = *(eax_9 + 0xc) + 0x10
                edx_2 = sub_4f4430(eax_9, sub_4f4380(esi_2), esi_2)
        
        int32_t var_8_3 = 1
        char* eax_14 = *sub_5368c0(data_3078824, edx_2, &var_80)
        
        if (eax_14 == 0)
            eax_14 = &data_83f3d3
        
        int128_t* var_78
        int32_t edx_3 = sub_4fedb0(eax_14, &var_78)
        int32_t var_8_4 = 0xffffffff
        char* eax_15 = var_80
        
        if (eax_15 != 0 && *eax_15 != 0)
            void* eax_17 = sub_4c4060(&var_80)
            int32_t temp1_1 = *(eax_17 + 4)
            *(eax_17 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_4 = *(eax_17 + 0xc) + 0x10
                edx_3 = sub_4f4430(eax_17, sub_4f4380(esi_4), esi_4)
        
        int32_t var_8_5 = 2
        char* var_84
        char* edi_7 = *sub_5368c0(data_3078828, edx_3, &var_84)
        
        if (edi_7 == 0)
            edi_7 = &data_83f3d3
        
        int128_t* var_74
        sub_4fedb0(edi_7, &var_74)
        int32_t var_8_6 = 0xffffffff
        char* eax_22 = var_84
        
        if (eax_22 != 0 && *eax_22 != 0)
            void* eax_24 = sub_4c4060(&var_84)
            int32_t temp2_1 = *(eax_24 + 4)
            *(eax_24 + 4) -= 1
            
            if (temp2_1 == 1)
                int32_t esi_6 = *(eax_24 + 0xc) + 0x10
                sub_4f4430(eax_24, sub_4f4380(esi_6), esi_6)
        
        void* esi_7 = data_30785c8
        *(esi_7 + 0x1c) += 1
        int32_t* ebx_1 = data_315f7c8
        
        if (*(esi_7 + 0x10) == 0)
            sub_504460(esi_7 + 0x10)
        
        int32_t* edi_10 = *(esi_7 + 0x10)
        *(esi_7 + 0x10) = *edi_10
        __builtin_memset(edi_10, 0, 0x14)
        
        if (edi_10 != 0)
            *edi_10 = &data_83f3d3
            edi_10[1] = 0
            edi_10[2] = 0
            edi_10[3] = 0
        
        uint32_t edx_5 = sub_504160(ebx_1, &var_7c, nullptr, edi_10, &var_7c)
        data_315f7c8
        int32_t* var_a0_1 = edi_10
        sub_504620(&data_3079078, edx_5)
        sub_500770(edi_10)
        result = sub_4fecf0(&var_7c, data_315f7c8, nullptr)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
