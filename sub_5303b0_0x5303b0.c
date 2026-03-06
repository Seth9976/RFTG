// 函数名称: sub_5303b0
// 虚拟地址: 0x5303b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_5303b0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68cae1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_be1ee8 u>= data_be1ee0)
        sub_4c5870("mUsedCount < mMaxSize", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xcd, 
            "DataArray<struct UI2>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_5 = data_be1ee4
    int32_t ecx = data_be1edc
    
    if (eax_5 u> ecx)
        sub_4c5870("mFreeListHead <= mMaxUsedCount", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
            0xce, "DataArray<struct UI2>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx = data_be1ed8
    int32_t ecx_1
    int32_t edi
    
    if (eax_5 != ecx)
        edi = eax_5
        ecx_1 = *(eax_5 * 0x19e0 + edx + 0x19dc)
    else
        edi = ecx
        ecx_1 = ecx + 1
        data_be1edc = ecx_1
    
    int128_t* result = edi * 0x19e0 + edx
    data_be1ee4 = ecx_1
    int128_t* result_2 = result
    sub_5abfc0(result, 0, 0x19dc)
    int128_t* result_1 = result
    int32_t var_8_1 = 0
    
    if (result != 0)
        sub_5305a0(result)
    
    *(result + 0x19dc) = data_be1eec << 0x10 | edi
    int32_t eax_9 = data_be1eec + 1
    data_be1eec = eax_9
    
    if (eax_9 == 0x10000)
        data_be1eec = 1
    
    data_be1ee8 += 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
