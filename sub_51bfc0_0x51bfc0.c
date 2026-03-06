// 函数名称: sub_51bfc0
// 虚拟地址: 0x51bfc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_51bfc0()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6902d0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_34 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_c_1 = 0
    char* var_20
    int32_t edx
    char* eax_5 = *sub_51ece0(&var_20, edx, "sys/", &var_20)
    
    if (eax_5 == 0)
        eax_5 = &data_83f3d3
    
    int32_t edx_1 = sub_51bd40(eax_5)
    int32_t var_c_2 = 0xffffffff
    char* eax_6 = var_20
    
    if (eax_6 != 0 && *eax_6 != 0)
        eax_6 = sub_4c4060(&var_20)
        int32_t temp0_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_6 + 0xc) + 0x10
            eax_6, edx_1 = sub_4f4430(eax_6, sub_4f4380(esi_2), esi_2)
    
    int32_t var_c_3 = 1
    char* eax_11 = *sub_51ece0(eax_6, edx_1, "res/", &var_20)
    
    if (eax_11 == 0)
        eax_11 = &data_83f3d3
    
    sub_51bd40(eax_11)
    int32_t var_c_4 = 0xffffffff
    char* eax_12 = var_20
    
    if (eax_12 != 0 && *eax_12 != 0)
        void* eax_14 = sub_4c4060(&var_20)
        int32_t temp1_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_4 = *(eax_14 + 0xc) + 0x10
            sub_4f4430(eax_14, sub_4f4380(esi_4), esi_4)
    
    int32_t var_38_6 = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >()
    char* result_1
    int32_t edx_2 = sub_4c4a50(&result_1, "%satlases/")
    int32_t var_c_5 = 2
    char* const result_2 = result_1
    
    if (result_2 == 0)
        result_2 = &data_83f3d3
    
    var_c_5.b = 3
    char* var_1c
    char* eax_20 = *sub_51ece0(&var_1c, edx_2, result_2, &var_1c)
    
    if (eax_20 == 0)
        eax_20 = &data_83f3d3
    
    sub_51bd40(eax_20)
    var_c_5.b = 2
    char* eax_21 = var_1c
    
    if (eax_21 != 0 && *eax_21 != 0)
        void* eax_23 = sub_4c4060(&var_1c)
        int32_t temp2_1 = *(eax_23 + 4)
        *(eax_23 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_6 = *(eax_23 + 0xc) + 0x10
            sub_4f4430(eax_23, sub_4f4380(esi_6), esi_6)
    
    int32_t var_c_6 = 0xffffffff
    char* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp3_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_8 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_8), esi_8)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
