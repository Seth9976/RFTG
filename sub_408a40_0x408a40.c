// 函数名称: sub_408a40
// 虚拟地址: 0x408a40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_408a40()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f9c0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_27e7a54 == 0)
        sub_4c5870("gGameSettings", &data_83f3d3, "..\code\GameApp.cpp", 0x2a6, "GameSettingsSave")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_30 = sub_4c6050()
    char* var_14
    sub_4c4a50(&var_14, "%sgamesettings.xml")
    int32_t var_8_1 = 0
    void* esi = data_30785c8
    struct _EXCEPTION_REGISTRATION_RECORD** result_4 = data_27e7a58
    *(esi + 0x1c) += 1
    int32_t* ebx = data_307b684
    bool cond:0 = *(esi + 0x10) != 0
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result_4
    
    if (not(cond:0))
        sub_504460(esi + 0x10)
    
    int32_t* edi = *(esi + 0x10)
    int32_t edx = *edi
    *(esi + 0x10) = edx
    __builtin_memset(edi, 0, 0x14)
    
    if (edi != 0)
        *edi = &data_83f3d3
        edi[1] = 0
        edi[2] = 0
        edi[3] = 0
    
    uint32_t edx_1 = sub_504160(ebx, edx, nullptr, edi, result_1)
    char* const eax_7 = var_14
    
    if (eax_7 == 0)
        eax_7 = &data_83f3d3
    
    data_307b684
    int32_t* var_30_2 = edi
    
    if (sub_504620(eax_7, edx_1) == 0)
        char* const eax_9 = var_14
        
        if (eax_9 == 0)
            eax_9 = &data_83f3d3
        
        char* const var_30_3 = eax_9
        sub_4c5680("Failed to write file: '%s'")
    
    sub_500770(edi)
    int32_t var_8_2 = 0xffffffff
    char* eax_10 = var_14
    
    if (eax_10 != 0 && *eax_10 != 0)
        void* eax_12 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_3 = *(eax_12 + 0xc) + 0x10
            sub_4f4430(eax_12, sub_4f4380(esi_3), esi_3)
    
    if (data_27e7a50 == 0)
        sub_4c5870("gLocalSettings", &data_83f3d3, "..\code\GameApp.cpp", 0x2c3, "GameSettingsSave")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_30_6 = sub_4c6050()
    sub_4c4a50(&result_1, "%slocalsettings.xml")
    int32_t var_8_3 = 1
    int32_t* eax_18
    uint32_t edx_3
    eax_18, edx_3 = sub_504180(data_27e7a50, data_307b65c)
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result_1
    
    if (result_2 == 0)
        result_2 = &data_83f3d3
    
    data_307b65c
    int32_t* var_30_8 = eax_18
    
    if (sub_504620(result_2, edx_3) == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result_1
        
        if (result_3 == 0)
            result_3 = &data_83f3d3
        
        struct _EXCEPTION_REGISTRATION_RECORD** result_5 = result_3
        sub_4c5680("Failed to write file: '%s'")
    
    sub_500770(eax_18)
    int32_t var_8_4 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_6 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_6), esi_6)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
