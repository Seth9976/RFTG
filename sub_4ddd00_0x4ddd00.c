// 函数名称: sub_4ddd00
// 虚拟地址: 0x4ddd00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4ddd00()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    *(data_27e7fe4 + 0xde) = 0
    
    if (data_3078599 != 0)
        sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "VR.cpp", 0x1f5, 
            "VRIsDrawingEye")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_4c
    int32_t* eax_4 = &var_4c
    int32_t eax_6
    int32_t var_48
    int32_t var_44
    
    if (data_26a4600 == 0)
        long double x87_r7_2 = fconvert.t(data_27e7fe8)
        float var_34 = fconvert.s(x87_r7_2 / fconvert.t(data_27e7fec))
        float var_30_1 = fconvert.s(x87_r7_2)
        long double x87_r6_3 = fconvert.t(2.0)
        float var_40_2 = fconvert.s(fconvert.t(var_34) * x87_r6_3)
        var_34 = var_40_2
        float var_30_2 = fconvert.s(x87_r6_3 * fconvert.t(var_30_1))
        sub_405e30(eax_4, &var_34, &data_840a00)
        float var_18_1 = fconvert.s(fconvert.t(data_27e7ff0))
        int32_t edx_4 = var_48
        long double x87_r7_8 = fconvert.t(data_27e7ff4)
        int32_t var_28 = var_4c
        float var_14_1 = fconvert.s(x87_r7_8)
        int32_t var_24_1 = edx_4
        int32_t var_20_1 = var_44
        float var_1c_1 = var_40_2
        sub_4ddbe0(&var_28)
        eax_6 = 2
    else
        sub_508330(eax_4)
        float var_1c = fconvert.s(fconvert.t(data_27e7ff0))
        int32_t edx = var_48
        float var_18 = fconvert.s(fconvert.t(data_27e7ff4))
        int32_t var_40
        int32_t var_44_1 = var_40
        int32_t var_50 = var_4c
        var_4c = edx
        int32_t* var_e0_1 = &var_50
        var_48 = var_44
        float var_40_1 = var_1c
        float var_3c = var_18
        sub_4ddbe0(var_e0_1)
        eax_6 = data_26a4564
        
        if (eax_6 != 0 && eax_6 != 1)
            if (eax_6 != 0x3e8)
                sub_4c5870("Halt", &data_83f3d3, "Draw3d.cpp", 0x3a9, "RenderUseSubmittedCamera")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            eax_6 = 3
    void var_2c
    __builtin_memcpy(&var_2c, eax_6 * 0x1c + &data_27e803c, 0x1c)
    float var_54
    float* eax_8
    int32_t edx_6
    eax_8, edx_6 = sub_508860(&var_54, &var_2c)
    __builtin_memcpy(&var_2c, eax_8, 0x1c)
    void var_d4
    void* result = &var_d4
    sub_4e4a20(result, edx_6, &var_2c)
    bool cond:2 = data_3078599 == 0
    void var_94
    __builtin_memcpy(&var_94, &var_d4, 0x40)
    
    if (cond:2)
        __builtin_memcpy(0x27e82b4, &var_94, 0x40)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return result
    
    sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x35f, "Draw3DSetView")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
