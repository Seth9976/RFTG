// 函数名称: sub_55aab0
// 虚拟地址: 0x55aab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_55aab0(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690038
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_14_1
    char** esi
    
    if (arg1 != 0)
        if (arg1[1] != 4)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_14_1 = arg1
        esi = arg1
    else
        esi = sub_50a390(&arg1[1])
        var_14_1 = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    char* eax_5 = *esi
    esi[7] = &esi[7][1]
    int32_t var_8_1 = 0
    int32_t result
    int32_t result_1 = result
    void* edi_1 = *eax_5 + result_1 * 0x14
    void* ecx_3 = *(edi_1 + 4)
    
    if (ecx_3 != 0)
        int32_t ecx_4 = *(ecx_3 + 4)
        
        if (result_1 == 0)
            int32_t* eax_14 = *(data_3079200 + 8)
            
            if ((*(*eax_14 + 0x16c))(eax_14, ecx_4, &result) s>= 0)
            label_55abf2:
                void* esi_1 = *(edi_1 + 4)
                int32_t ebx_2 = *(esi_1 + 8) * 6
                int32_t ebx_3 = ebx_2 * 2
                result = result
                char** eax_19
                
                if (ebx_2 != neg.d(ebx_2))
                    char** eax_21 = sub_4cce80(ebx_3)
                    sub_5abfc0(eax_21, 0, ebx_3)
                    eax_19 = eax_21
                else
                    eax_19 = nullptr
                
                *(edi_1 + 0x10) = eax_19
                int32_t edx_5 = 0
                *(edi_1 + 0xc) = *(esi_1 + 8)
                arg1 = nullptr
                
                if (*(esi_1 + 8) s> 0)
                    void* i
                    
                    do
                        int32_t* eax_23 = *(esi_1 + 0xc)
                        int32_t* ecx_9 = *(edi_1 + 0x10)
                        *(ecx_9 + edx_5 + 8) = *(eax_23 + edx_5 + 8)
                        *(ecx_9 + edx_5 + 4) = *(eax_23 + edx_5 + 4)
                        *(ecx_9 + edx_5) = *(eax_23 + edx_5)
                        i = arg1 + 1
                        edx_5 += 0xc
                        arg1 = i
                    while (i s< *(esi_1 + 8))
                
                var_14_1[7] -= 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            char* const eax_17 = arg1[8]
            
            if (eax_17 == 0)
                eax_17 = &data_83f3d3
            
            char* const var_28_4 = eax_17
            sub_4c5680("dx9 failed to create vertex shader buffer %s")
        else
            if (result_1 != 1)
                sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x422, 
                    "Dx9GraphicsInterface::CreateShaderBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* eax_9 = *(data_3079200 + 8)
            
            if ((*(*eax_9 + 0x1a8))(eax_9, ecx_4, &result) s>= 0)
                goto label_55abf2
            
            char* const eax_12 = arg1[8]
            
            if (eax_12 == 0)
                eax_12 = &data_83f3d3
            
            char* const var_28_2 = eax_12
            sub_4c5680("dx9 failed to create pixel shader buffer %s")
    
    esi[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
