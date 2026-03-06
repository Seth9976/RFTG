// 函数名称: sub_545480
// 虚拟地址: 0x545480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __thiscallsub_545480(void* arg1, char** arg2, uint32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fe48
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = sub_54b850(arg1 + 0x4240, arg3)
    
    if (eax_3[4] != 0)
        sub_4c5870("bufferData->mIsLoading == 0", &data_83f3d3, "OpenGLGraphics.cpp", 0x59f, 
            "OpenGLInterface::UnlockTextureBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    uint32_t texture = *eax_3
    data_3079480(0x88ec)
    char** result
    char** result_1
    
    if (arg2 != 0)
        if (arg2[1] != 3)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = arg2
        result_1 = arg2
    else
        result_1 = sub_50a390(arg2 + 3)
        result = result_1
    
    if (*result_1 == 0)
        sub_5094d0(result_1, 0, 1)
    
    result_1[7] = &result_1[7][1]
    int32_t var_8_1 = 0
    int32_t* esi_3 = ***result_1
    void* eax_9 = esi_3[3] * arg5 + arg4
    
    if (eax_9 s>= esi_3[0xd])
        sub_4c5870("imageIndex < pTextureData->imageCount", &data_83f3d3, "OpenGLGraphics.cpp", 0x5ae, 
            "OpenGLInterface::UnlockTextureBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edi_1 = eax_3[0x51]
    int32_t* edx = esi_3[0xf] + (eax_9 << 3)
    arg2 = 1
    uint32_t eax_13 = divu.dp.d(0:(*esi_3), edi_1) u>> arg4.b
    
    if (eax_13 u>= 1)
        arg2 = eax_13
    
    arg3 = 1
    uint32_t eax_16 = divu.dp.d(0:(esi_3[1]), edi_1) u>> arg4.b
    
    if (eax_16 u>= 1)
        arg3 = eax_16
    
    void* eax_17 = sub_545200(arg4, esi_3[5])
    int32_t eax_18 = esi_3[6]
    
    if (eax_18 != 0)
        if (eax_18 != 1)
            sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0x5da, 
                "OpenGLInterface::UnlockTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* eax_25 = data_307882c
        
        if (*(eax_25 + 0x415c) != texture)
            *(eax_25 + 0x415c) = texture
            
            if (*(eax_25 + 0x4098) != 0)
                *(eax_25 + 0x4098) = 0
                data_30792c4(0x84c0)
            
            glBindTexture(0x8513, texture)
        
        glTexImage2D(*((arg5 << 2) + &data_8bdc20), arg4, *(eax_17 + 4), arg2, arg3, 0, *(eax_17 + 8), 
            *(eax_17 + 0xc), nullptr)
    else
        void* eax_19 = data_307882c
        uint32_t texture_1 = texture
        
        if (*(eax_19 + 0x409c) != texture_1)
            *(eax_19 + 0x409c) = texture_1
            
            if (*(eax_19 + 0x4098) != 0)
                *(eax_19 + 0x4098) = 0
                data_30792c4(0x84c0)
                texture_1 = texture
            
            glBindTexture(0xde1, texture_1)
        
        int32_t eax_20 = esi_3[5]
        
        if (eax_20 s< 0xd || (eax_20 s> 0x12 && eax_20 != 0x15))
            glTexImage2D(0xde1, arg4, *(eax_17 + 4), arg2, arg3, 0, *(eax_17 + 8), *(eax_17 + 0xc), 
                nullptr)
        else
            data_30792d0(0xde1, arg4, *(eax_17 + 4), arg2, arg3, 0, *edx, 0)
        
        if (*(data_27e7fd0 + 0x21) != 0 && esi_3[5] s< 0x6f)
            data_30798bc(0xde1)
    
    data_307943c(0x88ec, 0)
    eax_3[0x36] = 0
    result[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
