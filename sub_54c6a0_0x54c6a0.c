// 函数名称: sub_54c6a0
// 虚拟地址: 0x54c6a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_54c6a0(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fdb8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** esi = arg1
    
    if (esi == 0)
        esi = sub_50a390(&esi[1])
    else if (esi[1] != 4)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** var_14_1 = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    char* eax_4 = *esi
    esi[7] = &esi[7][1]
    int32_t entry_ebx
    int32_t* edi = *eax_4 + entry_ebx * 0x14 + 8
    int32_t var_8_1 = 0
    
    if (*edi == 0)
        *edi = (*(*data_3078804 + 0x44))(arg1, entry_ebx)
    
    int32_t result = *edi
    esi[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
