// 函数名称: sub_4cd170
// 虚拟地址: 0x4cd170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t** __convention("regparm")sub_4cd170(int32_t arg1, int32_t*** arg2, uint8_t* arg3, char* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e618
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_70 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    __builtin_memset(arg2, 0, 0x1c)
    void var_1c
    int32_t** eax_3 = zip_open(arg3, 0, &var_1c)
    *arg2 = eax_3
    
    if (eax_3 != 0)
        char* var_18
        sub_51f2c0(eax_3, &var_18, arg4, &var_18)
        char* eax_4 = var_18
        
        if (eax_4 == 0)
            eax_4 = &data_83f3d3
        
        void var_60
        
        if (zip_stat(*arg2, eax_4, 0, &var_60) s>= 0)
            int32_t var_50
            arg2[4] = var_50
            int32_t** eax_11 = *arg2
            int32_t var_48
            arg2[3] = var_48
            int32_t* var_4c
            void** eax_12 = zip_fopen_index(eax_11, var_50, var_4c, 0)
            arg2[1] = eax_12
            
            if (eax_12 != 0)
                int32_t var_8_3 = 0xffffffff
                sub_4c43d0(&var_18)
                int32_t* eax_14
                eax_14.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_14
            
            zip_close(*arg2)
            *arg2 = nullptr
            int32_t var_8_2 = 0xffffffff
            sub_4c43d0(&var_18)
            int32_t* eax_13
            eax_13.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_13
        
        zip_close(*arg2)
        *arg2 = nullptr
        int32_t var_8_1 = 0xffffffff
        eax_3 = var_18
        
        if (eax_3 != 0 && *eax_3 != 0)
            eax_3 = sub_4c4060(&var_18)
            int32_t temp0_1 = eax_3[1]
            eax_3[1] -= 1
            
            if (temp0_1 == 1)
                int32_t esi_2 = &eax_3[3][4]
                sub_4f4430(eax_3, sub_4f4380(esi_2), esi_2)
    
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3
}
