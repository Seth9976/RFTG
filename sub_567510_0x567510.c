// 函数名称: sub_567510
// 虚拟地址: 0x567510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_567510()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_692750
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_48 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* result_1
    char* const result_3 = result_1
    
    if (result_3 == 0)
        result_3 = &data_83f3d3
    
    char const* const result_8 = 0x2e
    char* const result_2 = result_3
    
    if (sub_5a8f10(result_2, result_8.b) == 0)
        result_8 = "AtlasMakerMakeNoScan"
        result_2 = 0x4df
        sub_4c5870("ext", &data_83f3d3, "Editor\AtlasMaker.cpp", result_2, result_8)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    result_8 = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >()
    result_2 = "%satlases/"
    char* result_11
    sub_4c4a50(&result_11, result_2)
    var_8_1.b = 1
    char* result_4 = result_1
    
    if (result_4 == 0)
        result_4 = &data_83f3d3
    
    result_8 = result_4
    int32_t edx = sub_4c4690(&result_11, result_8)
    char* result_6 = result_1
    char* result_12 = data_315f894
    
    if (result_6 == 0)
        result_6 = &data_83f3d3
    
    result_8 = result_12
    int32_t* result_18 = sub_504e50(result_12, edx, result_6, result_8)
    int32_t* result_19 = result_18
    
    if (result_18 != 0)
        int32_t* var_34 = nullptr
        int32_t var_30_1 = 0
        int32_t var_2c_1 = 0
        var_8_1.b = 2
        int32_t* esi_3 = data_30785d8
        int32_t* result_14 = *esi_3
        int32_t eax_7 = 0
        int32_t i
        
        while (true)
            i = *result_14
            
            if (i != 0)
                break
            
            eax_7 += 1
            result_14 = &result_14[1]
            
            if (eax_7 u> esi_3[1])
                i = 0
                break
        
        void* i_2
        
        while (i != 0)
            int32_t* eax_8
            eax_8, result_14 = sub_50a880()
            void* i_3 = eax_8[1]
            i_2 = i_3
            int32_t eax_9 = *(i_3 + 4)
            
            if (eax_9 == 3 || eax_9 == 0x12)
                result_8 = &i_2
                result_14 = sub_518190(&var_34, result_8)
                result_18 = result_19
        
        int32_t* esi_4 = *result_18
        i_2 = nullptr
        
        if (esi_4[1] s> 0)
            int32_t var_18 = 0
            void* i_1
            
            do
                char* result_15 = result_11
                result_8 = result_14
                result_8 = result_15
                char* result_10 = result_11
                char const* const* var_24_1 = &result_8
                
                if (result_10 != 0 && *result_10 != 0)
                    void* eax_11 = sub_4c4060(&result_8)
                    *(eax_11 + 4) += 1
                
                var_8_1.b = 3
                int32_t* edi_2 = *esi_4 + var_18
                result_2 = result_10
                result_2 = result_1
                char* result_7 = result_1
                char* const* var_28_1 = &result_2
                
                if (result_7 != 0 && *result_7 != 0)
                    void* eax_13 = sub_4c4060(&result_2)
                    *(eax_13 + 4) += 1
                
                var_8_1.b = 2
                result_14 = sub_566280(edi_2, &var_34)
                var_18 += 0x14
                i_1 = i_2 + 1
                i_2 = i_1
            while (i_1 s< esi_4[1])
            result_18 = result_19
        
        if ((result_18[2].b & 1) == 0)
            char* result_9 = *result_18
            result_8 = result_18[3]
            result_2 = result_9
            sub_4fed40(result_2, result_8)
            *result_18 = 0
        
        char* result_13 = result_18[1]
        
        if (result_13 != 0)
            result_8 = result_13
            sub_500770(result_8)
            result_18[1] = 0
        
        result_8 = result_18
        _aligned_free_base(result_8)
        result_8 = "AtlasMaker: done."
        sub_4c5680(result_8)
        result_8 = &var_34
        var_8_1.b = 1
        sub_5041e0(result_8)
        var_8_1.b = 0
    else
        char* result_5 = result_1
        
        if (result_5 == 0)
            result_5 = &data_83f3d3
        
        result_8 = result_5
        result_2 = "failed to read %s"
        sub_4c5680(result_2)
        var_8_1.b = 0
    
    char* result_20 = result_11
    
    if (result_20 != 0 && *result_20 != 0)
        void* eax_16 = sub_4c4060(&result_11)
        int32_t temp0_1 = *(eax_16 + 4)
        *(eax_16 + 4) -= 1
        
        if (temp0_1 == 1)
            char* result_16 = *(eax_16 + 0xc) + 0x10
            int32_t* eax_17 = sub_4f4380(result_16)
            result_8 = result_16
            sub_4f4430(eax_16, eax_17, result_8)
    
    int32_t var_8_2 = 0xffffffff
    char* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            char* result_17 = *(result + 0xc) + 0x10
            int32_t* eax_20 = sub_4f4380(result_17)
            result_8 = result_17
            result = sub_4f4430(result, eax_20, result_8)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
