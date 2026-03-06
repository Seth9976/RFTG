// 函数名称: sub_4079f0
// 虚拟地址: 0x4079f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4079f0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69629f
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_120 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* result = data_27e7fd0
    
    if (*(result + 0x27) == 0)
        if ((data_3166164 & 1) == 0)
            data_3166164.d |= 1
            int32_t var_8_1 = 0
            data_3166160 = sub_4f5220(data_307c56c, "animBg")
            int32_t var_8_2 = 0xffffffff
        
        void var_68
        sub_407c40(&var_68)
        int32_t var_8_3 = 1
        
        if (sub_4e3d60(&var_68) == 0)
        label_407b75:
            
            if (arg3[1].b != 0)
                goto label_407b82
        else
            int32_t performanceCount
            int32_t var_b4
            
            if (arg3[1].b == 0)
                char* const var_ac = &data_83f3d3
                var_8_3.b = 2
                char eax_5 = sub_4e4110(&var_68, &var_ac)
                int32_t eax_7
                
                if (eax_5 != 0)
                    char* const eax_6 = var_ac
                    
                    if (eax_6 == 0)
                        eax_6 = &data_83f3d3
                    
                    char* const var_124_3 = eax_6
                    eax_7 = sub_5a710b()
                
                if (eax_5 == 0 || arg4 != eax_7)
                    arg3[1].b = 1
                    QueryPerformanceCounter(&performanceCount)
                    float edx = data_3166160
                    arg3[2] = performanceCount
                    int32_t eax_9 = *arg3
                    int32_t var_124_5 = 0
                    arg3[3] = var_b4
                    int32_t edx_1 = sub_4fa4e0(eax_9, edx, edx.b)
                    
                    if ((data_3166164 & 2) == 0)
                        data_3166164.d |= 2
                        var_8_3.b = 3
                        int32_t eax_11
                        eax_11, edx_1 = sub_4f5220(data_307c56c, "txtMessage")
                        data_316615c = eax_11
                        var_8_3.b = 2
                    
                    char* var_64
                    char* const eax_12 = var_64
                    
                    if (eax_12 == 0)
                        eax_12 = &data_83f3d3
                    
                    char* ecx_3 = data_316615c
                    int32_t var_124_6 = 1
                    char* const var_128_5 = eax_12
                    sub_4f9300(*arg3, edx_1, ecx_3, ecx_3.b)
                    sub_4d6940()
                
                var_8_3.b = 1
                sub_4c43d0(&var_ac)
                goto label_407b75
            
        label_407b82:
            QueryPerformanceCounter(&performanceCount)
            int32_t performanceCount_1 = performanceCount
            uint32_t eax_15
            char edx_2
            eax_15, edx_2 = sub_4c5f30(performanceCount_1 - arg3[2], 
                sbb.d(var_b4, arg3[3], performanceCount_1 u< arg3[2]))
            
            if (eax_15 s>= 0xfa0)
                int32_t var_124_9 = 1
                arg3[1].b = 0
                sub_4fa4e0(*arg3, data_3166160, edx_2)
        
        void var_110
        int32_t eax_18
        int80_t st0_1
        st0_1, eax_18 = sub_40a930(&var_110)
        long double x87_r6_1 = fconvert.t(data_8c4d34)
        int32_t ebx_1 = *arg3
        void var_a8
        int32_t ecx_7
        int32_t esi_2
        esi_2, ecx_7 = __builtin_memcpy(&var_a8, eax_18, 0x40)
        int32_t var_130_1 = ecx_7
        void var_d0
        sub_4f8710(esi_2, &var_d0, ebx_1, &var_a8, &data_840a00, 0, fconvert.s(x87_r6_1), nullptr, 
            nullptr, nullptr)
        int32_t var_8_4 = 0xffffffff
        result = sub_407cd0(&var_68)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
