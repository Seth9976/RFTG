// 函数名称: sub_55ad10
// 虚拟地址: 0x55ad10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_55ad10(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t esi = *(arg4 + 8)
    int32_t ebx
    ebx.b = 0
    int32_t ecx = 0
    int32_t edx_1 = neg.d(esi)
    int32_t edx_4 = neg.d(sbb.d(edx_1, edx_1, esi != 0)) - 1
    int32_t var_a0 = 0
    char var_93 = 0
    char var_92 = 0
    char var_91 = 0
    int32_t var_a8 = esi
    void* result
    
    if (edx_4 == 0xffffffff)
    label_55af17:
        void var_90
        __builtin_memcpy(&var_90 + (ecx << 3), "\xff\x00\x00\x00\x11\x00\x00\x00", 8)
        void* ecx_6 = data_3079200
        int32_t* eax_4 = *(ecx_6 + 8)
        result = (*(*eax_4 + 0x158))(eax_4, &var_90, ecx_6 + (arg3 << 2) + 0xc)
        
        if (result s< 0)
            sub_4c5780("Failed to Create Dx Vertex Decl\n")
            sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x4d5, 
                "Dx9CreateVertexDecl")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else
        int32_t eax_3 = *(arg4 + 4)
        void var_8e
        result = &var_8e
        
        while (true)
            int32_t ecx_3 = edx_4 * 0xf
            edx_4 += 1
            int16_t* ecx_4 = eax_3 + (ecx_3 << 2)
            
            if (edx_4 s>= esi)
                edx_4 = 0xffffffff
            
            *(result - 2) = 0
            *(result + 3) = 0
            int32_t esi_1 = *(ecx_4 + 0xc)
            
            if (esi_1 == data_315f72c)
                ecx_4.w = *ecx_4
                *(result + 5) = ebx.b
                *(result + 2) = 2
                *(result + 4) = 0
                ebx.b += 1
                *result = ecx_4.w
            else if (esi_1 == data_315f730)
                ecx_4.w = *ecx_4
                *(result + 5) = ebx.b
                *(result + 2) = 1
                *(result + 4) = 0
                ebx.b += 1
                *result = ecx_4.w
            else if (esi_1 == data_315f734)
                ecx_4.w = *ecx_4
                *(result + 5) = ebx.b
                *(result + 2) = 6
                *(result + 4) = 0
                ebx.b += 1
                *result = ecx_4.w
            else if (esi_1 == data_315f738)
                ecx_4.w = *ecx_4
                *result = ecx_4.w
                ecx_4.b = var_93
                *(result + 5) = ecx_4.b
                ecx_4.b += 1
                *(result + 2) = 2
                *(result + 4) = 3
                var_93 = ecx_4.b
            else if (esi_1 == data_315f74c)
                ecx_4.w = *ecx_4
                *result = ecx_4.w
                ecx_4.b = var_92
                *(result + 5) = ecx_4.b
                ecx_4.b += 1
                *(result + 2) = 4
                *(result + 4) = 0xa
                var_92 = ecx_4.b
            else if (esi_1 == data_315f754)
                ecx_4.w = *ecx_4
                *result = ecx_4.w
                ecx_4.b = var_91
                *(result + 5) = ecx_4.b
                ecx_4.b += 1
                *(result + 2) = 1
                *(result + 4) = 5
                var_91 = ecx_4.b
            else if (esi_1 != data_315f758)
                if (esi_1 != data_315f744)
                    if (esi_1 != data_315f748)
                        if (esi_1 == data_315f79c || esi_1 == data_315f7a0 || esi_1 == data_315f7a4)
                            break
                        
                        sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x4c6, 
                            "Dx9CreateVertexDecl")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    ecx_4.w = *ecx_4
                    *(result + 2) = 8
                    *(result + 4) = 1
                else
                    ecx_4.w = *ecx_4
                    *(result + 2) = 5
                    *(result + 4) = 2
                
                *result = ecx_4.w
            else
                ecx_4.w = *ecx_4
                *result = ecx_4.w
                ecx_4.b = var_91
                *(result + 5) = ecx_4.b
                ecx_4.b += 1
                *(result + 2) = 6
                *(result + 4) = 5
                var_91 = ecx_4.b
            
            ecx = var_a0 + 1
            result += 8
            var_a0 = ecx
            
            if (ecx s>= 0xf)
                sub_4c5870("element < MAX_DELC_ELEMENTS - 1", &data_83f3d3, 
                    "Windows\WindowsGraphics.cpp", 0x4ca, "Dx9CreateVertexDecl")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (edx_4 == 0xffffffff)
                goto label_55af17
            
            esi = var_a8
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
