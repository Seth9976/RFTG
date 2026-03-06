// 函数名称: sub_558f60
// 虚拟地址: 0x558f60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __stdcallsub_558f60(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6918d8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_48 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg1
    
    if (*(esi + 0x55) != 0 && *(esi + 0x56) != 0)
        int32_t* edi_1 = esi[2]
        void var_38
        int32_t var_28
        
        if ((*(*edi_1 + 0x10))(edi_1, &var_28, &var_38) != 0)
            sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x17e, 
                "WindowsSoundInterface::SoundInterfaceUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = esi[7]
        int32_t ebx_1 = var_28
        arg1:3.b = 0
        void* ebx_2
        
        if (result s> ebx_1)
            arg1:3.b = 1
            ebx_2 = esi[5] - result
        else
            ebx_2 = ebx_1 - result
        
        int32_t ecx_3 = esi[8]
        
        if (ecx_3 s<= 0 || result s>= ecx_3)
        label_55905b:
            
            if (ebx_2 s>= 0x2000 || arg1:3.b != 0)
                void* ebx_3 = ebx_2 & 0xfffffffc
                char** result_1
                void* var_18
                sub_4b42b0(0x15, *esi, &result_1, &var_18)
                int32_t var_8_1 = 0
                void* eax_9 = esi[6]
                int32_t ecx_7 = *(*(var_18 + 0x1c) + 0xc)
                var_18 = ebx_3
                
                if (eax_9 + ebx_3 s> ecx_7)
                    void* edi_3 = ebx_3 + eax_9 - ecx_7
                    var_18 = ebx_3 - edi_3
                    
                    if (edi_3 s>= esi[5])
                        sub_4c5870("sourceWrapSize < pSoundInstance->mBufferSize", &data_83f3d3, 
                            "Windows\WindowsSound.cpp", 0x1af, 
                            "WindowsSoundInterface::SoundInterfaceUpdate")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                
                int32_t var_30
                int32_t var_2c
                char* var_24
                int32_t var_20
                
                if ((*(*edi_1 + 0x2c))(edi_1, esi[7], ebx_3, &var_24, &var_20, &var_2c, &var_30, 0)
                        != 0)
                    sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x1b8, 
                        "WindowsSoundInterface::SoundInterfaceUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (var_20 != ebx_3)
                    sub_4c5870("(int)lockedSize == writeLen", &data_83f3d3, "Windows\WindowsSound.cpp", 
                        0x1b9, "WindowsSoundInterface::SoundInterfaceUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (var_2c != 0)
                    sub_4c5870("pLockedPtr2 == NULL", &data_83f3d3, "Windows\WindowsSound.cpp", 0x1ba, 
                        "WindowsSoundInterface::SoundInterfaceUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (var_30 != 0)
                    sub_4c5870("lockedSize2 == 0", &data_83f3d3, "Windows\WindowsSound.cpp", 0x1bb, 
                        "WindowsSoundInterface::SoundInterfaceUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                sub_5588c0(esi, var_18, var_24)
                
                if ((*(*edi_1 + 0x4c))(edi_1, var_24, var_20, 0, 0) != 0)
                    sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x1c2, 
                        "WindowsSoundInterface::SoundInterfaceUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (arg1:3.b == 0)
                    esi[7] += ebx_3
                else
                    esi[7] = 0
                
                result = result_1
                
                if (result != 0)
                    result[7] -= 1
        else
            result += ebx_2
            
            if (result s< ecx_3)
                goto label_55905b
            
            result = (*(*edi_1 + 0x48))(edi_1)
            
            if (result != 0)
                sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x194, 
                    "WindowsSoundInterface::SoundInterfaceUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
