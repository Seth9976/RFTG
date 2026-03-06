// 函数名称: sub_594b80
// 虚拟地址: 0x594b80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_594b80(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t esi
    int32_t var_2ac = esi
    int32_t edi
    int32_t var_2b0 = edi
    int32_t* eax_4 = sub_5a898b(arg2, "rb")
    
    if (eax_4 == 0)
        eax_4.b = 0
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_4
    
    void (* var_29c)(int32_t* arg1) __noreturn
    void (** var_1d8)(int32_t* arg1) __noreturn = sub_679010(&var_29c)
    var_29c = sub_594ae0
    void var_218
    __setjmp3(&__saved_ebp, esi, edi, &var_218, 0)
    sub_679060(&var_1d8, 0x3e, 0x1d0)
    sub_6796b0(&var_1d8, eax_4)
    sub_6794e0(&var_1d8, 1)
    sub_6798a0(&var_1d8)
    int32_t var_15c
    
    if (var_15c != 3)
        sub_4c5870("cinfo.output_components == 3", &data_83f3d3, "JpgImport.cpp", 0xac, 
            "JpgImportFileToImageSpec")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_168
    arg1[1] = var_168
    int32_t var_164
    arg1[2] = var_164
    arg1[4] = 4
    arg1[3] = sub_5540b0(4, arg1[1])
    arg1[2]
    *arg1 = sub_4cce80(sub_554170(arg1[4], var_164, arg1[1]))
    int32_t ecx_6 = arg1[2]
    
    if (ecx_6 s> 0x1000)
        sub_4c5870("pDestImage->height <= MAX_ROWS", &data_83f3d3, "JpgImport.cpp", 0xb5, 
            "JpgImportFileToImageSpec")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t i = 0
    
    if (ecx_6 s> 0)
        do
            int32_t ecx_9 = arg1[3] * i + *arg1
            i += 1
            *((i << 2) + &data_3161164) = ecx_9
        while (i s< arg1[2])
    
    int32_t eax_15 = arg1[2]
    void* esi_2 = nullptr
    
    if (eax_15 s> 0)
        do
            esi_2 += sub_679800(&var_1d8, (esi_2 << 2) + &data_3161168, eax_15 - esi_2)
            eax_15 = arg1[2]
        while (esi_2 s< eax_15)
    
    sub_594b10(arg1)
    sub_679410(&var_1d8)
    void (*** var_2b8_3)(int32_t* arg1) __noreturn = &var_1d8
    sub_679160()
    sub_5a8c61(eax_4)
    int32_t eax_17
    eax_17.b = 1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_17
}
