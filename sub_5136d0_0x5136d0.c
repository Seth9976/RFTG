// 函数名称: sub_5136d0
// 虚拟地址: 0x5136d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_5136d0(char** arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ee11
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_14 = 0
    sub_512fa0(arg4, arg1, arg2)
    int32_t var_8_2 = 0
    int32_t* i_1
    int32_t* i_3 = i_1
    void* ecx_1 = *i_3
    int32_t* i = ecx_1 + 1
    char* arg_14
    void* ecx_2 = ecx_1 + arg_14 + 1
    int32_t var_14_1 = 1
    i_1 = i
    
    if (i s< ecx_2)
        do
            void* edx_1 = i * 9
            
            if (arg3[edx_1 * 2 + 1].b == 0)
                sub_513610(arg4, edx_1, &arg3[edx_1 * 2], i)
                int32_t* i_2 = i_1
                void* ecx_5 = &arg3[i_2 * 0x12]
                int32_t ecx_6
                
                if (*ecx_5 != 2)
                    ecx_6 = 0
                else
                    ecx_6 = *(ecx_5 + 8)
                
                i_2.b = i_2 == &arg_14[*i_3 - ecx_6]
                sub_5132d0(i_2, &i_1, arg3, &i_1, arg4, i_2.b)
                i = i_1
            else
                i += 1
                i_1 = i
        while (i s< &arg_14[*i_3 + 1])
    
    int32_t eax_5 = *i_3
    int128_t* ecx_13
    
    if (eax_5 == 0xffffffff)
        sub_4c42b0(&arg_14, "\tfloat2 uv = arg_uv;\n")
        char** var_30_7 = &arg_14
        int32_t var_8_5 = 3
        ecx_13 = sub_512e60(arg4)
        var_8_5.b = 0
        char* eax_20 = arg_14
        
        if (eax_20 != 0 && *eax_20 != 0)
            void* eax_22 = sub_4c4060(&arg_14)
            int32_t temp0_1 = *(eax_22 + 4)
            *(eax_22 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_9 = *(eax_22 + 0xc) + 0x10
                ecx_13 = sub_4f4430(eax_22, sub_4f4380(esi_9), esi_9)
    else
        void* esi_2 = &arg3[eax_5 * 0x12]
        char** var_38_2 = sub_512670(&arg_14, esi_2)
        int32_t var_8_3 = 1
        int32_t edx_8 = sub_512e60(arg4)
        var_8_3.b = 0
        char* eax_7 = arg_14
        
        if (eax_7 != 0 && *eax_7 != 0)
            void* eax_9 = sub_4c4060(&arg_14)
            int32_t temp1_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_4 = *(eax_9 + 0xc) + 0x10
                edx_8 = sub_4f4430(eax_9, sub_4f4380(esi_4), esi_4)
        
        int32_t* var_30_5 = arg4
        void* var_34_3 = ecx_1
        int32_t* var_38_3 = sub_5124c0(esi_2 + 0x28, edx_8, ecx_1)
        int32_t var_8_4 = 2
        ecx_13 = sub_512e60(arg4)
        var_8_4.b = 0
        char* eax_14 = arg_14
        
        if (eax_14 != 0 && *eax_14 != 0)
            void* eax_16 = sub_4c4060(&arg_14)
            int32_t temp2_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp2_1 == 1)
                int32_t esi_6 = *(eax_16 + 0xc) + 0x10
                ecx_13 = sub_4f4430(eax_16, sub_4f4380(esi_6), esi_6)
    
    sub_513030(ecx_13)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
