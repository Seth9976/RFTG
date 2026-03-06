// 函数名称: sub_4d61b0
// 虚拟地址: 0x4d61b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_4d61b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690038
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** esi = *arg1
    
    if (esi == 0)
        esi = sub_50a390(esi + 0x15)
    else if (esi[1] != 0x15)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** var_14 = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    char* eax_4 = *esi
    esi[7] = &esi[7][1]
    int32_t var_8_1 = 0
    void* eax_6 = *(*eax_4 + 0x1c)
    
    if (eax_6 == 0)
        sub_4c5870("pSoundData", &data_83f3d3, "Sound.cpp", 0x64, "SoundInstanceFree")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(eax_6 + 0x10) == 2)
        sub_536590()
    
    (*(*data_27e7fd8 + 0x30))(arg1)
    void* result = data_27e7fd4
    int32_t ecx_2 = *(result + 0xc)
    *(result + 0xc) = zx.d(arg1[0x17].w)
    arg1[0x17] = ecx_2
    *(result + 0x10) -= 1
    esi[7] = &esi[7][0xffffffff]
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
