// 函数名称: sub_55ea50
// 虚拟地址: 0x55ea50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __thiscallsub_55ea50(void* arg1, char** arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_68fc7b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_11c
    int32_t eax_2 = __security_cookie ^ &var_11c
    int32_t __saved_edi
    int32_t var_12c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_108
    char** edi
    
    if (arg2 != 0)
        if (arg2[1] != 4)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_108 = arg2
        edi = arg2
    else
        edi = sub_50a390(&arg2[1])
        var_108 = edi
    
    if (*edi == 0)
        sub_5094d0(edi, 0, 1)
    
    char* eax_7 = *edi
    edi[7] = &edi[7][1]
    void* ebx_1 = *eax_7 + arg3 * 0x14
    int32_t var_c_1 = 0
    void* result = *(ebx_1 + 4)
    
    if (result != 0)
        int32_t ecx_4 = *(result + 0x14)
        var_11c = *(result + 0x10)
        int128_t* eax_9 = sub_563dc0(arg1 + 0x40)
        int32_t* var_140_1
        int32_t var_13c_1
        int32_t var_138_2
        void* var_130_1
        int32_t eax_16
        
        if (arg3 == 0)
            *eax_9 = 3
            int32_t* eax_17 = *(arg1 + 4)
            var_130_1 = eax_9 + 0x28
            int32_t var_134_2 = 0
            var_138_2 = var_11c
            var_13c_1 = ecx_4
            var_140_1 = eax_17
            eax_16 = *(*eax_17 + 0x30)
        else
            if (arg3 != 1)
                sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x352, 
                    "Dx11GraphicsInterface::CreateShaderBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            var_130_1 = eax_9 + 0x2c
            int32_t var_134_1 = 0
            var_138_2 = var_11c
            *eax_9 = 4
            int32_t* eax_15 = *(arg1 + 4)
            var_13c_1 = ecx_4
            var_140_1 = eax_15
            eax_16 = *(*eax_15 + 0x3c)
        
        if (eax_16(var_140_1, var_13c_1, var_138_2, 0, var_130_1) s>= 0)
            int32_t eax_20 = var_11c
            int32_t* var_110 = nullptr
            
            if (D3DReflect(ecx_4, eax_20, 0x82e378, &var_110) s< 0)
                sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x357, 
                    "Dx11GraphicsInterface::CreateShaderBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* eax_23 = var_110
            void var_d8
            (*(*eax_23 + 0xc))(eax_23, &var_d8)
            int32_t var_c8
            int32_t esi_4 = var_c8
            var_11c = esi_4
            int32_t var_cc
            char* var_3c
            int32_t var_34
            
            if (var_cc != 0)
                if (var_cc != 1)
                    sub_4c5870("shaderDesc.ConstantBuffers == 1", &data_83f3d3, 
                        "Windows\WindowsDx11.cpp", 0x360, "Dx11GraphicsInterface::CreateShaderBuffer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t* eax_26 = var_110
                int32_t* eax_27 = (*(*eax_26 + 0x10))(eax_26, 0)
                
                if ((**eax_27)(eax_27, &var_3c) s< 0)
                    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x366, 
                        "Dx11GraphicsInterface::CreateShaderBuffer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                esi_4 += var_34
                var_11c = esi_4
            
            *(ebx_1 + 0x10) = sub_4ccf20(esi_4 * 0xc)
            *(ebx_1 + 0xc) = 0
            char* var_114_1 = nullptr
            
            if (var_cc u> 0)
                if (var_cc != 1)
                    sub_4c5870("shaderDesc.ConstantBuffers == 1", &data_83f3d3, 
                        "Windows\WindowsDx11.cpp", 0x374, "Dx11GraphicsInterface::CreateShaderBuffer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t* eax_34 = var_110
                int32_t* eax_35 = (*(*eax_34 + 0x10))(eax_34, 0)
                
                if ((**eax_35)(eax_35, &var_3c) s< 0)
                    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x37a, 
                        "Dx11GraphicsInterface::CreateShaderBuffer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t var_118_2 = 0
                
                if (var_34 u> 0)
                    int32_t eax_47
                    
                    do
                        int32_t* eax_40 = (*(*eax_35 + 4))(eax_35, var_118_2)
                        char* var_fc
                        (**eax_40)(eax_40, &var_fc)
                        int32_t eax_42 = sub_531300(&data_8bd334, var_fc)
                        
                        if (eax_42 != 0xffffffff)
                            int32_t ecx_15 = *(ebx_1 + 0xc)
                            
                            if (ecx_15 s>= var_11c)
                                sub_4c5870("constantTable->constantCount < maxConstants", &data_83f3d3, 
                                    "Windows\WindowsDx11.cpp", 0x38a, 
                                    "Dx11GraphicsInterface::CreateShaderBuffer")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t* ecx_17 = *(ebx_1 + 0x10) + ecx_15 * 0xc
                            ecx_17[2] = eax_42
                            int32_t var_f8
                            *ecx_17 = var_f8
                            int32_t var_f4
                            ecx_17[1] = var_f4
                            *(ebx_1 + 0xc) += 1
                            char* eax_45 = ecx_17[1] + *ecx_17
                            
                            if (var_114_1 s<= eax_45)
                                var_114_1 = eax_45
                        else
                            char* var_130_10 = var_fc
                            sub_4c5680("Dx11 Unknown shader constant '%s'")
                        
                        eax_47 = var_118_2 + 1
                        var_118_2 = eax_47
                    while (eax_47 u< var_34)
            
            int32_t esi_6 = 0
            
            if (var_c8 s> 0)
                do
                    int32_t* eax_48 = var_110
                    
                    if ((*(*eax_48 + 0x18))(eax_48, esi_6, &var_3c) s< 0)
                        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x39b, 
                            "Dx11GraphicsInterface::CreateShaderBuffer")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t var_38
                    
                    if (var_38 == 2)
                        int32_t eax_51
                        int32_t edx_20
                        eax_51, edx_20 = sub_531300(&data_8bd334, var_3c)
                        
                        if (eax_51 != 0xffffffff)
                            if (*(sub_531280(eax_51, edx_20, &data_8bd334) + 0x10) == 0xf)
                                int32_t eax_55 = *(ebx_1 + 0xc)
                                
                                if (eax_55 s>= var_11c)
                                    sub_4c5870("constantTable->constantCount < maxConstants", 
                                        &data_83f3d3, "Windows\WindowsDx11.cpp", 0x3ad, 
                                        "Dx11GraphicsInterface::CreateShaderBuffer")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t* eax_57 = *(ebx_1 + 0x10) + eax_55 * 0xc
                                eax_57[2] = eax_51
                                *eax_57 = var_34
                                eax_57[1] = 0
                                *(ebx_1 + 0xc) += 1
                            else
                                char* var_130_14 = var_3c
                                sub_4c5680("Dx11 shader variable '%s' isn't a texture")
                        else
                            char* var_130_13 = var_3c
                            sub_4c5680("Dx11 Unknown texture '%s'")
                    
                    esi_6 += 1
                while (esi_6 s< var_c8)
            
            if (*(ebx_1 + 0xc) == 0)
                int32_t eax_58 = *(ebx_1 + 0x10)
                
                if (eax_58 != 0)
                    _aligned_free_base(eax_58)
                
                *(ebx_1 + 0x10) = 0
            
            char* ecx_21 = var_114_1
            
            if (ecx_21 s> 0)
                void* eax_60 = ecx_21 & 0x8000000f
                bool cond:1_1 = eax_60 == 0
                
                if (eax_60 s< 0)
                    void* eax_62 = (eax_60 - 1) | 0xfffffff0
                    eax_60 = eax_62 + 1
                    cond:1_1 = eax_62 == 0xffffffff
                
                if (not(cond:1_1))
                    ecx_21 += 0x10 - eax_60
                
                __builtin_memset(&var_3c, 0, 0x18)
                int32_t* eax_64 = *(arg1 + 4)
                int32_t var_38_1 = 2
                var_3c = ecx_21
                int32_t var_34_1 = 4
                int32_t var_30_1 = 0x10000
                
                if ((*(*eax_64 + 0xc))(eax_64, &var_3c, 0, eax_9 + 0x18) s< 0)
                    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x3cf, 
                        "Dx11GraphicsInterface::CreateShaderBuffer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            result = *(eax_9 + 0x248)
            var_108[7] -= 1
        else
            char* const eax_19 = arg2[8]
            
            if (eax_19 == 0)
                eax_19 = &data_83f3d3
            
            char* const var_130_2 = eax_19
            sub_4c5680("failed to load vertex shader %s")
            result = *(eax_9 + 0x248)
            edi[7] -= 1
    else
        edi[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_11c)
    return result
}
