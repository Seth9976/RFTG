// 函数名称: sub_51ece0
// 虚拟地址: 0x51ece0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_51ece0(int32_t arg1, int32_t arg2, char* arg3, char** arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d4f1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    *arg4 = &data_83f3d3
    int32_t var_8_1 = 0
    int32_t var_14_1 = 1
    
    if (sub_5a9450(arg3, 0x3a) != 0)
        sub_4c4590(arg3)
    else
        void var_18
        
        if (sub_5a9f0b(arg3, "sys", 3) != 0)
            uint32_t eax_6 = sub_5a9f0b(arg3, "res", 3)
            uint32_t eax_7
            
            if (eax_6 != 0)
                eax_7 = sub_5a9f0b(arg3, "xbin", 4)
            
            if (eax_6 != 0 && eax_7 != 0)
                char* var_2c_3 = arg3
                sub_4c5680("Non standard asset path %s")
                char* var_34_4 = arg3
                char* var_38_2 = &data_30785f8
                int32_t var_8_3 = 3
                sub_4c4510(sub_4c4a50(&var_18, "%s/%s"))
                var_8_3.b = 0
                sub_4c43d0(&var_18)
            else if (data_30785f8 == 0)
                sub_4c4590(arg3)
            else
                char* var_2c_5 = arg3
                char* var_30_2 = &data_30785f8
                int32_t var_8_4 = 2
                sub_4c4510(sub_4c4a50(&var_18, "%s/%s"))
                var_8_4.b = 0
                sub_4c43d0(&var_18)
        else
            char* var_2c_1 = arg3
            int32_t var_30_1 = 0x3078700
            int32_t var_8_2 = 1
            sub_4c4510(sub_4c4a50(&var_18, "%s/%s"))
            var_8_2.b = 0
            sub_4c43d0(&var_18)
    
    char* edi_1 = nullptr
    
    while (true)
        char* eax_11 = *arg4
        int32_t eax_12
        
        if (eax_11 == 0 || *eax_11 == 0)
            eax_12 = 0
        else
            eax_12 = *(sub_4c4060(arg4) + 8)
        
        if (edi_1 s>= eax_12)
            break
        
        if (*(sub_4c4410(arg4) + edi_1) == 0x2f)
            sub_4c4740(arg4, edi_1, 0x5c)
        
        edi_1 = &edi_1[1]
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}
