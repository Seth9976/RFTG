// 函数名称: sub_55e680
// 虚拟地址: 0x55e680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __thiscallsub_55e680(void* arg1, char** arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fe18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = sub_563ea0(arg1 + 0x40, arg3)
    
    if (*eax_3 != 2)
        sub_4c5870("bufferData->mBufferType == DX11BUFFER_TEXTURE", &data_83f3d3, 
            "Windows\WindowsDx11.cpp", 0x2d3, "Dx11GraphicsInterface::UnlockTextureBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char** eax_5 = arg2
    char** esi_1
    
    if (eax_5 != 0)
        if (eax_5[1] != 3)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        arg2 = eax_5
        esi_1 = eax_5
    else
        esi_1 = sub_50a390(eax_5 + 3)
        arg2 = esi_1
    
    if (*esi_1 == 0)
        sub_5094d0(esi_1, 0, 1)
    
    esi_1[7] = &esi_1[7][1]
    char ecx_2 = arg4.b
    int32_t var_8_1 = 0
    int32_t* ebx = ***esi_1
    uint32_t eax_8 = *ebx u>> ecx_2
    
    if (eax_8 u< 1)
        eax_8 = 1
    
    uint32_t edx_1 = ebx[1] u>> ecx_2
    uint32_t var_18 = 1
    
    if (edx_1 u>= 1)
        var_18 = edx_1
    
    int32_t eax_9 = sub_5540b0(ebx[5], eax_8)
    int32_t edx_2 = ebx[6]
    int32_t ecx_4 = eax_9 * var_18
    void* esi_5
    
    if (edx_2 != 0)
        if (edx_2 != 1)
            if (edx_2 != 2)
                sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x2f1, 
                    "Dx11GraphicsInterface::UnlockTextureBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x2ed, 
                "Dx11GraphicsInterface::UnlockTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t* edx_6 = *(arg1 + 0x10)
        (*(*edx_6 + 0xc0))(edx_6, *(eax_3 + 0x1c), ebx[3] * arg5 + arg4, 0, *(eax_3 + 8), eax_9, ecx_4)
        esi_5 = eax_3
    else
        if (arg5 != edx_2)
            sub_4c5870("depth == 0", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x2e1, 
                "Dx11GraphicsInterface::UnlockTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        esi_5 = eax_3
        int32_t* edx_4 = *(arg1 + 0x10)
        (*(*edx_4 + 0xc0))(edx_4, *(esi_5 + 0x1c), arg4, 0, *(esi_5 + 8), eax_9, ecx_4)
    
    if (*(esi_5 + 6) != 0)
        int32_t* eax_15 = *(arg1 + 0x10)
        (*(*eax_15 + 0xd8))(eax_15, *(esi_5 + 0x20))
    
    int32_t eax_17 = *(esi_5 + 8)
    
    if (eax_17 != 0)
        _aligned_free_base(eax_17)
    
    *(esi_5 + 8) = 0
    arg2[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2
}
