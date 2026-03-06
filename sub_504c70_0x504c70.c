// 函数名称: sub_504c70
// 虚拟地址: 0x504c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_504c70(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f56d
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_14c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx
    int32_t var_150 = edx
    int32_t var_8_1 = 0
    int32_t var_13c
    int32_t* result
    void var_20
    
    if (sub_554e10(&var_13c, sub_5abfc0(&var_13c, 0, 0x128)) != 0)
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
        
        sub_4c4590(*arg1)
        char* edi_1 = *arg1
        int32_t var_138
        
        if (var_138 != 3)
            if (var_138 != 1)
                goto label_504da4
            
            goto label_504d88
        
        if (sub_5551f0(&var_13c) == 0 || var_138 != 1)
        label_504da4:
            sub_500770(result_1)
            int32_t var_8_4 = 2
            int32_t eax_13 = var_13c
            
            if (eax_13 != 0)
                _aligned_free_base(eax_13)
            
            sub_567fd0(&var_20)
            var_13c = 0
            int32_t var_8_5 = 0xffffffff
            sub_567fd0(&var_20)
            result = nullptr
        else
        label_504d88:
            char* var_130
            int32_t var_12c
            
            if (sub_5a9f0b(edi_1, var_130, var_12c) != 0)
                goto label_504da4
            
            if (sub_5551f0(&var_13c) == 0)
                goto label_504da4
            
            if (sub_5049f0(result_1, &var_13c) != 0)
                int32_t var_8_7 = 0xffffffff
                sub_554da0(&var_13c)
                result = result_1
            else
                sub_500770(result_1)
                int32_t var_8_6 = 0xffffffff
                sub_554da0(&var_13c)
                result = nullptr
    else
        int32_t var_8_2 = 1
        int32_t eax_5 = var_13c
        
        if (eax_5 != 0)
            _aligned_free_base(eax_5)
        
        sub_567fd0(&var_20)
        var_13c = 0
        int32_t var_8_3 = 0xffffffff
        sub_567fd0(&var_20)
        result = nullptr
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
