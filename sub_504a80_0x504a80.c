// 函数名称: sub_504a80
// 虚拟地址: 0x504a80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_504a80(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f5bd
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_150 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_140
    sub_5abfc0(&var_140, 0, 0x128)
    int32_t var_8_1 = 0
    int32_t var_138 = arg4
    int32_t var_13c = 0
    int32_t var_28 = 1
    int32_t* result
    void var_24
    
    if (sub_5551f0(&var_140) != 0)
        void* esi_1 = data_30785c8
        *(esi_1 + 0x1c) += 1
        
        if (*(esi_1 + 0x10) == 0)
            sub_504460(esi_1 + 0x10)
        
        int32_t* result_1 = *(esi_1 + 0x10)
        *(esi_1 + 0x10) = *result_1
        __builtin_memset(result_1, 0, 0x14)
        
        if (result_1 != 0)
            *result_1 = &data_83f3d3
            result_1[1] = 0
            result_1[2] = 0
            result_1[3] = 0
        
        sub_4c4590(*arg3)
        char* edi_1 = *arg3
        
        if (var_13c != 3)
            if (var_13c != 1)
                goto label_504bc2
            
            goto label_504ba6
        
        if (sub_5551f0(&var_140) == 0 || var_13c != 1)
        label_504bc2:
            sub_500770(result_1)
            int32_t var_8_4 = 2
            int32_t eax_13 = var_140
            
            if (eax_13 != 0)
                _aligned_free_base(eax_13)
            
            sub_567fd0(&var_24)
            var_140 = 0
            int32_t var_8_5 = 0xffffffff
            sub_567fd0(&var_24)
            result = nullptr
        else
        label_504ba6:
            char* var_134
            int32_t var_130
            
            if (sub_5a9f0b(edi_1, var_134, var_130) != 0)
                goto label_504bc2
            
            if (sub_5551f0(&var_140) == 0)
                goto label_504bc2
            
            if (sub_5049f0(result_1, &var_140) != 0)
                int32_t var_8_7 = 0xffffffff
                sub_554da0(&var_140)
                result = result_1
            else
                sub_500770(result_1)
                int32_t var_8_6 = 0xffffffff
                sub_554da0(&var_140)
                result = nullptr
    else
        int32_t var_8_2 = 1
        int32_t eax_5 = var_140
        
        if (eax_5 != 0)
            _aligned_free_base(eax_5)
        
        sub_567fd0(&var_24)
        var_140 = 0
        int32_t var_8_3 = 0xffffffff
        sub_567fd0(&var_24)
        result = nullptr
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
