// 函数名称: sub_4167d0
// 虚拟地址: 0x4167d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4167d0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69131e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_34 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = arg4
    result[1] = arg3
    void* ecx = &result[4]
    *result = arg5
    int32_t eax_4 = data_3165498
    result[0x43] = arg2
    int32_t var_24 = 0
    void* var_20 = ecx
    
    while (true)
        if ((data_3165494 & 1) == 0)
            data_3165494.d |= 1
            int32_t edi_1 = 0
            int32_t var_c_1 = 0
            int32_t* ecx_1 = data_307c58c
            
            if (ecx_1[1] != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*ecx_1 == 0)
                sub_520800(eax_4, arg2.b, ecx_1, 0)
                
                if (*ecx_1 == 0)
                    sub_509540(ecx_1)
            
            int32_t* ebx_1 = **ecx_1
            int32_t esi_1 = 0
            
            while (true)
                if (edi_1 s>= ebx_1[1])
                    char* const eax_13 = ecx_1[8]
                    
                    if (eax_13 == 0)
                        eax_13 = &data_83f3d3
                    
                    char* const var_38 = eax_13
                    char const* const var_3c = "btnFull"
                    sub_4c57f0("couldn't find element %s in %s")
                    sub_4c5870("Halt", &data_83f3d3, "UIDef.cpp", 0x1d2, "UILayoutGetElementIndex")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                char* eax_7 = *(esi_1 + *ebx_1 + 8)
                char const* const edx = "btnFull"
                int32_t eax_9
                
                while (true)
                    int32_t ecx_2
                    ecx_2.b = *eax_7
                    char const temp0_1 = *edx
                    bool c_1 = ecx_2.b u< temp0_1
                    
                    if (ecx_2.b == temp0_1)
                        if (ecx_2.b == 0)
                            eax_9 = 0
                            break
                        
                        ecx_2.b = eax_7[1]
                        char temp3_1 = edx[1]
                        c_1 = ecx_2.b u< temp3_1
                        
                        if (ecx_2.b == temp3_1)
                            eax_7 = &eax_7[2]
                            edx = &edx[2]
                            
                            if (ecx_2.b != 0)
                                continue
                            
                            eax_9 = 0
                            break
                    
                    bool c_2 = unimplemented  {sbb eax, eax}
                    eax_9 = sbb.d(sbb.d(eax_7, eax_7, c_1), 0xffffffff, c_2)
                    break
                
                if (eax_9 == 0)
                    result = arg4
                    ecx = var_20
                    eax_4 = edi_1
                    data_3165498 = eax_4
                    int32_t var_c_2 = 0xffffffff
                    break
                
                edi_1 += 1
                esi_1 += 0x118
        
        *ecx = data_307c58c
        arg2 = var_24 + 1
        *(ecx + 4) = eax_4
        *(ecx + 8) = 1
        ecx += 0x1c
        var_24 = arg2
        var_20 = ecx
        
        if (arg2 s>= 9)
            break
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
