// 函数名称: sub_55ccb0
// 虚拟地址: 0x55ccb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55ccb0(void* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    int32_t* var_24 = arg2
    int32_t* eax_1 = *sub_466320(var_24)
    long double x87_r7 = float.t(*eax_1)
    int32_t* esp_1 = &var_20
    
    if (*eax_1 s< 0)
        x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)
    
    int32_t edx = eax_1[1]
    float var_14 = fconvert.s(x87_r7)
    long double x87_r7_1 = float.t(eax_1[1])
    
    if (edx s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    float var_10 = fconvert.s(x87_r7_1)
    long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(eax_1[2])))
    var_14 = fconvert.s(x87_r7_3 * fconvert.t(var_14))
    *(arg1 + 0x64) = var_14
    *(arg1 + 0x68) = fconvert.s(x87_r7_3 * fconvert.t(var_10))
    int32_t* ebx_1
    
    if (arg2 != 0)
        char eax_4 = sub_5618d0(arg2)
        var_24 = arg2
        
        if (eax_4 == 0)
            int32_t* eax_7 = sub_50ba10(var_24)
            void* ecx_2 = *eax_7
            var_24 = &var_14
            int32_t var_28_1 = 0
            int32_t* var_2c = eax_7
            esp_1 = &var_2c
            
            if ((*(ecx_2 + 0x48))(var_2c, var_28_1, var_24) s< 0)
                char const* const var_30 = "Dx9TextureGetSurface"
                int32_t var_34 = 0x97d
                char const* const var_38 = "Windows\WindowsGraphics.cpp"
                char* const var_3c = &data_83f3d3
                char const* const var_40 = "SUCCEEDED(hr)"
                sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x97d, 
                    "Dx9TextureGetSurface")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        else
            float eax_5 = sub_50ba10(var_24)
            var_14 = eax_5
            void* edx_1 = *eax_5
            var_24 = eax_5
            esp_1 = &var_24
            (*(edx_1 + 4))(var_24)
        
        ebx_1 = esp_1[3]
    else
        ebx_1 = nullptr
    
    int32_t* esi_2 = arg3
    
    if (esi_2 != 0)
        char eax_12 = sub_5618d0(esi_2)
        *(esp_1 - 4) = esi_2
        
        if (eax_12 == 0)
            int32_t* eax_17 = sub_50ba10()
            void* ecx_5 = *eax_17
            *(esp_1 - 4) = &esp_1[5]
            *(esp_1 - 8) = 0
            *(esp_1 - 0xc) = eax_17
            esp_1 -= 0xc
            
            if ((*(ecx_5 + 0x48))() s< 0)
                *(esp_1 - 4) = "Dx9TextureGetSurface"
                *(esp_1 - 8) = 0x97d
                *(esp_1 - 0xc) = "Windows\WindowsGraphics.cpp"
                *(esp_1 - 0x10) = &data_83f3d3
                *(esp_1 - 0x14) = "SUCCEEDED(hr)"
                sub_4c5870()
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        else
            int32_t* eax_13 = sub_50ba10()
            esp_1[5] = eax_13
            int32_t edx_2 = *(*eax_13 + 4)
            *(esp_1 - 4) = eax_13
            esp_1 -= 4
            edx_2()
        
        esi_2 = esp_1[5]
    
    int32_t* eax_14 = *(arg1 + 8)
    int32_t edx_3 = *(*eax_14 + 0x94)
    *(esp_1 - 4) = ebx_1
    *(esp_1 - 8) = 0
    *(esp_1 - 0xc) = eax_14
    
    if (edx_3() s< 0)
        *(esp_1 - 4) = "Dx9GraphicsInterface::RenderTargetSetTextures"
        *(esp_1 - 8) = 0x996
        *(esp_1 - 0xc) = "Windows\WindowsGraphics.cpp"
        *(esp_1 - 0x10) = &data_83f3d3
        *(esp_1 - 0x14) = "SUCCEEDED(hr)"
        sub_4c5870()
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_21 = *(arg1 + 8)
    int32_t edx_5 = *(*eax_21 + 0x9c)
    *(esp_1 - 4) = esi_2
    *(esp_1 - 8) = eax_21
    
    if (edx_5() s< 0)
        *(esp_1 - 0xc) = "Dx9GraphicsInterface::RenderTargetSetTextures"
        *(esp_1 - 0x10) = 0x999
        *(esp_1 - 0x14) = "Windows\WindowsGraphics.cpp"
        *(esp_1 - 0x18) = &data_83f3d3
        *(esp_1 - 0x1c) = "SUCCEEDED(hr)"
        sub_4c5870()
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_7 = *(*ebx_1 + 8)
    *(esp_1 - 0xc) = ebx_1
    void* esp_25 = esp_1 - 0xc
    int32_t result = ecx_7()
    bool cond:0 = esi_2 != 0
    
    if (esi_2 != 0)
        int32_t eax_25 = *(*esi_2 + 8)
        *(esp_25 - 4) = esi_2
        result = eax_25()
        cond:0 = esi_2 != 0
    
    *(arg1 + 0x6c) = cond:0
    *esp_25
    *(esp_25 + 4)
    *(esp_25 + 8)
    return result
}
