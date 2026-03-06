// 函数名称: sub_4c8f00
// 虚拟地址: 0x4c8f00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __fastcallsub_4c8f00(char* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f668
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* result_1 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* edi = arg1
    char* eax_3 = arg2
    *(edi + 0x14) = 2
    *(edi + 0x24) = 1
    *(edi + 0x28) = 3
    
    do
        arg1.b = *eax_3
        eax_3 = &eax_3[1]
    while (arg1.b != 0)
    
    char* var_28 = arg2
    void* var_2c = eax_3 - &eax_3[1]
    char const* const var_30 = "www.google-analytics.com"
    char const* const var_34 = "/collect"
    void* ecx
    int32_t** edx
    ecx, edx = sub_4c4a50(&result_1, "POST %s HTTP/1.1\r\nHost: %s\r\nContent-Length: %d\r\n\r\n%s")
    int32_t var_8_1 = 0
    char* result_2 = result_1
    char* const result_3
    
    if (result_2 != 0)
        result_3 = result_2
        
        if (*result_2 != 0)
            result_2 = *(sub_4c4060(&result_1) + 8)
        else
            result_2 = nullptr
    else
        result_3 = &data_83f3d3
    
    char* const result_4 = result_3
    void* var_2c_1 = &edi[0x3c]
    sub_4c72b0(result_2, edx, ecx)
    int32_t var_8_2 = 0xffffffff
    char* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_2), esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
