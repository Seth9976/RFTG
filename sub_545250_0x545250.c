// 函数名称: sub_545250
// 虚拟地址: 0x545250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_545250(void* arg1, char** arg2, uint32_t arg3, char arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fe18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** eax_3 = arg2
    char** esi
    
    if (eax_3 != 0)
        if (eax_3[1] != 3)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        arg2 = eax_3
        esi = eax_3
    else
        esi = sub_50a390(eax_3 + 3)
        arg2 = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    esi[7] = &esi[7][1]
    int32_t var_8_1 = 0
    int32_t* edi = ***esi
    void* esi_4 = sub_54b850(arg1 + 0x4240, arg3)
    
    if (*(esi_4 + 0xd8) != 0)
        sub_4c5870("bufferData->mBufferPtr == 0", &data_83f3d3, "OpenGLGraphics.cpp", 0x571, 
            "OpenGLInterface::LockTextureBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(esi_4 + 0x10) != 0)
        sub_4c5870("bufferData->mIsLoading == 0", &data_83f3d3, "OpenGLGraphics.cpp", 0x572, 
            "OpenGLInterface::LockTextureBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ebx_1 = *(esi_4 + 0x144)
    *arg6 = ebx_1
    arg3 = 1
    uint32_t eax_11 = divu.dp.d(0:(*edi), ebx_1) u>> arg4
    
    if (eax_11 u>= 1)
        arg3 = eax_11
    
    int32_t eax_16 = sub_554170(edi[5], modu.dp.d(0:(edi[1]), ebx_1), arg3)
    int32_t var_14
    data_3079454(1, &var_14)
    data_307943c(0x88ec, var_14)
    data_3079440(0x88ec, eax_16, 0, 0x88e4)
    glPixelStorei(0xcf5, 1)
    *(esi_4 + 0xd8) = data_307947c(0x88ec, 0x88b9)
    *(esi_4 + 0xd4) = var_14
    int32_t eax_19 = edi[5]
    
    if (eax_19 s< 0xd || (eax_19 s> 0x12 && eax_19 != 0x15))
        uint32_t edi_2 = *edi u>> arg4
        
        if (edi_2 u< 1)
            edi_2 = 1
        
        *arg5 = sub_5540b0(eax_19, edi_2)
    else
        *arg5 = 0
    
    int32_t result = *(esi_4 + 0xd8)
    arg2[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
