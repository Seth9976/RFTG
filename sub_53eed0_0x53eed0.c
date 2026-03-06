// 函数名称: sub_53eed0
// 虚拟地址: 0x53eed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_53eed0(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fc18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* edi = *arg2
    
    if (edi == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* result_1
    sub_4c42b0(&result_1, edi)
    int32_t var_8_1 = 0
    char* ebx_1 = *arg2
    void* const esi_1 = &data_840870
    
    do
        if (sub_5a9697(*(esi_1 + 4), ebx_1) == 0)
            *arg1 = *esi_1
            break
        
        esi_1 += 8
    while (*(esi_1 + 4) != 0)
    
    char const* const eax_9
    
    switch (*arg1 - 1)
        case 0
            eax_9 = "Image"
            goto label_53efbb
        case 1
            eax_9 = "Table"
            goto label_53efbb
        case 2
            eax_9 = "Text"
            goto label_53efbb
        case 3
            eax_9 = "Region"
            goto label_53efbb
        case 4
            eax_9 = "Button"
            goto label_53efbb
        case 5
            eax_9 = "Group"
            goto label_53efbb
        case 7
            eax_9 = "Particle"
        label_53efbb:
            sub_4c4590(eax_9)
            char* const eax_10 = *arg3
            
            if (eax_10 == 0)
                eax_10 = &data_83f3d3
            
            *arg2 = eax_10
            int32_t var_8_2 = 0xffffffff
            char* result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_4c4060(&result_1)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    int32_t esi_3 = *(result + 0xc) + 0x10
                    result = sub_4f4430(result, sub_4f4380(esi_3), esi_3)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 0xe78, "ToUITypeStr")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
