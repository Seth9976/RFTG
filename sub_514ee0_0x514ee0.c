// 函数名称: sub_514ee0
// 虚拟地址: 0x514ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_514ee0(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690038
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** esi = arg1
    
    if (esi == 0)
        esi = sub_50a390(esi + 0x1d)
    else if (esi[1] != 0x1d)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** var_14 = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    esi[7] = &esi[7][1]
    int32_t var_8_1 = 0
    **esi
    int32_t result = sub_514bb0()
    esi[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
