// 函数名称: sub_4d10e0
// 虚拟地址: 0x4d10e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4d10e0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f7f8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*arg1 != 2)
        sub_4c5870("mNetSyncState == NETSYNCSTATE_HOST_RUNNING", &data_83f3d3, "NetSync.cpp", 0x136, 
            "NetSync::HostAddClient")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_1c = 0
    int32_t var_18 = 0
    int32_t var_14 = 0
    int32_t var_8_1 = 0
    void* entry_ebx
    void* var_20 = entry_ebx
    sub_4d0f70(sub_4d2860(&arg1[0x146], &var_20), arg1, entry_ebx)
    int32_t var_8_2 = 0xffffffff
    int32_t* result = sub_5041e0(&var_1c)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
