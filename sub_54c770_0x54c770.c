// 函数名称: sub_54c770
// 虚拟地址: 0x54c770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_54c770(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690038
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char** var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** ebx = arg1
    int32_t i = 0
    
    if (ebx == 0)
        ebx = sub_50a390(4)
    else if (ebx[1] != 4)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** var_14_1 = ebx
    
    if (*ebx == 0)
        sub_5094d0(ebx, 0, 1)
    
    char* eax_4 = *ebx
    ebx[7] = &ebx[7][1]
    int32_t var_8_1 = 0
    int32_t* esi_1 = *eax_4 + 8
    int32_t result
    
    do
        result = *esi_1
        
        if (result != 0)
            result = (*(*data_3078804 + 0x48))(i, result)
            *esi_1 = 0
        
        if (esi_1[1] != 0)
            result = esi_1[2]
            esi_1[1] = 0
            
            if (result != 0)
                result = _aligned_free_base(result)
        
        i += 1
        esi_1 = &esi_1[5]
    while (i s< 2)
    
    ebx[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
