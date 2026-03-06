// 函数名称: sub_4e2ca0
// 虚拟地址: 0x4e2ca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_4e2ca0(float arg1, char** arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69370c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_ec = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** result = arg2
    
    if (arg1 == 0)
        sub_4c5870("texture", &data_83f3d3, "Draw3d.cpp", 0xb73, "Draw3DSkyBox")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char** result_1 = result
    
    if (result == 0)
        if ((data_3165994 & 1) == 0)
            data_3165994.d |= 1
            char** result_2 = result
            data_3165990 = sub_509140(result + 5, "sys/skybox.material")
            int32_t var_8_1 = 0xffffffff
        
        result = data_3165990
        result_1 = result
    
    if ((data_3165994 & 2) == 0)
        data_3165994.d |= 2
        int32_t var_8_2 = 1
        result = sub_509140(2, "sys/skybox.structure")
        data_316598c = result
        int32_t var_8_3 = 0xffffffff
    
    char** ecx_2 = data_316598c
    int32_t ecx_3 = 0
    int32_t var_38 = 0
    void* ebx = &data_27e803c
    
    while (true)
        if (*(data_27e7fd0 + 0x27) != 0 || ecx_3 == 2)
            if (data_3078599 == 0)
                break
            
            float var_34 = fconvert.s(fconvert.t(10f))
            data_27e8560 = 1 << ecx_3.b
            void var_5c
            __builtin_memcpy(&var_5c, ebx, 0x1c)
            int32_t var_30_1 = 0
            int32_t var_28_1 = 0
            int32_t var_24_1 = 0x3f800000
            int32_t var_2c_1 = 0
            int32_t var_48
            int32_t var_1c_1 = var_48
            int32_t var_44
            int32_t var_18_1 = var_44
            int32_t var_4c
            int32_t var_20_1 = var_4c
            void var_dc
            sub_406370(&var_dc, var_4c, &var_34)
            void* const var_f0_2 = nullptr
            float var_9c[0x9]
            __builtin_memcpy(&var_9c, &var_dc, 0x40)
            result = sub_4e0050(ecx_2, &var_9c, result_1, arg1, var_f0_2)
            ecx_3 = var_38
        
        ecx_3 += 1
        ebx += 0x1c
        var_38 = ecx_3
        
        if (ebx s> 0x27e8074)
            if (data_3078599 != 0)
                data_27e8560 = 7
                fsbase->NtTib.ExceptionList = ExceptionList
                sub_5a6aba(eax_2 ^ &__saved_ebp)
                return result
            
            sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x31e, 
                "Draw3DSetDrawEyeMask")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x31e, 
        "Draw3DSetDrawEyeMask")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
