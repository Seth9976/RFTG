// 函数名称: sub_594880
// 虚拟地址: 0x594880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_594880(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* eax_1 = sub_5a898b(arg2, "wb")
    int32_t* eax_1 = sub_5a898b(arg2, "wb")
    
    if (eax_1 == 0)
        eax_1.b = 0
        return eax_1
    
    int128_t* eax_2 = sub_6662e0("1.5.12", 0, 0, 0)
    int128_t* var_8 = eax_2
    
    if (eax_2 == 0)
        sub_4c5870("Halt", &data_83f3d3, "PngImport.cpp", 0x1a5, "PngWriteImageSpecToFile")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int128_t* eax_4 = sub_663760(eax_2)
    int128_t* var_c = eax_4
    
    if (eax_4 == 0)
        sub_666310(&var_8, eax_4)
        sub_4c5870("Halt", &data_83f3d3, "PngImport.cpp", 0x1ad, "PngWriteImageSpecToFile")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t __saved_ebp
    int32_t esi
    struct _EXCEPTION_REGISTRATION_RECORD* edi
    __setjmp3(&__saved_ebp, esi, edi, sub_664090(var_8, sub_5ab190, 0x40), 0, edi, esi)
    int32_t eax_7 = *(arg1 + 0x10)
    int32_t var_18 = 0x80
    char eax_11
    
    if (eax_7 == 1)
        eax_11 = 6
    else
        if (eax_7 != 4)
            sub_4c5870("Halt", &data_83f3d3, "PngImport.cpp", 0x1c8, "PngWriteImageSpecToFile")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        eax_11 = 2
        var_18 = 0x1880
    
    sub_6646a0(var_8, var_c, *(arg1 + 4), *(arg1 + 8), 8, eax_11, 0, 0, 0)
    uint32_t eax_14 = sub_5540b0(*(arg1 + 0x10), *(arg1 + 4))
    int32_t i = 0
    int32_t edi_3 = sub_6664e0(var_8, *(arg1 + 8) * 4)
    
    if (*(arg1 + 8) s> 0)
        do
            int128_t* eax_17 = sub_6664e0(var_8, eax_14)
            *(edi_3 + (i << 2)) = eax_17
            sub_5ab990(eax_17, *(arg1 + 0xc) * i + *arg1, eax_14)
            i += 1
        while (i s< *(arg1 + 8))
    
    sub_665460(var_8, var_c, edi_3)
    sub_6627a0(var_8, eax_1)
    int32_t var_30_5 = 0
    sub_6661e0(var_8, var_c, var_18)
    int32_t i_1 = 0
    
    if (*(arg1 + 8) s> 0)
        do
            sub_666530(var_8, *(edi_3 + (i_1 << 2)))
            i_1 += 1
        while (i_1 s< *(arg1 + 8))
    
    sub_666530(var_8, edi_3)
    sub_666310(&var_8, &var_c)
    sub_5a8c61(eax_1)
    int32_t eax_21
    eax_21.b = 1
    return eax_21
}
