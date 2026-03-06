// 函数名称: sub_54c980
// 虚拟地址: 0x54c980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __fastcallsub_54c980(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fd88
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3
    int32_t edx
    eax_3, edx = sub_4ff5f0(data_315f7e4)
    char var_18 = eax_3.b
    char** result_1
    char* ecx
    result_1, ecx = sub_509750(eax_3, edx, 4, eax_3)
    char** result = result_1
    char* var_3c
    
    if (result_1 == 0)
        result_1, ecx = sub_50a390(&result_1[1])
    else if (result_1[1] != 4)
        char const* const var_38_3 = "DefAutoLock::DefAutoLock"
        var_3c = 0x19
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", var_3c, var_38_3)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** result_2 = result_1
    
    if (*result_1 == 0)
        char var_38_1 = 1
        var_3c = nullptr
        ecx = sub_5094d0(result_1, var_3c, var_38_1)
    
    result_1[7] = &result_1[7][1]
    int32_t var_38_2 = 0
    var_3c = ecx
    int32_t var_8_1 = 0
    char** var_20 = &var_3c
    
    if (arg1 != 0)
        sub_4c42b0(&var_3c, arg1)
        sub_5561f0(var_18)
        result_1[7] -= 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
