// 函数名称: sub_5945a0
// 虚拟地址: 0x5945a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5945a0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int128_t* eax = sub_6662e0("1.5.12", 0, 0, 0)
    int128_t* eax = sub_6662e0("1.5.12", 0, 0, 0)
    int128_t* var_8 = eax
    
    if (eax == 0)
        sub_4c5870("Halt", &data_83f3d3, "PngImport.cpp", 0x12f, "PngWriteImageSpecToBits")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int128_t* eax_2 = sub_663760(eax)
    int128_t* var_c = eax_2
    
    if (eax_2 == 0)
        sub_666310(&var_8, eax_2)
        sub_4c5870("Halt", &data_83f3d3, "PngImport.cpp", 0x137, "PngWriteImageSpecToBits")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t __saved_ebp
    int32_t esi
    struct _EXCEPTION_REGISTRATION_RECORD* edi
    __setjmp3(&__saved_ebp, esi, edi, sub_664090(var_8, sub_5ab190, 0x40), 0, edi, esi)
    int32_t eax_6 = *(arg1 + 0x10)
    
    if (eax_6 != 1 && eax_6 != 4)
        sub_4c5870(
            "sourceImage->format == TEXTUREFORMAT_ARGB8888 || sourceImage->format == TEXTUREFORMAT_ARGB0888", 
            &data_83f3d3, "PngImport.cpp", 0x144, "PngWriteImageSpecToBits")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t var_14 = 0x80
    char eax_11
    
    if (eax_6 == 1)
        eax_11 = 6
    else
        if (eax_6 != 4)
            sub_4c5870("Halt", &data_83f3d3, "PngImport.cpp", 0x153, "PngWriteImageSpecToBits")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        eax_11 = 2
        var_14 = 0x1880
    
    sub_6646a0(var_8, var_c, *(arg1 + 4), *(arg1 + 8), 8, eax_11, 0, 0, 0)
    uint32_t eax_13 = sub_5540b0(*(arg1 + 0x10), *(arg1 + 4))
    int32_t eax_15 = sub_6664e0(var_8, *(arg1 + 8) * 4)
    int32_t i = 0
    
    if (*(arg1 + 8) s> 0)
        do
            int128_t* eax_16 = sub_6664e0(var_8, eax_13)
            *(eax_15 + (i << 2)) = eax_16
            sub_5ab990(eax_16, *(arg1 + 0xc) * i + *arg1, eax_13)
            i += 1
        while (i s< *(arg1 + 8))
    
    int32_t edx_6 = sub_665460(var_8, var_c, eax_15)
    *(arg1 + 8)
    int32_t eax_19
    int32_t edx_7
    eax_19, edx_7 = sub_554170(*(arg1 + 0x10), edx_6, *(arg1 + 4))
    int32_t esi_2
    
    if (eax_19 s<= 0x100)
        esi_2 = 0x100
    else
        *(arg1 + 8)
        esi_2 = sub_554170(*(arg1 + 0x10), edx_7, *(arg1 + 4))
    
    int32_t var_20 = sub_4cce80(esi_2)
    int32_t var_1c = 0
    int32_t var_18 = esi_2
    sub_6666f0(var_8, &var_20, sub_594530, 0)
    int32_t var_40_2 = 0
    sub_6661e0(var_8, var_c, var_14)
    int32_t i_1 = 0
    arg2[1] = var_20
    *arg2 = var_1c
    
    if (*(arg1 + 8) s> 0)
        do
            sub_666530(var_8, *(eax_15 + (i_1 << 2)))
            i_1 += 1
        while (i_1 s< *(arg1 + 8))
    
    sub_666530(var_8, eax_15)
    return sub_666310(&var_8, &var_c)
}
