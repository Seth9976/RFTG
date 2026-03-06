// 函数名称: sub_55c380
// 虚拟地址: 0x55c380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_55c380(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    void* result = data_3079200
    int32_t* edi = *(result + 8)
    void* result_1 = nullptr
    
    if (arg4 s> 0)
        int32_t* esi_1 = arg3
        
        do
            int32_t eax = *esi_1
            
            if (eax == 0x4c)
                sub_55c2e0(esi_1)
            else if (eax - 0x1c u> 0x2f)
                int32_t eax_5 = sub_55c110(eax)
                
                if (*esi_1 != 5)
                label_55c520:
                    
                    if ((*(*edi + 0xe4))(edi, eax_5, esi_1[1]) s< 0)
                        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x7cb, 
                            "Dx9SetFunctionRenderState")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                else
                    if (sub_4e57c0() == 0)
                        goto label_55c520
                    
                    int32_t eax_7 = esi_1[1]
                    
                    if (eax_7 != 2)
                        if (eax_7 != 3)
                            goto label_55c520
                        
                        if ((*(*edi + 0xe4))(edi, eax_5, 2) s< 0)
                            sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 
                                0x7c5, "Dx9SetFunctionRenderState")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                    else if ((*(*edi + 0xe4))(edi, eax_5, 3) s< 0)
                        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x7bf, 
                            "Dx9SetFunctionRenderState")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
            else
                if (eax - 0x1c u> 0x2f)
                    sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x754, 
                        "Dx9SamplerStateTypeFromMaterialParam")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t eax_1
                
                switch (eax)
                    case 0x1c, 0x22, 0x28, 0x2e, 0x34, 0x3a, 0x40, 0x46
                        eax_1 = 1
                    case 0x1d, 0x23, 0x29, 0x2f, 0x35, 0x3b, 0x41, 0x47
                        eax_1 = 2
                    case 0x1e, 0x24, 0x2a, 0x30, 0x36, 0x3c, 0x42, 0x48
                        eax_1 = 3
                    case 0x1f, 0x25, 0x2b, 0x31, 0x37, 0x3d, 0x43, 0x49
                        eax_1 = 6
                    case 0x20, 0x26, 0x2c, 0x32, 0x38, 0x3e, 0x44, 0x4a
                        eax_1 = 5
                    case 0x21, 0x27, 0x2d, 0x33, 0x39, 0x3f, 0x45, 0x4b
                        eax_1 = 7
                
                int32_t ecx_3
                
                if (eax - 0x1c u> 5)
                    ecx_3 = 1
                else
                    ecx_3 = 0
                
                if ((*(*edi + 0x114))(edi, ecx_3, eax_1, esi_1[1]) s< 0)
                    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x7b4, 
                        "Dx9SetFunctionRenderState")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            result = result_1 + 1
            esi_1 = &esi_1[5]
            result_1 = result
        while (result s< arg4)
    
    return result
}
