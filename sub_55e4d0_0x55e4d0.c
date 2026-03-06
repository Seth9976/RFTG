// 函数名称: sub_55e4d0
// 虚拟地址: 0x55e4d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55e4d0(void* arg1, char** arg2, uint32_t arg3, char arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fcb8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3
    int32_t edx
    eax_3, edx = sub_563ea0(arg1 + 0x40, arg3)
    
    if (*eax_3 != 2)
        sub_4c5870("bufferData->mBufferType == DX11BUFFER_TEXTURE", &data_83f3d3, 
            "Windows\WindowsDx11.cpp", 0x2b4, "Dx11GraphicsInterface::LockTextureBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char** eax_5 = arg2
    char** edi
    
    if (eax_5 != 0)
        if (eax_5[1] != 3)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        arg2 = eax_5
        edi = eax_5
    else
        char** eax_6
        eax_6, edx = sub_50a390(eax_5 + 3)
        edi = eax_6
        arg2 = edi
    
    if (*edi == 0)
        edx = sub_5094d0(edi, 0, 1)
    
    char* eax_7 = *edi
    edi[7] = &edi[7][1]
    int32_t var_8_1 = 0
    int32_t* esi_1 = **eax_7
    uint32_t eax_10 = *esi_1 u>> arg4
    arg3 = 1
    
    if (eax_10 u>= 1)
        arg3 = eax_10
    
    esi_1[1]
    *arg6 = 1
    int32_t eax_15 = sub_554170(esi_1[5], edx, arg3)
    
    if (*(eax_3 + 8) != 0)
        sub_4c5870("bufferData->mBufferPtr == 0", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x2c0, 
            "Dx11GraphicsInterface::LockTextureBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    *(eax_3 + 8) = sub_4cce80(eax_15)
    int32_t esi_2 = esi_1[5]
    
    if (esi_2 s< 0xd || (esi_2 s> 0x12 && esi_2 != 0x15))
        edi = arg2
        *arg5 = sub_5540b0(esi_2, arg3)
    else
        *arg5 = 0
    
    int32_t result = *(eax_3 + 8)
    edi[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
