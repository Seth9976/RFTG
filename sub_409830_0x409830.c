// 函数名称: sub_409830
// 虚拟地址: 0x409830
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_409830()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d158
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_27e7a64 == 0)
        sub_4c5870("gGameStats", &data_83f3d3, "..\code\GameApp.cpp", 0x3c3, "GameStatsSave")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_30 = sub_4c6050()
    char* result_1
    sub_4c4a50(&result_1, "%sstats.xml")
    int32_t var_8_1 = 0
    void* esi = data_30785c8
    int32_t* ecx = data_307b67c
    struct _EXCEPTION_REGISTRATION_RECORD** edx = data_27e7a64
    *(esi + 0x1c) += 1
    struct _EXCEPTION_REGISTRATION_RECORD** var_18 = edx
    
    if (*(esi + 0x10) == 0)
        edx = sub_504460(esi + 0x10)
    
    int32_t* edi = *(esi + 0x10)
    *(esi + 0x10) = *edi
    __builtin_memset(edi, 0, 0x14)
    
    if (edi != 0)
        *edi = &data_83f3d3
        edi[1] = 0
        edi[2] = 0
        edi[3] = 0
    
    uint32_t edx_1 = sub_504160(ecx, edx, nullptr, edi, var_18)
    char* const result_2 = result_1
    
    if (result_2 == 0)
        result_2 = &data_83f3d3
    
    data_307b67c
    int32_t* var_30_2 = edi
    
    if (sub_504620(result_2, edx_1) == 0)
        char* const result_3 = result_1
        
        if (result_3 == 0)
            result_3 = &data_83f3d3
        
        char* const result_4 = result_3
        sub_4c5680("Failed to write file: '%s'")
    
    sub_500770(edi)
    int32_t var_8_2 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_3 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_3), esi_3)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
