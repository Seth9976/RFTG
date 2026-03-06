// 函数名称: sub_560ed0
// 虚拟地址: 0x560ed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_560ed0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_690196
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_2ac
    int32_t eax_2 = __security_cookie ^ &var_2ac
    int32_t __saved_edi
    int32_t var_2bc = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 u> 0x10)
        sub_4c5870("vertexFormat >= 0 && vertexFormat < VERTEX_FORMAT_COUNT", &data_83f3d3, 
            "Windows\WindowsDx11.cpp", 0x4f2, "Dx11GetInputLayout")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** eax_6 = *(data_3079204 + 0x5c)
    
    if (eax_6 == 0)
        sub_4c5870("gDx11Interface->boundVertexShader", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x4f4, 
            "Dx11GetInputLayout")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_8 = sub_54c6a0(eax_6)
    int32_t* ebx_1 = sub_563ea0(data_3079204 + 0x40, eax_8) + (arg1 << 2) + 0x204
    int32_t result = *ebx_1
    
    if (result == 0)
        void* eax_11 = *(sub_54c910(*(data_3079204 + 0x5c)) + 4)
        int32_t eax_12 = *(eax_11 + 0x10)
        char* var_2a0 = *(eax_11 + 0x14)
        
        if (eax_12 == 0)
            result = 0
        else
            int32_t* edx_2 = sub_533af0(arg1)
            int32_t esi_2 = edx_2[2]
            int32_t* eax_13
            eax_13.b = 0
            void* edi_1 = nullptr
            int32_t esi_3 = neg.d(esi_2)
            int32_t esi_6 = neg.d(sbb.d(esi_3, esi_3, esi_2 != 0)) - 1
            int32_t* var_2a4 = edx_2
            char* const var_2a8 = nullptr
            char var_2ab_1 = 0
            char var_2a9_1 = 0
            char var_2aa_1 = 0
            
            if (esi_6 != 0xffffffff)
                void var_1dc
                void* ecx_4 = &var_1dc
                
                while (true)
                    int32_t edi_4 = esi_6 * 0xf
                    esi_6 += 1
                    int16_t* edi_5 = edx_2[1] + (edi_4 << 2)
                    
                    if (esi_6 s>= edx_2[2])
                        esi_6 = 0xffffffff
                    
                    *(ecx_4 + 8) = 0
                    *(ecx_4 + 0xc) = zx.d(*edi_5)
                    *(ecx_4 + 0x10) = 0
                    *(ecx_4 + 0x14) = 0
                    int32_t edx_3 = *(edi_5 + 0xc)
                    
                    if (edx_3 == data_315f72c)
                        *(ecx_4 - 4) = "POSITION"
                        *ecx_4 = zx.d(eax_13.b)
                        *(ecx_4 + 4) = 6
                        eax_13.b += 1
                    else if (edx_3 == data_315f730)
                        *(ecx_4 - 4) = "POSITION"
                        *ecx_4 = zx.d(eax_13.b)
                        *(ecx_4 + 4) = 0x10
                        eax_13.b += 1
                    else if (edx_3 == data_315f734)
                        *(ecx_4 - 4) = "POSITION"
                        *ecx_4 = zx.d(eax_13.b)
                        *(ecx_4 + 4) = 0x12
                        eax_13.b += 1
                    else if (edx_3 == data_315f738)
                        edx_3.b = var_2ab_1
                        uint32_t edi_6 = zx.d(edx_3.b)
                        edx_3.b += 1
                        *(ecx_4 - 4) = "NORMAL"
                        *ecx_4 = edi_6
                        *(ecx_4 + 4) = 6
                        var_2ab_1 = edx_3.b
                    else if (edx_3 == data_315f73c)
                        var_2ab_1 += 1
                        *(ecx_4 - 4) = "TANGENT"
                        *(ecx_4 + 4) = 6
                        *ecx_4 = 0
                    else if (edx_3 == data_315f740)
                        var_2ab_1 += 1
                        *(ecx_4 - 4) = "BINORMAL"
                        *(ecx_4 + 4) = 6
                        *ecx_4 = 0
                    else if (edx_3 == data_315f74c)
                        edx_3.b = var_2a9_1
                        uint32_t edi_7 = zx.d(edx_3.b)
                        edx_3.b += 1
                        *(ecx_4 - 4) = "COLOR"
                        *ecx_4 = edi_7
                        *(ecx_4 + 4) = 0x57
                        var_2a9_1 = edx_3.b
                    else if (edx_3 == data_315f750)
                        edx_3.b = var_2a9_1
                        uint32_t edi_8 = zx.d(edx_3.b)
                        edx_3.b += 1
                        *(ecx_4 - 4) = "COLOR"
                        *ecx_4 = edi_8
                        *(ecx_4 + 4) = 2
                        var_2a9_1 = edx_3.b
                    else if (edx_3 == data_315f754)
                        edx_3.b = var_2aa_1
                        uint32_t edi_9 = zx.d(edx_3.b)
                        edx_3.b += 1
                        *(ecx_4 - 4) = "TEXCOORD"
                        *ecx_4 = edi_9
                        *(ecx_4 + 4) = 0x10
                        var_2aa_1 = edx_3.b
                    else if (edx_3 != data_315f758)
                        if (edx_3 != data_315f744)
                            if (edx_3 != data_315f748)
                                if (edx_3 != data_315f79c && edx_3 != data_315f7a0
                                        && edx_3 != data_315f7a4)
                                    sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x582, 
                                        "Dx11GetInputLayout")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x57e, 
                                    "Dx11GetInputLayout")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            *(ecx_4 - 4) = "BLENDWEIGHT"
                            *(ecx_4 + 4) = 0x1c
                        else
                            *(ecx_4 - 4) = "BLENDINDICES"
                            *(ecx_4 + 4) = 0x1e
                        
                        *ecx_4 = 0
                    else
                        edx_3.b = var_2aa_1
                        uint32_t edi_10 = zx.d(edx_3.b)
                        edx_3.b += 1
                        *(ecx_4 - 4) = "TEXCOORD"
                        *ecx_4 = edi_10
                        *(ecx_4 + 4) = 0x12
                        var_2aa_1 = edx_3.b
                    
                    edi_1 = &var_2a8[1]
                    ecx_4 += 0x1c
                    var_2a8 = edi_1
                    
                    if (edi_1 s>= 0xf)
                        sub_4c5870("element < MAX_DESC_ELEMENTS - 1", &data_83f3d3, 
                            "Windows\WindowsDx11.cpp", 0x586, "Dx11GetInputLayout")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (esi_6 == 0xffffffff)
                        break
                    
                    edx_2 = var_2a4
            
            char* esi_7 = var_2a0
            int32_t* eax_15 = *(data_3079204 + 4)
            void var_1e0
            
            if ((*(*eax_15 + 0x2c))(eax_15, &var_1e0, edi_1, esi_7, eax_12, ebx_1) s>= 0)
                result = *ebx_1
            else
                char* const eax_19 = *(*(data_3079204 + 0x5c) + 0x20)
                
                if (eax_19 == 0)
                    eax_19 = &data_83f3d3
                
                char* const var_2c0_2 = eax_19
                sub_4c5680("dx11 CreateInputLayout failed on %s")
                var_2a4 = nullptr
                
                if (D3DReflect(esi_7, eax_12, 0x82e378, &var_2a4) s< 0)
                    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x591, 
                        "Dx11GetInputLayout")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t* eax_27 = var_2a4
                void var_278
                (*(*eax_27 + 0xc))(eax_27, &var_278)
                char* const eax_29 = &data_83f3d3
                var_2a8 = &data_83f3d3
                int32_t var_c_1 = 0
                int32_t esi_8 = 0
                int32_t var_264
                
                if (var_264 s> 0)
                    do
                        int32_t* eax_30 = var_2a4
                        int32_t var_294
                        
                        if ((*(*eax_30 + 0x1c))(eax_30, esi_8, &var_294) s< 0)
                            sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x59c, 
                                "Dx11GetInputLayout")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t var_290
                        int32_t var_2c0_6 = var_290
                        int32_t var_2c4_4 = var_294
                        var_c_1.b = 1
                        int128_t* eax_34 = *sub_4c4a50(&var_2a0, "%s%d ")
                        
                        if (eax_34 == 0)
                            eax_34 = &data_83f3d3
                        
                        sub_4c4620(&var_2a8, eax_34)
                        var_c_1.b = 0
                        sub_4c43d0(&var_2a0)
                        esi_8 += 1
                    while (esi_8 s< var_264)
                    
                    eax_29 = var_2a8
                    
                    if (eax_29 == 0)
                        eax_29 = &data_83f3d3
                
                char* const var_2c0_8 = eax_29
                sub_4c5680("shader need params: %s")
                int32_t var_c_2 = 0xffffffff
                sub_4c43d0(&var_2a8)
                result = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_2ac)
    return result
}
