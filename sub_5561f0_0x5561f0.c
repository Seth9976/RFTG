// 函数名称: sub_5561f0
// 虚拟地址: 0x5561f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5561f0(char arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f710
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_110 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t* arg_4
    void* ecx = *arg_4
    int32_t var_28 = 0
    int32_t var_24 = 0
    int32_t var_20 = 0
    var_8_1.b = 1
    sub_5560b0(&var_28, "HAVE_VERTEX_SHADER")
    sub_5560b0(&var_28, "HAVE_PIXEL_SHADER")
    char* result_1
    
    for (int32_t i = 0; i s< 2; )
        int32_t* eax_4 = __execvp(0x28, 0x10)
        
        if (eax_4 == 0)
            sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_4fe7d0(eax_4, data_315f7dc)
        int32_t* eax_6 = ecx + i * 0x14
        char* eax_7 = *eax_6
        
        if (*eax_7 == 0)
            if (i == 1)
                eax_7 = "MainPS"
            else if (i == 0)
                eax_7 = "MainVS"
        
        char* result_4 = result_1
        
        if (arg1 == 0)
            if (result_4 == 0)
                result_4 = &data_83f3d3
            
            if (sub_5637b0(eax_7, result_4, &var_28, i, eax_7, i, &eax_4[5], &eax_4[4], 0) == 0)
                sub_4c5870("Halt", &data_83f3d3, "ShaderImport.cpp", 0x98, "ShaderImport")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            char* result_6 = result_1
            
            if (result_6 == 0)
                result_6 = &data_83f3d3
            
            if (sub_54ad10(eax_4, result_6) == 0)
                sub_4c5870("Halt", &data_83f3d3, "ShaderImport.cpp", 0xb0, "ShaderImport")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        else
            if (result_4 == 0)
                result_4 = &data_83f3d3
            
            if (sub_5637b0(eax_7, result_4, &var_28, i, eax_7, i, &eax_4[5], &eax_4[4], 1) == 0)
                void* const eax_9 = &data_83fae0
                char* const eax_10
                
                while (true)
                    if (*eax_9 == i)
                        eax_10 = *(eax_9 + 4)
                        break
                    
                    eax_9 += 8
                    
                    if (*(eax_9 + 4) == 0)
                        eax_10 = &data_83f3d3
                        break
                
                char* result_2 = result_1
                char* const var_118_3 = eax_10
                sub_4c5680("dx11 shader %s reimport failed to read '%s'")
            
            char* result_5 = result_1
            
            if (result_5 == 0)
                result_5 = &data_83f3d3
            
            if (sub_54aea0(eax_4, result_5) == 0)
                char* result_3 = result_1
                char* result_7 = &data_83f3d3
                
                if (result_3 != 0)
                    result_7 = result_3
                
                void* const eax_12 = &data_83fae0
                
                while (true)
                    if (*eax_12 == i)
                        char* result_9 = result_7
                        int32_t var_118_6 = *(eax_12 + 4)
                        sub_4c5680("shader %s opengl reimport failed to read '%s'")
                        break
                    
                    eax_12 += 8
                    
                    if (*(eax_12 + 4) == 0)
                        char* result_8 = result_7
                        char* const var_118_4 = &data_83f3d3
                        sub_4c5680("shader %s opengl reimport failed to read '%s'")
                        break
        
        i += 1
        eax_6[1] = eax_4
    
    *(ecx + 0x28) = 0
    void* eax_16 = *(ecx + 4)
    arg_4 = nullptr
    void* result
    void* ebx_1
    int32_t esi_3
    
    if (D3DReflect(*(eax_16 + 0x14), *(eax_16 + 0x10), 0x82e378, &arg_4) s>= 0)
        int32_t* eax_25 = arg_4
        void var_100
        (*(*eax_25 + 0xc))(eax_25, &var_100)
        int32_t var_f4
        
        if (var_f4 u> 0)
            int32_t* eax_26 = arg_4
            int32_t* eax_27 = (*(*eax_26 + 0x10))(eax_26, 0)
            void var_44
            
            if ((**eax_27)(eax_27, &var_44) s< 0)
                sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "ShaderImport.cpp", 0xdf, "ShaderImport")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t var_18_2 = 0
            int32_t var_3c
            
            if (var_3c u> 0)
                int32_t ecx_12 = 0
                
                do
                    int32_t* eax_33 = (*(*eax_27 + 4))(eax_27, ecx_12)
                    char* var_68
                    (**eax_33)(eax_33, &var_68)
                    char* ecx_14 = var_68
                    int32_t ebx_3 = 0
                    
                    if (data_8bd33c s> 0)
                        void* edi_1 = nullptr
                        void* edx_9
                        
                        while (true)
                            edx_9 = data_8bd338
                            
                            if (sub_5a9697(*(edi_1 + edx_9 + 4), ecx_14) == 0)
                                break
                            
                            ebx_3 += 1
                            edi_1 += 0x3c
                            
                            if (ebx_3 s>= data_8bd33c)
                                goto label_5565d0
                        
                        int32_t esi_5 = *(edi_1 + edx_9)
                        
                        if (esi_5 == 0x60 || esi_5 == 0x61 || esi_5 == 0x62)
                            *(ecx + 0x28) = 1
                            int32_t var_60
                            *(ecx + 0x2c) = var_60 u>> 6
                            break
                    
                label_5565d0:
                    ecx_12 = var_18_2 + 1
                    var_18_2 = ecx_12
                while (ecx_12 u< var_3c)
        
        int32_t* eax_38 = arg_4
        (*(*eax_38 + 8))(eax_38)
        var_8_1.b = 0
        sub_556890(&var_28)
        int32_t var_8_3 = 0xffffffff
        result = result_1
        
        if (result != 0 && *result != 0)
            ebx_1 = result - 0x10
            
            if (*(result - 0x10) != 0xfafafafa)
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t temp1_1 = *(ebx_1 + 4)
            *(ebx_1 + 4) -= 1
            
            if (temp1_1 == 1)
                void* edx_13 = data_26a44e4
                esi_3 = *(ebx_1 + 0xc) + 0x10
                
                if (edx_13 == 0)
                    sub_4f4250()
                    edx_13 = data_26a44e4
                
                int32_t eax_40 = 0
                int32_t* edi
                
                while (true)
                    if (esi_3 s<= 1 << (eax_40.b + 4))
                        edi = edx_13 + eax_40 * 0x14
                        break
                    
                    eax_40 += 1
                    
                    if (eax_40 s>= 7)
                        edi = edx_13 + 0x8c
                        break
                
                sub_4f4430(ebx_1, edi, esi_3)
    else
        var_8_1.b = 0
        sub_556890(&var_28)
        int32_t var_8_2 = 0xffffffff
        result = result_1
        
        if (result != 0 && *result != 0)
            ebx_1 = sub_4c4060(&result_1)
            int32_t temp0_1 = *(ebx_1 + 4)
            *(ebx_1 + 4) -= 1
            
            if (temp0_1 == 1)
                esi_3 = *(ebx_1 + 0xc) + 0x10
                sub_4f4430(ebx_1, sub_4f4380(esi_3), esi_3)
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
