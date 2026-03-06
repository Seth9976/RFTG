// 函数名称: sub_594e60
// 虚拟地址: 0x594e60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_594e60(int32_t arg1 @ esi, struct _EXCEPTION_REGISTRATION_RECORD* arg2 @ edi, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: __chkstk(0x42d4)
    __chkstk(0x42d4)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    void (* var_2a8)(int32_t* arg1) __noreturn
    void (** var_1e0)(int32_t* arg1) __noreturn = sub_679010(&var_2a8)
    void* esi = nullptr
    int32_t var_10_1 = 0
    void var_224
    int32_t* var_14 = &var_224
    var_2a8 = sub_594ae0
    __setjmp3(&__saved_ebp, 0, arg2, var_14, var_10_1, arg2, arg1)
    sub_679060(&var_1e0, 0x3e, 0x1d0)
    int32_t var_2bc = arg4
    int32_t var_10_4 = 1
    void (*** var_14_2)(int32_t* arg1) __noreturn = &var_1e0
    int32_t var_2b8 = 0
    int32_t var_2b4 = arg5
    void* (* var_2d0)(void* arg1) = sub_594db0
    int32_t (* var_2cc)(void* arg1) = sub_594dd0
    int32_t* (* var_2c8)(void* arg1, int32_t arg2) = sub_594e30
    int32_t (* var_2c4)(int32_t* arg1, int32_t arg2) = sub_67b2d0
    int32_t (* var_2c0)() = sub_4d35a0
    int32_t var_2d4 = 0
    int32_t var_2d8 = 0
    int32_t* var_1c8 = &var_2d8
    sub_6794e0(var_14_2, var_10_4)
    sub_6798a0(&var_1e0)
    int32_t var_164
    
    if (var_164 != 3)
        sub_4c5870("cinfo.output_components == 3", &data_83f3d3, "JpgImport.cpp", 0x169, 
            "JpgImportBitsToImageSpec")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_4 = arg3[2]
    int32_t var_16c
    
    if (ecx_4 != var_16c)
        sub_4c5870("pDestImage->height == (int)cinfo.output_height", &data_83f3d3, "JpgImport.cpp", 
            0x16b, "JpgImportBitsToImageSpec")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_170
    
    if (arg3[1] != var_170)
        sub_4c5870("pDestImage->width == (int)cinfo.output_width", &data_83f3d3, "JpgImport.cpp", 
            0x16c, "JpgImportBitsToImageSpec")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*arg3 == 0)
        sub_4c5870("pDestImage->pImage != NULL", &data_83f3d3, "JpgImport.cpp", 0x16d, 
            "JpgImportBitsToImageSpec")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (ecx_4 s> 0x1000)
        sub_4c5870("pDestImage->height <= MAX_ROWS", &data_83f3d3, "JpgImport.cpp", 0x170, 
            "JpgImportBitsToImageSpec")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t i = 0
    
    if (ecx_4 s> 0)
        do
            int32_t ecx_7 = arg3[3] * i + *arg3
            i += 1
            int32_t var_42dc[0x1001]
            var_42dc[i] = ecx_7
        while (i s< arg3[2])
    
    int32_t eax_13 = arg3[2]
    
    if (eax_13 s> 0)
        do
            esi += sub_679800(&var_1e0, &(&__saved_ebp)[esi - 0x10b5], eax_13 - esi)
            eax_13 = arg3[2]
        while (esi s< eax_13)
    
    sub_594b10(arg3)
    sub_679410(&var_1e0)
    void (*** var_10_12)(int32_t* arg1) __noreturn = &var_1e0
    sub_679160()
    int32_t result
    result.b = 1
    sub_5a6aba(arg2 ^ &__saved_ebp)
    return result
}
