// 函数名称: sub_525160
// 虚拟地址: 0x525160
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_525160(void* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f958
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* edx = arg2
    int32_t* result = *edx
    int32_t ebx = 0
    int32_t esi = 0
    int32_t var_1c = 0
    
    if (result s>= 0x3e8)
        sub_4c5870("attribMap.attributeCount < 1000", &data_83f3d3, "UI2.cpp", 0x76d, 
            "UI2MergeAttribMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t i = 0
    int32_t i_1 = 0
    int32_t var_460[0x101]
    
    if (result s> 0)
        do
            result = edx[1] + (i << 3)
            int32_t var_44
            
            switch (*result - 0x64)
                case 0
                    result = sub_4c4590(sub_5215d0(result))
                case 3
                    result = result[1]
                    int32_t* result_2 = result
                    int32_t* result_1 = nullptr
                    
                    if (result[1] s> 0)
                        int32_t var_18_1 = 0
                        
                        while (true)
                            char** esi_2 = *result + var_18_1
                            
                            if (sub_521870(*esi_2, *(arg1 + 0x5c), arg3) != 0)
                                if (var_1c s>= 0xff)
                                    sub_4c5870("numMapsToMerge < MAX_STATES", &data_83f3d3, "UI2.cpp", 
                                        0x786, "UI2MergeAttribMap")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                var_460[var_1c] = &esi_2[1]
                                var_1c += 1
                            
                            var_18_1 += 0xc
                            result = result_1 + 1
                            result_1 = result
                            
                            if (result s>= result_2[1])
                                break
                            
                            result = result_2
                case 4
                    result = result[1]
                    *(arg1 + 0x14c8) = *result
                    *(arg1 + 0x14cc) = result[1]
                    *(arg1 + 0x14d0) = result[2]
                    *(arg1 + 0x14d4) = result[3]
                case 5
                    result = result[1]
                    *(arg1 + 0x14dc) = *result
                    *(arg1 + 0x14e0) = result[1]
                    *(arg1 + 0x14e4) = result[2]
                    *(arg1 + 0x14e8) = result[3]
                case 6
                    result = sub_521530(result)
                    *(arg1 + 0x14ec) = result
                case 7
                    result = sub_521530(result)
                    *(arg1 + 0x14f0) = result
                case 8
                    long double st0_1
                    st0_1, result = sub_521620(result)
                    *(arg1 + 0x14d8) = fconvert.s(st0_1)
                case 9
                    long double st0_2
                    st0_2, result = sub_521620(result)
                    *(arg1 + 0x14f4) = fconvert.s(st0_2)
                case 0xa
                    result = sub_5214d0(result)
                    *(arg1 + 0x14f8) = result.b
                case 0xc
                    result = sub_521530(result)
                    *(arg1 + 0x150c) = result
                case 0xd
                    result = sub_5214d0(result)
                    *(arg1 + 0x1510) = result.b
                case 0x12
                    result = sub_521580(result)
                    *(arg1 + 0x1534) = result
                case 0x13
                    char* eax_24 = result[1]
                    sub_524920(eax_24, &var_44, eax_24, &var_44, *(arg1 + 0x5c), arg3, arg4)
                    int32_t var_8_3 = 2
                    *(arg1 + 0x153d) = sub_521670(&var_44)
                    int32_t var_8_4 = 0xffffffff
                    result = sub_521920(&var_44)
                case 0x65
                    sub_524920(result, &var_44, result[1], &var_44, *(arg1 + 0x5c), arg3, arg4)
                    int32_t eax_33 = neg.d(var_44 - 1)
                    int32_t var_3c
                    *(arg1 + 0x1548) = not.d(sbb.d(eax_33, eax_33, var_44 != 1)) & var_3c
                    result = sub_521920(&var_44)
                case 0x66
                    int32_t var_5c
                    sub_524920(result, &var_5c, result[1], &var_5c, *(arg1 + 0x5c), arg3, arg4)
                    int32_t eax_40 = neg.d(var_5c - 1)
                    int32_t var_54
                    *(arg1 + 0x1544) = not.d(sbb.d(eax_40, eax_40, var_5c != 1)) & var_54
                    result = sub_521920(&var_5c)
                case 0x69
                    if (arg5 == 0)
                        char* eax_12 = result[1]
                        sub_524920(eax_12, &var_44, eax_12, &var_44, *(arg1 + 0x5c), arg3, arg4)
                        int32_t var_8_1 = 0
                        var_8_1.b = 1
                        void var_2c
                        sub_4c4510(sub_5217e0(&var_44, &var_2c))
                        var_8_1.b = 0
                        sub_4c43d0(&var_2c)
                        int32_t var_8_2 = 0xffffffff
                        result = sub_521920(&var_44)
                case 0x6a
                    result = sub_521580(result)
                    *(arg1 + 0x1564) = result
                case 0x6b
                    result = result[1]
                    *(arg1 + 0x1570) = *result
                case 0x6c
                    result = *result[1]
                    *(arg1 + 0x1574) = result
                case 0x6f
                    result = sub_5214d0(result)
                    *(arg1 + 0x1580) = result.b
                case 0x7d
                    result = result[1]
                    *(arg1 + 0x1568) = *result
                    *(arg1 + 0x156c) = result[1]
                case 0x7e
                    result = sub_4c4590(sub_5215d0(result))
                case 0x80
                    result = sub_521530(result)
                    *(arg1 + 0x15cc) = result
            
            edx = arg2
            i = i_1 + 1
            esi = 0
            i_1 = i
        while (i s< *edx)
        
        ebx = var_1c
    
    if (ebx s> 0)
        do
            result = sub_525160(arg1, var_460[esi], arg3, arg4, 0, eax_2)
            esi += 1
        while (esi s< ebx)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
